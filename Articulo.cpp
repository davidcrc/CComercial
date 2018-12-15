#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Articulo
{
  private:
    /* data */
    string nombreArt = "";
    float precio = 0.0;
    int codigo = -1;

  public:
    Articulo(/* args */);
    void setNombre(string nombre);
    string getNombre();

    void genCode(); //setcode
    int getCodigo();

    void setPrecio(float precio);
    float getPrecio();
    ~Articulo();
};

Articulo::Articulo(/* args */)
{
    genCode();
}

Articulo::~Articulo()
{
}

void Articulo::setNombre(string nombre)
{
    this->nombreArt = nombre;
}

string Articulo::getNombre()
{
    return this->nombreArt;
}

int Articulo::getCodigo()
{
    return this->codigo;
}

void Articulo::genCode()
{
    // Setear un numero que contega digamos IDProd,Fechae,etc
    // this->codigo = 1258;
    // srand(time(NULL));
    int num = 1 + rand() % (100);
    this->codigo = num;
    
}

void Articulo::setPrecio(float precio)
{
    this->precio = precio;
}

float Articulo::getPrecio()
{
    return this->precio;
}


