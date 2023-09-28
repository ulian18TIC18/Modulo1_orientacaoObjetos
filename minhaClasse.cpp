#include <iostream>
#include <vector>

using namespace std;

class MinhaClasse{
private:
    static int contador;

public:
    MinhaClasse(){
        contador++;
       
    }
    static int GetContador (){
        return contador;
    }    
};

int MinhaClasse::contador = 0;

int main () {
    MinhaClasse obj1;
    MinhaClasse obj2;

    cout << "Numero de instancias: " << MinhaClasse::GetContador() << endl;

    return 0;

}