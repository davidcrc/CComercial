#include <iostream>
#include "CComercial.cpp"

using namespace std;

// centro comercial con 5 departamentos diferentes
// y en cada departamento con 5 artículos ,
// y al final de comprar imprimir un recibo en el cual este , el total , subtotal , IVA
// El programa debe ser en C++

int main()
{
    int numeroDep = -1;
    int numeroArt = -1;
    CComercial DonRamon;
    DonRamon.setNombre("=====:: Centro comercial Don Ramon ::=====");
    cout << DonRamon.getNombre() << endl;

    DonRamon.printDepartamentos();
    // DonRamon.printDepaArticulos();

   
}