#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <memory>
#include <map>
#include <set>
#include "..\..\12.1\12.1.6\12.22.h"

using std::vector;
using std::string;
using std::ostream;
using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::istringstream;
using std::shared_ptr;
using std::map;
using std::set;

using line_no = StrBlob::size_type;
string make_plural(size_t curr, const string &word, const string &ending)
{
	return (curr > 1) ? word + ending : word;
}

class QueryResult;
class TextQuery
{
	public:
		TextQuery(ifstream&);
		QueryResult query(const string&) const;
	private:
		shared_ptr<StrBlob> file;
		map<string, shared_ptr<set<line_no>>> wm;
};

TextQuery::TextQuery(ifstream &is) : file(new StrBlob)
{
	string text;
	while(getline(is, text))
	{
		file->push_back(text);
		int n = file->size() - 1;
		istringstream line(text);
		string word;
		while(line >> word)
		{
			auto &lines = wm[word];
			if(!lines)
			{
				lines.reset(new set<line_no>);
			}
			lines->insert(n);
		}
	}
}

class QueryResult
{
	friend ostream& print(ostream&, const QueryResult&);
	public:
		QueryResult(string s, shared_ptr<set<line_no>> p, shared_ptr<StrBlob> f) : sought(s), lines(p), file(f) { }
		set<line_no>::iterator begin() const
		{
			return lines->begin();
		}
		set<line_no>::iterator end() const
		{
			return lines->end();
		}
		shared_ptr<StrBlob> get_file() const
		{
			return file;
		}
	private:
		string sought;
		shared_ptr<set<line_no>> lines;
		shared_ptr<StrBlob> file; 
};

QueryResult TextQuery::query(const string &sought) const
{
	static shared_ptr<set<line_no>> nodata(new set<line_no>);
	auto loc = wm.find(sought);
	if(loc == wm.end())
	{
		return QueryResult(sought, nodata, file);
	}
	else
	{
		return QueryResult(sought, loc->second, file);
	}
}

ostream &print(ostream &os, const QueryResult &qr)
{
	os << qr.sought << " occurs " << qr.lines->size() << " "
	<< make_plural(qr.lines->size(), "time", "s") << endl;
	for(auto num : *qr.lines)
	{
		ConstStrBlobPtr sr(*qr.file, num);
		os << "\t(line " << num + 1 << ") " << sr.deref() << endl;
		return os;
	}
}

void runQueries(ifstream &infile)
{
	TextQuery tp(infile);
	while(true)
	{
		cout << "enter word to look for, or q to quit:";
		string s;
		if(!(cin >> s) || s == "q")
		{
			break;
		}
		print(cout, tp.query(s)) << endl;
	}
}

int main()
{
	ifstream infile("Text.txt");
	runQueries(infile);
	return 0;
}
