#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
   	setlocale(LC_ALL,"");// Fun��o usada para adicionar acentua��o no programa
   	
   	int Na;//Vari�vel que armazena a quantidade de anos sem acidente
   	int Nm;//Vari�vel que armazena a quantidade de meses sem acidente
   	int Nd;//Vari�vel que armazena a quantidade de dias de entrada
   	int d;//Vari�vel que armazena a quantidade de dias de saida sem acidente
   	
   	cin>>Nd;//Leitura de entrada 
   	
   	Na=Nd/365;
   	Nm=(Nd%365)/30;  //C�lculos
   	d= Nd%365%30;
   	
   	cout<<"Anos : "<<Na<<endl;
	cout<<" Meses : "<<Nm<<endl;
	cout<<" Dias : "<<d<<endl;
	 //Leitura de saida 
}
