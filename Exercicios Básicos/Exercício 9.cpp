#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
   	setlocale(LC_ALL,"");// Fun��o usada para adicionar acentua��o no programa
   	
   	int Qa;//Vari�vel que armazena a quantidade de sandu�ches a fazer 
    float X;//Vari�vel que armzena a quantidade em kg de queijo, presunto e hamb�rger
	
	cout<<"Digite a quantidade de sandu�ches a fazer : ";
	cin>>Qa;//leitura de inicio
	   	
   	X=Qa*(3*50+100)/1000;//C�lculo
   	
   	cout<<"A quantidade de queijo, presunto e hamb�rger para fazer "<<Qa<<" sandu�ches � de : "<<X<<" Kg"<<endl;//Leitura de saida 
   	
   }
