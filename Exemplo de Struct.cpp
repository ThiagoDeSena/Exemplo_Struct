/******************************************************************************

Exemplo de utilização de struct

*******************************************************************************/
#include <iostream>

using namespace std;

struct data{
  int dia;
  int mes;
  int ano;
  
  void dat(int stdia,int stmes,int stano)
  {
      dia=stdia;
      mes=stmes;
      ano=stano;
  }
  
  void mostra(){
      cout<<"A data de hoje e: "<<dia<<"/"<<mes<<"/"<<ano;
  }
};
int main()
{
    data d1;
    int d,m,a;
    cout<<"Que dia e hoje: ";
    cin>>d;
    cout<<"De qual mes: ";
    cin>>m;
    cout<<"Qual o ano: ";
    cin>>a;
    d1.dat(d,m,a);
    d1.mostra();
    
    

    return 0;
}
