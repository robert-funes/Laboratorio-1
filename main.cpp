#include "Estudiante.h"

int main()
{
    Estudiante estudiante1;
    estudiante1.registrar();
    estudiante1.mostrarInfo();
    cout<<"La nota final del estudiante es: "<< estudiante1.notaFinal()<<endl;
    

    return 0;
}
