//obrigatoriamente o construtor deve ser 'public'
#include <iostream>

using namespace std;

class Livro{
    private: 
        string nome, autor, editora, isbn;
    
    public:
        string getNome(){
            return editora;
        }

        void setNome(string _nome){
         nome = _nome;

        }
        string getAutor(){
            return autor;
        }

        void setAutor(string _autor){
         autor = _autor;
        }

        string getEditora(){
            return editora;
        }

        void setEditora(string _editora){
         editora = _editora;
        }

        string getIsbn(){
            return isbn;
        }

        void setIsbn(string _isbn){
            isbn = _isbn;
        }
        void virarPagina(){

        cout << "Virando paginas" << endl;
        }

 };

 int main (){

    Livro livro;

    livro.virarPagina(); 
   

 }


