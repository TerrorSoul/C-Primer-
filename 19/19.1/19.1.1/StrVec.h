#include <string>
#include <memory>
#include <utility>
#include <initializer_list>
#include <algorithm>
#include "19.1.h"

class StrVec
{
	friend bool operator==(const StrVec&, const StrVec&);
	friend bool operator!=(const StrVec&, const StrVec&);
	friend bool operator<(const StrVec&, const StrVec&);
	friend bool operator>(const StrVec&, const StrVec&);
	friend bool operator<=(const StrVec&, const StrVec&);
	friend bool operator>=(const StrVec&, const StrVec&);
	public:
		StrVec() : elements(nullptr), first_free(nullptr), cap(nullptr) {}
		StrVec(const StrVec&);
		StrVec(std::initializer_list<std::string>);
		StrVec& operator=(const StrVec&);
		StrVec& operator=(std::initializer_list<std::string>);
		std::string& operator[](std::size_t n)
		{
			return elements[n];
		}
		const std::string& operator[](std::size_t n) const
		{
			return elements[n];
		}
		~StrVec();
		void push_back(const std::string&);
		template<class... Args> void emplace_back(Args&&...);
		size_t size() const
		{
			return first_free - elements;
		}
		size_t capacity() const
		{
			return cap - elements;
		}
		std::string *begin() const
		{
			return elements;
		}
		std::string *end() const
		{
			return first_free;
		}
	private:
		static std::allocator<std::string> alloc;
		void chk_n_alloc()
		{
			if(size() == capacity())
			{
				reallocate();
			}
		}
		std::pair<std::string*, std::string*> alloc_n_copy(const std::string*, const std::string*);
		void free();
		void reallocate();
		std::string *elements;
		std::string *first_free;
		std::string *cap;
};

std::allocator<std::string> StrVec::alloc;

void StrVec::push_back(const std::string& s)
{
	chk_n_alloc();
	alloc.construct(first_free++, s);
}

template<class... Args>
inline void StrVec::emplace_back(Args&&... args) {
	chk_n_alloc();
	alloc.construct(first_free++, std::forward<Args>(args)...);
}

std::pair<std::string*, std::string*> StrVec::alloc_n_copy(const std::string *b, const std::string *e)
{
	auto data = alloc.allocate(e - b);
	return {data, std::uninitialized_copy(b, e, data)};
}

void StrVec::free()
{
	if(elements)
	{
		std::for_each(elements, first_free, [this](std::string &rhs){alloc.destroy(&rhs);});
		alloc.deallocate(elements, cap - elements);
	}
}

StrVec::StrVec(const StrVec &s)
{
	auto newdata = alloc_n_copy(s.begin(), s.end());
	elements = newdata.first;
	first_free = cap = newdata.second;
}

StrVec::StrVec(std::initializer_list<std::string> il)
{
	auto newdata = alloc_n_copy(il.begin(), il.end());
	elements = newdata.first;
	first_free = cap = newdata.second;
}

StrVec::~StrVec()
{
	free();
}

StrVec& StrVec::operator=(const StrVec &rhs)
{
	auto data = alloc_n_copy(rhs.begin(), rhs.end());
	free();
	elements = data.first;
	first_free = cap = data.second;
	return *this;
}
StrVec& StrVec::operator=(std::initializer_list<std::string> il)
{
	auto data = alloc_n_copy(il.begin(), il.end());
	free();
	elements = data.first;
	first_free = cap = data.second;
	return *this;
}

void StrVec::reallocate()
{
	auto newcapacity = size() ? 2 * size() : 1;
	auto newdata = alloc.allocate(newcapacity);
	auto dest = newdata;
	auto elem = elements;
	for(size_t i = 0; i != size(); ++i)
	{
		alloc.construct(dest++, std::move(*elem++));
	}
	free();
	elements = newdata;
	first_free = dest;
	cap = elements + newcapacity;
}

bool operator==(const StrVec &lhs, const StrVec &rhs)
{
	return (lhs.size() == rhs.size()) && std::equal(lhs.begin(), lhs.end(), rhs.begin());
}
bool operator!=(const StrVec &lhs, const StrVec &rhs)
{
	return !(lhs == rhs);
}

bool operator<(const StrVec &lhs, const StrVec &rhs)
{
	return std::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end());
}
bool operator>(const StrVec &lhs, const StrVec &rhs)
{
	return rhs < lhs;
}
bool operator<=(const StrVec &lhs, const StrVec &rhs)
{
	return !(rhs < lhs);
}
bool operator>=(const StrVec &lhs, const StrVec &rhs)
{
	return !(lhs < rhs);
}
