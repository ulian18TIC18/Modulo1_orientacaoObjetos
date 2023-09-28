#include <iostream>
#include <vector>

using namespace std;


class Calculadora {
public:
    static double soma(double a, double b) {
        return a + b;
    }

    static double subtracao(double a, double b) {
        return a - b;
    }

    static double multiplicacao(double a, double b) {
        return a * b;
    }

    static double divisao(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            cerr << "Erro: Divisão por zero." << endl;
            return 0.0;
        }
    }
};

class Operacoes {

public:
    static char operacao;

public:
    static double realizarOperacao(double num1, double num2) {
        switch (operacao) {
            case '+':
                return Calculadora::soma(num1, num2);
            case '-':
                return Calculadora::subtracao(num1, num2);
            case '*':
                return Calculadora::multiplicacao(num1, num2);
            case '/':
                return Calculadora::divisao(num1, num2);
            default:
                cerr << "Operação inválida." << endl;
                return 0.0;
        }
    }
};

char Operacoes::operacao = ' ';

int main() {

    double num1, num2;
    string operacao;

    cout << "Digite a operacao que deseja realizar (+, -, *, /): ";
    cin >> operacao;

    cout << "Digite os dois numeros para a operacao: " << endl;
    cin >> num1 >> num2;

    Operacoes::operacao = operacao[0];  

    double resultado = Operacoes::realizarOperacao(num1, num2);

    cout << "Resultado: " << resultado << endl;

    return 0;
}