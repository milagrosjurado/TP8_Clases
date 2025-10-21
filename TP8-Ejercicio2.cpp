#include <iostream>
using namespace std;

class Comparador{
private:
    int mayor(int a, int b) {  
        return (a>b)?a:b;
    }

public:
    void cargarYComparar(){
        int x, y;
        cout<< "Ingrese primer numero: ";
        cin>> x;
        cout<< "Ingrese segundo numero: ";
        cin>> y;
        cout<< "El mayor es: " <<mayor(x, y)<<endl;
    }
};

int main(){
    Comparador c;
    c.cargarYComparar();
    return 0;
}
