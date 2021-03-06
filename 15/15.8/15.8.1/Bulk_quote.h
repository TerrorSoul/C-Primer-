#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

#include <string>
#include <iostream>
#include "Disc_quote.h"

class Bulk_quote : public Disc_quote {
	public:
		Bulk_quote() = default;
		using Disc_quote::Disc_quote;
		Bulk_quote(const Bulk_quote &b) : Disc_quote(b) { std::cout << "Bulk_quote Copy Constructor" << std::endl; }
		Bulk_quote(Bulk_quote &&b) noexcept : Disc_quote(b) { std::cout << "Bulk_quote Move Constructor" << std::endl; }
		Bulk_quote& operator=(const Bulk_quote&);
		Bulk_quote& operator=(Bulk_quote&&) noexcept;
		Bulk_quote* clone() const & override {
			return new Bulk_quote(*this);
		}
		Bulk_quote* clone() && override {
			return new Bulk_quote(std::move(*this));
		}
		double net_price(std::size_t) const override;
};

double Bulk_quote::net_price(std::size_t cnt) const {
	if (cnt >= quantity) {
		return cnt * (1 - discount) * price;
	}
	else {
		return cnt * price;
	}
}

Bulk_quote& Bulk_quote::operator=(const Bulk_quote &b) {
	std::cout << "Bulk_quote Copy Assignment Operator" << std::endl;
	Disc_quote::operator=(b);
	return *this;
}

Bulk_quote& Bulk_quote::operator=(Bulk_quote &&b) noexcept {
	std::cout << "Bulk_quote Move Assignment Operator" << std::endl;
	Disc_quote::operator=(b);
	return *this;
}

#endif
