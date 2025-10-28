#include <iostream>
#include <string>
using namespace std;

class CEmpleados{
private:
    string nombre;
    int salario;
    int horas;

public:
    void cargar(){
        cout<< "Ingrese nombre del empleado: ";
        cin>>nombre;
        cout<< "Ingrese salario base: ";
        cin>>salario;
        cout<< "Ingrese horas trabajadas por dia: ";
        cin>>horas;
    }

    void aumentarSalario(){
        if (horas==8)
            salario+=250000;
        else if (horas==10)
            salario+=300000;
        else if (horas>=12)
            salario+=350000;
    }

    void mostrar(){
        cout<< "Empleado: " <<nombre<< " | Salario final: $" <<salario<<endl;
    }
};

int main(){
    CEmpleados emp;
    emp.cargar();
    emp.aumentarSalario();
    emp.mostrar();
    return 0;
}
