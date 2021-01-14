#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne

// tutaj definicja metody gotujMakaron

class Penne : public Makaron
{
	double ileMaki(unsigned P) const override
	{
		return (double)P;
	}
};

Makaron* Makaron::gotujMakaron(const std::string& s)
{
	if(s.front() == s.back())
	{
		return new Tagliatelle{3.14, 0.42, 0.1};
	}
	else return new Penne{};
}