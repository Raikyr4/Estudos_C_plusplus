//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int M; //Vari�vel num�rica utilizada, M=M�dia do aluno
	string Nome; //Vari�vel n�o num�rica utilizada, Nome do aluno
	setprecision(1); //Fun��o usada para se utilizar casas decimais
	setlocale(LC_ALL,""); //Fun��o usada para se utilizar acentua��o no programa
	cout<<"\nDigite aqui o nome do aluno: ";
	getline(cin,Nome); //Leitura do nome do aluno podendo ser composto ou n�o
	cout<<"\nDigite aqui a m�dia obtida por ele: ";
	cin>>M; //Leitura da m�dia do aluno
	if(M>=9.0) //Fun��o condicional para se determinar a recomenda��o
	{//Bloco no qual caso verdadeiro o aluno � altamente recomendado
		cout<<"\nO aluno "<<Nome<<" � altamente recomendado";
	}
	else
	{//Bloco no qual � garantido que s�o m�dias menores que 9
		if(M>=8.0)
		{//Bloco no qual caso verdadeiro o aluno � fortemente recomendado
			cout<<"\nO aluno "<<Nome<<" � fortemente recomendado";
		}
		else
		{//Bloco no qual � garantido que s�o m�dias menores que 8
			if(M>=7.0)
			{//Bloco no qual caso verdadeiro o aluno � recomendado
				cout<<"\nO aluno "<<Nome<<" � recomendado";
			}
			else
			{//Bloco no qual caso verdadeiro o aluno n�o � recomendado
			
				cout<<"\nO aluno "<<Nome<<" n�o � recomendado";
			
			}
		}
	}
}
