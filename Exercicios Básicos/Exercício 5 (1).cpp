#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
   	setlocale(LC_ALL,"");// Fun��o usada para adicionar acentua��o no programa
   	
   	float S,Sa,Sf;//Vari�veis que armazernam  aquantia dos s�lario inicial,o s�lario coma umento e o s�lario final
    
    cout<<"Digite o S�lario inicial : "<<endl;
    cin>>S;//leitura de entrada 
    
   Sa=(S*1.15);
   Sf= Sa*0.92;   //c�lculos
   
   cout<<fixed<<setprecision(2);//fun��o que determina a precis�o das casas decimais 
   
   cout<<"O S�lario inicial era de : "<<S<<endl;//leitura de saida 
   
   cout<<"O S�lario com aumento � de : "<<Sa<<endl;//leitura de saida 
   
   cout<<"O S�lario final � de : "<<Sf<<endl;//leitura de saida 
    return 0;
}
