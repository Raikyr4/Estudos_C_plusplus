#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
   	setlocale(LC_ALL,"");// Fun��o usada para adicionar acentua��o no programa
   	
    float Total;//Vari�vel que armazena o total gasto para a marca��o;
    
	int N;//Vari�vel que armazena o n�mero de frango;
	
	cout<<"Digite o n�mero de frangos presente na granja : ";
	
	cin>>N;// leitura de entrada do n�mero de frangos
	
    Total = 11.00*N;//C�lculo do total gasto
   
    cout<<fixed<<setprecision(2);//fun��o que determina o n�mero de casas d�cimais
   
    cout<<"O gasto total para marcar todos os frangos é de : "<<Total<<endl; //leitura de saida   
	  
    return 0;
}