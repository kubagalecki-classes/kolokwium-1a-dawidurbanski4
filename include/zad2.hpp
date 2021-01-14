#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne

// tutaj definicja metody gotujMakaron

Makaron* Makaron::gotujMakaron(const std::string& nazwa)
{
    if (nazwa.front() == nazwa.back()) {
        return new Tagliatelle(3.14, 0.42, 0.1);
    }
    else
    {
        return new Penne();
    }
}

int main()
{
    std::cout << "Hello World!\n";
}

class Penne : public Makaron
{
public:
    Penne() {};
    Penne(double a, double b, double c) : L(a), W(b), R(c) {};
    double ileMaki(unsigned P) const
    {
        return (double)P;
    }
private:
    double W;
    double R;
    double L;
};

