//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	setlocale(LC_ALL,"");// Fun��o usada para adicionar acentua��o no programa
	 
	 float V;//Vari�vel que armazena o valor da conta
	 
	 float D;//Vari�vel que armazena o n�mero dos dias
	 
	 float J;//Vari�vel que armazena o valor dos juros
	
	 
	 float M;//Vari�vel que armazena o valor da multa
	 float P;//Vari�vel que armazena o valor do total a ser pago
	 
	cout<<"Digite o valor da conta : \n";  
	cin>>V;//leitura entrada do valor da conta
	
	cout<<"Digite n�mero de  dias de atraso da conta :\n";
	cin>>D;//leitura entrada do n�mero de dias 
	
	cout<<"Digite o valor da multa : \n";
	cin>>M;//leitura entrada do valor da multa
	
	cout<<"Digite o valor dos juros em porcentagem (%): \n";
	cin>>J;//leitura de entrada dos juros
	
	P= V+M+((J/100)*D);//c�lculo do total a ser pago
	
	cout<<fixed<<setprecision(2);//fun��o que determina o n�mero de casas d�cimais 
	
	cout<<"Valor da conta: "<<V<<endl;//leitura de saida mostrando o valor da conta
	cout<<"Dias em atraso:"<<D<<endl;//leitura de saida mostrando o n�mero de dias
	cout<<"Total da multa: "<<M<<endl;//leitura de saida mostrando o valor da multa
	cout<<"Total de juros: "<<J<<endl;//leitura de saida mostrando o valor dos juros
	cout<<"Total a pagar: "<<P<<endl;//leitura de saida mostrando o valor total a ser pago
}
	
