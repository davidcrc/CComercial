#include <iostream>
#include "Departamento.cpp"

using namespace std;

class CComercial
{
  private:
    /* data */
    string nombre = "";
    int numDepartamentos = 5;
    Departamento Departamentos[5];

  public:
    CComercial();
    void setNombre(string nombre);
    string getNombre();
    int getNumDepartamentos();

    void printDepaArticulo(int posicionDep);
    void printDepartamentos();
    void printDepartamentosArticulos();

    ~CComercial();
};

CComercial::CComercial()
{
    // Se inicializa cinco departamentos
    this->Departamentos[0].setNombre("Departamento 1 - Carros");
    this->Departamentos[1].setNombre("Departamento 2 - Comidas");
    this->Departamentos[2].setNombre("Departamento 3 - Ropa");
    this->Departamentos[3].setNombre("Departamento 4 - Ropa damas");
    this->Departamentos[4].setNombre("Departamento 5 - Electrodmesticos");
}

CComercial::~CComercial()
{
}

void CComercial::setNombre(string nombre)
{
    this->nombre = nombre;
}

string CComercial::getNombre()
{
    return this->nombre;
}

int CComercial::getNumDepartamentos()
{
    return this->numDepartamentos;
}

void CComercial::printDepartamentos()
{

    for (int i = 0; i < this->numDepartamentos; i++)
    {
        cout << "[D] " << this->Departamentos[i].getNombre() << endl;
    }
}

void CComercial::printDepaArticulo(int pos)
{
    cout << "[D] " << this->Departamentos[pos].getNombre() << endl;
    this->Departamentos[pos].printArticulos();
    cout << endl;
}

void CComercial::printDepartamentosArticulos()
{

    for (int i = 0; i < this->numDepartamentos; i++)
    {
        cout << "[D] " << this->Departamentos[i].getNombre() << endl;
        this->Departamentos[i].printArticulos();
        cout << endl;
    }
}
