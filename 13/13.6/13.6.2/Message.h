#include <string>
#include <set>
#include "Folder.h"

class Folder;

class Message
{
	friend class Folder;
	friend void swap(Message&, Message&);
	public:
		explicit Message(const std::string &str = "") : contents(str) {}
		Message(const Message&);
		Message(Message&&);
		Message& operator=(const Message&);
		Message& operator=(Message&&);
		~Message();
		void save(Folder&);
		void remove(Folder&);
	private:
		std::string contents;
		std::set<Folder*> folders;
		void add_to_Folders(const Message&);
		void remove_from_Folders();
		void move_Folders(Message*);
};

void Message::save(Folder &f)
{
	folders.insert(&f);
	f.addMsg(this);
}

void Message::remove(Folder &f)
{
	folders.erase(&f);
	f.remMsg(this);
}

void Message::add_to_Folders(const Message &m)
{
	for(auto f : m.folders)
	{
		f->addMsg(this);
	}
}

Message::Message(const Message &m) : contents(m.contents), folders(m.folders)
{
	add_to_Folders(m);
}

Message::Message(Message &&m)
 : contents(std::move(m.contents))
{
	move_Folders(&m);
}

void Message::remove_from_Folders()
{
	for(auto f : folders)
	{
		f->remMsg(this);
	}
}

void Message::move_Folders(Message *m)
{
	folders = std::move(m->folders);
	for(auto f : folders)
	{
		f->remMsg(m);
		f->addMsg(this);
	}
	m->folders.clear();
}

Message::~Message()
{
	remove_from_Folders();
}

Message& Message::operator=(const Message &rhs)
{
	remove_from_Folders();
	contents = rhs.contents;
	folders = rhs.folders;
	add_to_Folders(rhs);
	return *this;
}

Message& Message::operator=(Message &&rhs)
{
	if(this != &rhs)
	{
		remove_from_Folders();
		contents = std::move(rhs.contents);
		move_Folders(&rhs);
	}
	return *this;
}

void swap(Message &lhs, Message &rhs)
{
	using std::swap;
	for(auto f : lhs.folders)
	{
		f->remMsg(&lhs);
	}
	for(auto f : rhs.folders)
	{
		f->remMsg(&rhs);
	}
	swap(lhs.folders, rhs.folders);
	swap(lhs.contents, rhs.contents);
	for(auto f : lhs.folders)
	{
		f->addMsg(&lhs);
	}
	for(auto f : rhs.folders)
	{
		f->addMsg(&rhs);
	}
}
