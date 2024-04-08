#include "Circulo.h"

Circulo::Circulo(){
    //construtor de circulo
}

Circulo::~Circulo(){
    //destrutor de circulo
}

void Circulo::SetRaio(){
    cout << "Digite o Raio do criculo: " << endl;
    cin >> this->raio;
}

void Circulo::SetCentro(){
    cout << "Digite o Centro do circulo:" << endl;
    cout << "X: " << endl;
    cin >> this->X;
    cout << "Y: " << endl;
    cin >> this->Y;
}

void Circulo::ImprimeRaio(){
    cout << "O raio é: ------------- " << raio << endl;
}

void Circulo::ImprimeCentro(){
    cout << "O centro é: ----------- (" << X << "," << Y << ")" << endl;
}

void Circulo::ImprimeArea(){
    cout << "A area é: ------------ " << this->GetArea() << endl;
}

void Circulo::ImprimeDistancia(Circulo *C2){
    cout << "Distancia dos centros: " << DistanciaCentros(C2) << endl;
}

double Circulo::GetArea(){
    return (M_PI*pow(raio, 2)); //M_Pi é constante pi
}

double Circulo::DistanciaCentros(Circulo *C2){
    return sqrt(pow((this->X - C2->X), 2) + pow((this->Y - C2->Y), 2)); //formula distancia 
}

double Circulo::GetPerimetro(){
    return 2*M_PI*raio;
}
