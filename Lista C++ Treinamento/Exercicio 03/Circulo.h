#ifndef __CIRCULO_H__
#define __CIRCULO_H__

//Exercicio 03 - lista 01 - C++
// Gabriel Mello Silveira Targas
//RA: 812990

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cmath>

using namespace std;

class Circulo {
    public:
        Circulo();
        ~Circulo();
        void SetRaio();
        void SetCentro();
        void ImprimeRaio();
        void ImprimeCentro();
        void ImprimeArea();
        void ImprimeDistancia(Circulo *C2); //função criada para poder testar na main

    private: //não podem ser acessadas na main
        double GetArea();
        double DistanciaCentros(Circulo *C2);
        double GetPerimetro(); //circunferência
        double raio, X, Y;
};
#endif // __CIRCULO_H__