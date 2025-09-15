#include <iostream>
#include <string>
using namespace std;

class Estudiante
{
private:
    string nombre;
    string codigo;
    double notaTalleres;
    double notaParcial;
    double notaExpocision;
    double notaProyecto;
public:
    Estudiante();
    ~Estudiante();
    void registrar();
    double notaFinal();
    void mostrarInfo();
};
