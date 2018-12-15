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

    while (true){
        cout << "\nIngresa un numero del departamento que quieres visitar :\n";
        cin >> numeroDep;

        if (numeroDep > DonRamon.getNumDepartamentos() || numeroDep <= 0)
            cout << "Departamento no existente " << endl;
        else
            DonRamon.printDepaArticulo(numeroDep - 1);

        // Elegir un articulo del departamento->numeroDep

        cout << "\nIngresa el numero de Artciulo escogido :\n";
        cin >> numeroArt;
        cout <<DonRamon.getNumDepartamentos();
        // if (numeroDep > DonRamon. || numeroDep <= 0)
        //     cout << "Departamento no existente " << endl;
        // else
        //     DonRamon.printDepaArticulo(numeroDep - 1);

        // Elegir un articulo del departamento->numeroDep
    }
}