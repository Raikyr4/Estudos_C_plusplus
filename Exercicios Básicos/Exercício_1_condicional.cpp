//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	setprecision(2); //Fun��o usada para se utilizar casas decimais
	setlocale(LC_ALL,""); //Fun��o usada para se utilizar acentua��o no programa
	int M,N,D,X; //Vari�veis usadas no programa, M=primeiro n�merp, N=Segundo n�mero, D=resto da divis�o, X=Quociente da divis�o
	cout<<"\nDigite o primeiro n�mero: ";
	cin>>M; //Leitura do primiero n�mero
	cout<<"\nDigite o segundo n�mero: ";
	cin>>N; //Leitura do segundo n�mero
	X=M/N; //Conta para determinar o quociente da divis�o
	D=M%N; //Conta para determinar o resto da divis�o
	if(D==0) //Fun��o condicional para se delimitar se � divis�vel ou n�o
	{//Bloco caso a fun��o atenda os requisitos
		cout<<"\nO primeiro n�mero � divis�vel pelo segundo"; //Leitura para se dizer que � divis�vel
	}
	else
	{//Bloco caso a fun��o atenda os requisitos
		cout<<"\nO primeiro n�mero n�o � divis�vel pelo segundo"; //Leitura para se dizer que n�o � divis�vel
	}
	cout<<"\n\nO quociente da divis�o "<<M<<" dividido por "<<N<<" � igual a: "<<X; //Leitura para se mostrar o quociente
	cout<<"\nO resto da divis�o de "<<M<<" dividido por "<<N<<" � igual a: "<<D; //Leitura para se mostrar o resto
	
}
