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

    void setPrecio(float precio);
    float getPrecio();
    ~Articulo();
};

Articulo::Articulo(/* args */)
{

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


void Articulo::setPrecio(float precio)
{
    this->precio = precio;
}

float Articulo::getPrecio()
{
    return this->precio;
}


