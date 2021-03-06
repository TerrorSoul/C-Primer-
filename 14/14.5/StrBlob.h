#include <vector>
#include <string>
#include <memory>
#include <stdexcept>

using std::vector;
using std::string;
using std::shared_ptr;
using std::make_shared;
using std::initializer_list;
using std::out_of_range;

class StrBlobPtr;

class StrBlob
{
	friend class StrBlobPtr;
	friend bool operator==(const StrBlob&, const StrBlob&);
	friend bool operator!=(const StrBlob&, const StrBlob&);
	friend bool operator<(const StrBlob&, const StrBlob&);
	friend bool operator>(const StrBlob&, const StrBlob&);
	friend bool operator<=(const StrBlob&, const StrBlob&);
	friend bool operator>=(const StrBlob&, const StrBlob&);
	public:
		typedef vector<string>::size_type size_type;
		StrBlob();
		StrBlob(initializer_list<string> il);
		size_type size() const
		{
			return data->empty();
		}
		bool empty() const
		{
			return data->empty();
		}
		void push_back(const string &t)
		{
			data->push_back(t);
		}
		void pop_back();
		string& front();
		string& back();
		string& front() const;
		string& back() const;
		std::string& operator[](std::size_t);
		const std::string& operator[](std::size_t) const;
		StrBlobPtr begin();
		StrBlobPtr end();
	private:
		shared_ptr<vector<string>> data;
		void check(size_type i, const string &msg) const;
};

StrBlob::StrBlob() : data(make_shared<vector<string>>()) { }
StrBlob::StrBlob(initializer_list<string> il) : data(make_shared<vector<string>>(il)) { }

void StrBlob::check(size_type i, const string &msg) const
{
	if(i >= data->size())
	{
		throw out_of_range(msg);
	}
}

string& StrBlob::front()
{
	check(0, "front on empty StrBlob");
	return data->front();
}
string& StrBlob::back()
{
	check(0, "back on empty StrBlob");
	return data->back();
}
string& StrBlob::front() const
{
	check(0, "front on empty StrBlob");
	return data->front();
}
string& StrBlob::back() const
{
	check(0, "back on empty StrBlob");
	return data->back();
}
void StrBlob::pop_back()
{
	check(0, "pop_back on empty StrBlob");
	data->pop_back();
}

std::string& StrBlob::operator[](std::size_t n)
{
	check(n, "out of range");
	return data->at(n);
}
const std::string& StrBlob::operator[](std::size_t n) const
{
	check(n, "out of range");
	return data->at(n);
}

bool operator==(const StrBlob &lhs, const StrBlob &rhs)
{
	return *lhs.data == *rhs.data;
}
bool operator!=(const StrBlob &lhs, const StrBlob &rhs)
{
	return !(lhs == rhs);
}

bool operator<(const StrBlob &lhs, const StrBlob &rhs)
{
	return std::lexicographical_compare(lhs.data->begin(), lhs.data->end(), rhs.data->begin(), rhs.data->end());
}
bool operator>(const StrBlob &lhs, const StrBlob &rhs)
{
	return rhs < lhs;
}
bool operator<=(const StrBlob &lhs, const StrBlob &rhs)
{
	return !(rhs < lhs);
}
bool operator>=(const StrBlob &lhs, const StrBlob &rhs)
{
	return !(lhs < rhs);
}
