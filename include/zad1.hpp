#include "catch.hpp"

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)

// Zad1
// tutaj definicja klasy Tagliatelle


class Makaron
{
public:
    virtual double ileMaki(unsigned) const = 0;
    static Makaron* gotujMakaron(const std::string& nazwa);
};

class Tagliatelle : public Makaron
{
public:
    Tagliatelle() { this->W = 0.5; this->R = 0.5; this->L = 0.5; };
    Tagliatelle(double a, double b, double c) : W(a), R(b), L(c) {};

    double ileMaki(unsigned P) const
    {
        return P * this->L*this->W*(1. - this->R)*this->C;
    }

private:
    double W;
    double R;
    double L;
    const static double C;

};


class Tagliatelle : public Makaron
{
  public:
  Tagliatelle(): L(0.5), W(0.5), R(0.5) {}
  Tagliatelle(double l, double w, double r): L(l), W(w), R(r) {}
  
  double ileMaki(unsigned P) const
  {
    return P * L * W * (1. - R) * C;
  }

  private:
  double L;
  double W;
  double R;
  
  static const double C;

};