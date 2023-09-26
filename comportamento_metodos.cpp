#include <iostream>
#include <string>

using namespace std;

class Carro{
    public:
        string tipo, cor, placa;
        int numPortas;

        void acelerar(float _velocidade){
            cout << "Acelerar para " << _velocidade << " km/h" << endl;
        }

        void frear (){
            cout << "Freando" << endl;
        }
};

int main(void){

    Carro civic;
    civic.tipo = "Sedan";
    cout << civic.tipo << endl;

    civic.acelerar(30);
    civic.frear();

}