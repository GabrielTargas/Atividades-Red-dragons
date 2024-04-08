//Exercicio 2 - lista 1 C++
//Gabriel Mello Silveira Targas 
//RA : 812990

#ifndef __EXERCICIO02_H__
#define __EXERCICIO02_H__

#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

class Triangulo {
    public:
        Triangulo(int,int,int);
        ~Triangulo();
        bool EhTriangulo();
        double getArea();
        void getTipo();
    private:
        int ladoA, ladoB, ladoC; 
};


#endif 