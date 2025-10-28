#include <iostream>
using namespace std;

class CNumeros{
private:
    int n1, n2, n3;

public:
    void cargar(){
        cout<< "Ingrese 3 numeros: ";
        cin>> n1 >> n2 >> n3;
    }

    int minimo(){
        int min=n1;
        if (n2<min) min=n2;
        if (n3<min) min=n3;
        return min;
    }

    int maximo(){
        int max=n1;
        if (n2>max) max=n2;
        if (n3>max) max=n3;
        return max;
 }

    void mostrarResultados(){
        cout<< "Minimo: " <<minimo()<<endl;
        cout<< "Maximo: " <<maximo()<<endl;
    }
};

int main(){
    CNumeros nums;
    nums.cargar();
    nums.mostrarResultados();
    return 0;
}
