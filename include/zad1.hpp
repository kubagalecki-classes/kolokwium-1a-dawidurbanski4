#include "catch.hpp"

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracja)

class Makaron 
{ 
public:
    static Makaron* gotujMakaron(const std::string& str);
    virtual double ileMaki(unsigned P) const = 0;
};


class Tagliatelle : public Makaron
{
public:
    Tagliatelle(double l, double w, double r) : L{l}, W{w}, R{r} {}
    Tagliatelle() : L{0.5}, W{0.5}, R{0.5} {}
    double ileMaki(unsigned P) const override
    {
        return P * L * W * (1. - R) * C;
    }
private:
    double L; 
    double W; 
    double R; 
    static const double C; 
};