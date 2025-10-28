#include <iostream>
using namespace std;

class CNumeros{
public:
    bool esPerfecto(int n){
        int suma=0;
        for (int i=1; i<=n/2; i++){
            if (n%i==0) suma+=i;
        }
        return suma==n;
    }

    void mostrarPerfectos(int N){
        for (int i=1; i<=N; i++){
            if (esPerfecto(i)){
                cout<<i<<endl;
            }
        }
    }
};

int main(){
    int N;
    cout<< "Ingrese un numero N: ";
    cin>>N;

    CNumeros nums;
    nums.mostrarPerfectos(N);
    return 0;
}
