#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
   	setlocale(LC_ALL,"");// Fun��o usada para adicionar acentua��o no programa
   	
   	float Ar;//Vari�vel que armazena a quantia arrecadada no dia 
   	
   	int P,Pa;//Vari�veis que armazenam as quantias de P�o de queijo e P�o nomral
   	
   	float Pol;// Vari�vel que armazena a quantia que deve ser guardada na polpan�a
   	
   	cout<<"insira a quamtidade de p�es e p�es de queijos vendidos no dia : ";
   	cin>>P>>Pa;//leitura de inicio 
   	
   	 Ar=P*0.12+Pa*1.50;  // c�lculos
   	 Pol=Ar*0.10;
   	 
   	 cout<<fixed<<setprecision(2);//fun��o que determina a precis�o das casas decimais 
   	 
   	 cout<<"O valor arrecadado no dia foi de : "<<Ar<<" R$"<<endl;//leitura de saida 
   	 
   	 cout<<"O valor que deve ser guardado na polpan�a � de : "<<Pol<<" R$"<<endl;//leitura de saida
   }
