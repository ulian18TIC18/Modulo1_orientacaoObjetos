#include <iostream>
#include <vector>

using namespace std;

class Itemset{
     
        private:
         vector<string>conjunto;
        public:
         void inserir(string _item){
           conjunto.push_back(_item);
         }
         void excluir(){

         }
};

int main (){

    Itemset conjunto;

    conjunto.iserir("Item A");
    conjunto.iserir("Item B");
    conjunto.iserir("Item C");

return 0;


}