#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
   	setlocale(LC_ALL,"");// Fun��o usada para adicionar acentua��o no programa
   
	
	float X,P,M;//Vari�veis que armazenam o valor do combustivel,o valor a ser pago e o total em litros 
	
	cout<<"Digite o valor do combust�vel : ";
	cin>>X;//leitura de entrada do valor do combust�vel 
	cout<<"Digite o valor a ser pago : ";
	cin>>P;//leitura de entrada do valor a ser pago
	
	M=X/P;//c�lculo da quantidade de litros  
	
	cout<<"O total em litos de combut�vel colocado foi de : "<<M<<endl;//leitura de saida
	
}
