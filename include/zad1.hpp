#include "catch.hpp"

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)

// Zad1
// tutaj definicja klasy Tagliatelle

/*
class Makaron 
{
  public:
  double ileMaki(unsigned) const =0;
  Makaron* gotujMakaron(std::string a)
  if(a.front==a.back){
    return new Tagliatelle(3.14,0.42,0.1);
  }else{
    return new Penne;
  }

  ~Makar

}
*/
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