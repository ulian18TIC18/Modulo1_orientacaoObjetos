//Abrir arquivos por comando

#include <iostream>
#include <fstream>

using namespace std;

int mian (){

    ofstream arquivo_saida;

    arquivo_saida.open("exemplo.txt, ios_base::out");

    if (arquivo_saida.is_open()){
        arquivo_saida << "Escrevendo no arquivo." << endl;
        arquivo_saida << 20+30 << endl;
        arquivo_saida.close();
    }

    else{
        cout << "Erro ao abrir o arquivo." << endl;
    }
    ifstream arquivo_entrada;
    arquivo_entrada.open("exemplo.txt", ios_base::in);
    if (arquivo_entrada.is_open()){
        string linha;
        while(arquivo_entrada.eof() == false){
            getline(arquivo_entrada, linha);
            cout << linha << endl;

        }
        arquivo_entrada.close();
        {

        }
    }

    else {
        cout << "Erro ao abrir o arquivo." << endl;
    }

return 0;
}