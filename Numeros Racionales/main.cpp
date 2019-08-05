#include <iostream>
#include "NumRacional.h"
int main() {
    NumRacional fA(20, 8);
    NumRacional fB(10, 4);
    NumRacional fAux;


    std::cout << "\nTutorial -Números Racionales-\n" << std::endl;


    std::cout << "SIMPLIFICACIÓN de Fracción A: " << fA.obtenerString() << std::endl;
    NumRacional::simplificar(fA);
    std::cout << "RESULTADO: " << fA.obtenerString() << std::endl;


    std::cout << "SIMPLIFICACIÓN de Fracción B: " << fB.obtenerString() << std::endl;
    NumRacional::simplificar(fB);
    std::cout << "RESULTADO: " << fB.obtenerString() << std::endl;


    std::cout << "\nSUMAR FRACCIONES" << std::endl;
    fAux = fA.suma(fB);
    std::cout << "RESULTADO: " << fA.obtenerString() << " + " << fB.obtenerString() <<
              " = " << fAux.obtenerString() << std::endl;
    std::cout << "\n" "RESTA FRACCIONES" << std::endl;
    fAux = fA.resta(fB);
    std::cout << "RESULTADO: " << fA.obtenerString() << " - " << fB.obtenerString() <<
              " = " << fAux.obtenerString() << std::endl;

    std::cout << "\n" "MULTIPLICACION FRACCIONES" << std::endl;
    fAux = fA.multiplicacion(fB);
    std::cout << "RESULTADO: " << fA.obtenerString() << " * " << fB.obtenerString() <<
              " = " << fAux.obtenerString() << std::endl;

    std::cout << "\n" "DIVISION FRACCIONES" << std::endl;
    fAux = fA.division(fB);
    std::cout << "RESULTADO: " << fA.obtenerString() << " / " << fB.obtenerString() <<
              " = " << fAux.obtenerString() << std::endl;

    std::cout << "\n" " ELEVACION FRACCION" << std::endl;
    fAux= fA.elevar();
    std::cout << "RESULTADO: " << fAux.obtenerString() << std::endl;

    std::cout << "\n" "EQUIVALENCIA FRACCIONES" << std::endl;

         if(fA.Equivalente(fA,fB)==true)

     std::cout << " Si son Equivalentes "<<std::endl;
         else
             std::cout<<"No son Equivalentes"<<std::endl;






    return 0;

}