#include <iostream>
#include "Articulo.cpp"

using namespace std;

class Departamento
{
  private:
    /* data */
    int numArticulos = 5;
    string nombreDep = "";
    // string Articulos[5] = {""};
    Articulo Articulos[5];

  public:
    // Inicia con articulos vacios, sin nombre , cod:-1 y precio 0
    Departamento();
    void setNombre(string nombre);
    string getNombre();

    int getNumArticulos();

    // Cambiar el nombre del articulo deacuerdo a la posicion
    void setArticulos(int pos, string nomArticulo, float precio);
    void printArticulos();

    void comprarArticulo(int posArt);

    ~Departamento();
};

Departamento::Departamento()
{
    // Inicializar los articulos en el departamento (5 de inicio)
    for(int i = 0; i < numArticulos; i++)
    {
        /* code */
        Articulo Art1;
        Articulos[i] = Art1;
    }
    setArticulos(0, "Articulo 1", 10.68);
    setArticulos(1, "Articulo 2", 5.25);
    setArticulos(2, "Articulo 3", 15.99);
    setArticulos(3, "Articulo 4", 39.20);
    setArticulos(4, "Articulo 5", 7.14);
    
}

Departamento::~Departamento()
{
}

void Departamento::setNombre(string nombre)
{
    this->nombreDep = nombre;
}

string Departamento::getNombre()
{
    return this->nombreDep;
}

int Departamento::getNumArticulos()
{
    return this->numArticulos;
}

void Departamento::setArticulos(int pos, string nomArticulo, float precio)
{
    this->Articulos[pos].setNombre(nomArticulo);
    // COMENTAR ESAS LINEAS SI DESEAS SETEAR MANUALMENTE
    float num = ((float)rand() / RAND_MAX) * (80. - 1.) + 1.;
    
    // this->Articulos[pos].setPrecio(precio);
    this->Articulos[pos].setPrecio(num);
}

void Departamento::printArticulos()
{

    cout << "Codigo " << "\tNombre Articulo" << "\tPrecio"<< endl;
    for (int i = 0; i < this->numArticulos; i++)
    {
        int code = this->Articulos[i].getCodigo();
        string nombre = this->Articulos[i].getNombre();
        float precio = this->Articulos[i].getPrecio();
        // cout << "[" << code << "] " << "\t" << nombre << "\t" << precio << endl;
        cout << "[" << i+1 << "] " << "\t" << nombre << "\t" << precio << endl;
    }
}

void Departamento::comprarArticulo(int posArt){
    this->Articulos[posArt].getPrecio();
}



// int main()
// {
//     Departamento dep1;

//     return 0;
// }
