#include <iostream>
using namespace std;
int main(){

	
   	setlocale(LC_ALL,"");// Fun��o usada para adicionar acentua��o no programa
   
	int X,U,D,C,Aux,Aux2;//Vari�veis que armazernam o valor da unidade , dezena, centena e das auxiliares B e B1
	
	cout<<"Digite um n�mero de 3 digitos : ";
	cin>>X;//leitura de entrada do n�mero digitado
	
		U=X%10;
		Aux=X/10;    // C�lculos
		D=Aux%10;
		Aux2= Aux/10;
		C=Aux2%10;
	
	cout<<"Unidade = "<<U <<endl;
	cout<<"Dezena = "<<D <<endl;
	cout<<"Centena = "<<C <<endl;

//leituras de saida 
	
}
