#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
   	setlocale(LC_ALL,"");// Fun��o usada para adicionar acentua��o no programa
   	
   	int C,A;//Vari�veis que armazenam os valora a pagar de Carlos e Andr� 
   	float F;//Vari�vel que armazena o valor a ser pago pelo Felipe  
   	float X;//Vari�vel que armazena o valor da conta ser paga 
   	
   	cout<<"Insir o valor da conta total : ";
   	cin>>X;
   	
   	C=X/3;
   	A=X/3;  //C�lculos 
   	F=X-A-C;
   	
   	cout<<fixed<<setprecision(2);//fun��o que determina a precis�o das casas decimais 
   	cout<<"Carlos vai pagar "<<(float)C<<" R$"<<endl;//leitura de saida 
   	
   	cout<<"Andr� vai pagar "<<(float)A<<" R$"<<endl;//leitura de saida 
   	
   	cout<<"Felipe vai pagar "<<F<<" R$"<<endl;//leitura de saida 
   }
