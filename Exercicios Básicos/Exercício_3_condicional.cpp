//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int I; //Vari�vel num�rica utilizada, I=Idade da pessoa
	string N; //Vari�vel n�o num�rica utilizada, N=Nome da pessoa
	setlocale(LC_ALL,""); //Fun��o usada para se utilizar acentua��o no programa
	setprecision(2); //Fun��o usada para se utilizar casas decimais
	cout<<"\nDigite o nome da pessoa: ";
	getline(cin,N); //Leitura do nome da pessoa podendo ser composto ou n�o
	cout<<"\nDigite a idade da pessoa: ";
	cin>>I; //Leitura da idade da pessoa
	if(I>=18) //Fun��o consicional para se delimitar se a pessoa � maior de idade ou n�o
	{//Bloco no qual caso verdadeiro mostra que � maior de idade
		cout<<N<<" tem "<<I<<" e � maior de idade"; //Leitura que mostra nome da pessoa e idade, al�m de dizer que � maior de idade
	}
	else
	{//Bloco no qual mostra que � menor de idade
		cout<<N<<" tem "<<I<<" e n�o � maior de idade"; //Leitura que mostra nome da pessoa e idade, al�m de dizer que n�o � maior de idade
	}
}
