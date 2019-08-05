//
// Created by maria on 4/8/2019.
//

#include "NumRacional.h"

#include <iostream>     // std::cout
#include <cmath>        // std::abs



NumRacional::NumRacional() {
    setNume(0);
    setDeno(1);
}



NumRacional::NumRacional(int numer, int denom) : nume(numer), deno(denom) {}



int NumRacional::MCD(int nu, int de) {
    int result = 0;


    if (de != 0) {
        result = MCD(de, nu % de);
    } else {
        result = nu;
    }
    return result;
}


void NumRacional::simplificar(NumRacional &f) {
    if (f.nume != 0) {
        int numMCD = MCD(abs(f.getNume()), f.getDeno());
        int nume= f.getNume() / numMCD;
        int deno = f.getDeno() / numMCD;
        f.setNume(nume);
        f.setDeno(deno);
    }
}


NumRacional NumRacional:: suma(NumRacional f) {
    NumRacional result;
    result.setNume(
            getNume() * f.getDeno() +
            getDeno() * f.getNume());
    result.setDeno(getDeno() * f.getDeno());
    simplificar(result);
    return result;

}


std::string NumRacional::obtenerString() {
    std::string result;
    result = std::to_string(getNume()) + "/" + std::to_string(getDeno());
    return result;
}
NumRacional NumRacional::resta(NumRacional f) {
    NumRacional result;
    result.setNume(
            getNume() * f.getDeno() -
            getDeno() * f.getNume());
    result.setDeno(getDeno() * f.getDeno());
    simplificar(result);
    return result;
}
   NumRacional NumRacional::multiplicacion(NumRacional f) {
       NumRacional result;
       result.setNume(
               getNume() * f.getNume());
            result.setDeno(getDeno() * f.getDeno());
       simplificar(result);
       return result;
}
   NumRacional NumRacional::division(NumRacional f) {
       NumRacional result;
       result.setNume(
               getNume() * f.getDeno() );
       result.setDeno(getDeno()*f.getNume());
       simplificar(result);
       return result;
}
  NumRacional NumRacional::elevar() {
      NumRacional result;
      result.setNume(getNume()*getNume());
      result.setDeno(getDeno()*getDeno());
      result.simplificar( result);
      return result;
}
 bool NumRacional::Equivalente(NumRacional f, NumRacional f2) {
    simplificar(f);simplificar(f2);
    if(f.getNume()==f2.getNume()&&f.getDeno()==f2.getDeno())
        return true;
       else
           false;
}
int NumRacional::getNume() const {
    return nume;
}


void NumRacional::setNume(int numer) {
    NumRacional::nume = numer;
}


int NumRacional::getDeno() const {
    return deno;
}


void NumRacional::setDeno(int denom) {
    NumRacional::deno = denom;
}

