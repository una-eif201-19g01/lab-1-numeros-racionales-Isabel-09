//
// Created by maria on 4/8/2019.
//

#ifndef NUMEROS_RACIONALES_NUMRACIONAL_H
#define NUMEROS_RACIONALES_NUMRACIONAL_H
#include <sstream>

class NumRacional{
    int nume;
    int deno;
    static int MCD(int nu, int de);

public:
    NumRacional();
    NumRacional(int numer, int denom);


    static void simplificar(NumRacional& f);
    NumRacional suma(NumRacional f);
    std::string obtenerString();
    NumRacional resta(NumRacional f);
    NumRacional multiplicacion(NumRacional f);
    NumRacional division(NumRacional f);
    NumRacional elevar();
    bool Equivalente(NumRacional f,NumRacional f2);

    int getNume() const;


    void setNume(int numer);


    int getDeno() const;


    void setDeno(int denom);
};




#endif //NUMEROS_RACIONALES_NUMRACIONAL_H
