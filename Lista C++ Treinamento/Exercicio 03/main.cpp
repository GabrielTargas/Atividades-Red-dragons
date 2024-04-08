#include "Circulo_funcions.h"

int main(){
    cout << "main de testes do exercicio 3: " << endl << endl << endl;
    //criando circulo 1 (C1)
    cout << "<-----informações Circulo 1----->" << endl;
    Circulo* C1 = new Circulo(); 
    C1->SetRaio();
    C1->SetCentro();

    //criando circulo 2 (C2)
    cout << endl <<  "<-----informações Circulo 2----->" << endl;
    Circulo* C2 = new Circulo();
    C2->SetRaio();
    C2->SetCentro();

    //imprimindo atributos 
    cout << "<-----Dados Circulo 1----->" << endl;
    C1->ImprimeArea();
    C1->ImprimeCentro();
    C1->ImprimeRaio();
    cout << "<-----Disrancia entre os centros de C1 e C2----->" << endl;
    C1->ImprimeDistancia(C2); //não posso obter direto, pois é função privada

    return 0;
}