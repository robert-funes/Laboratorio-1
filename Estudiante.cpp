#include "Estudiante.h"

Estudiante::Estudiante()
{
    nombre = "NN";
    codigo = "2025";
    notaTalleres = 1;
    notaParcial = 1;
    notaExpocision = 1;
    notaProyecto = 1;
}

Estudiante::~Estudiante()
{
}

void Estudiante::registrar()
{
    cout << "Ingrese el nombre del estudiante: ";
    cin >> nombre;
    cout << "Ingrese el codigo del estudiante: ";
    cin >> codigo;
    cout << "Ingrese la nota de talleres: ";
    cin >> notaTalleres;
    cout << "Ingrese la nota del parcial: ";
    cin >> notaParcial;
    cout << "Ingrese la nota de exposicion: ";
    cin >> notaExpocision;
    cout << "Ingrese la nota del proyecto: ";
    cin >> notaProyecto;
}

void Estudiante::mostrarInfo()
{ //muestra la informacion basica del Estudiante
  cout<<"Los datos del estudiante son:"<<endl;
  cout<<"nombre: "<<nombre<<endl;
  cout<<"codigo: "<<codigo<<endl;  
  cout<<"Nota parcial: "<<notaParcial<<endl;  
  cout<<"Nota proyecto: "<<notaProyecto<<endl; 
  cout<<"Nota talleres: "<<notaTalleres<<endl; 
}

double Estudiante::notaFinal(){
    double definitiva;
    definitiva = notaProyecto*0.3 + notaExpocision*0.2 + notaTalleres*0.3 + notaParcial*0.2;
    return definitiva;
}
