#include <iostream>
using namespace std;

class Entero{
private:
    int valor;

public:
    void cargar(){
        cout<< "Ingrese un valor entero: ";
        cin>>valor;
        mostrarHasta(valor);
    }

    void mostrarHasta(int n){
        for(int i=1; i<=n; i++) {
            cout<<i<< " ";
        }
        cout<<endl;
    }
};

int main() {
    Entero e;
    e.cargar();
    return 0;
}
