#include <iostream>
#include <cmath>
using namespace std;
int main() {
		setlocale(LC_ALL,"");// Fun��o usada para adicionar acentua��o no programa
		
	int X,Fx;// Vari�veis que armazenam o n�mero de X e do resultado da eque��o
	
	cout<<"Dado a eque��o  F(x) = 2X^2 - 3 : "<<endl;
	cout<<"Insira o valor de X : ";
	
	cin>>X;//leitura de entrada mostrando o valor de X
	
	Fx=2*pow(X,2)-3;//c�lculo da equa��o F(X)
	
	cout<<"As raizes de F("<<X<<")"<<"s�o : "<<Fx<<endl;//leitura de saida mostrando a(s) raize(s) encontrada(s) 
	
}
