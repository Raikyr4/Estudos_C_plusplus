//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout<<setprecision(2); //Fun��o usada para se utilizar casas decimais
	cout<<fixed;
	float SI,SM,SF; //Vari�veis num�ricas utilizadas, SI=Sal�rio atual, SM=Aumento no sal�rio , SF=Sl�rio final
	string Nome; //Vari�vel n�o num�rica utilizada, Nome do jogador
	setlocale(LC_ALL,""); //Fun��o usada para se utilizar acentua��o no programa
	cout<<"\nDigite o nome do jogador: ";
	getline(cin,Nome); //Leitura do nome do jogador podendo ser composto ou n�o
	cout<<"\nDigite o sal�rio atual dele: ";
	cin>>SI; //Leitura do sal�rio atual
	if(SI>1800) //Fun��o condicional para se saber qual deve ser o aumento no sal�rio
	{//Bloco no qual caso verdddeiro o sal�rio atual � maior que 1800
		SM=SI*0.05;/ //Conta para se determinar o aumento
		SF=SM+SI; //Conta par se determinar o sal�rio final com o aumento
		cout<<"\nO jogador "<<Nome<<" ter� aumento de R$ "<<SM<<" e passar� a receber R$ "<<SF;
	}
	else
	{
		if(SI>1300)
		{//Bloco no qual caso verdddeiro o sal�rio atual � maior que 1300 poor�m menor que 1800
			SM=SI*0.1; //Conta para se determinar o aumento
			SF=SM+SI; //Conta par se determinar o sal�rio final com o aumento
			cout<<"\nO jogador "<<Nome<<" ter� aumento de R$ "<<SM<<" e passar� a receber R$ "<<SF;
		}
		else
		{
			if(SI>900)
			{//Bloco no qual caso verdddeiro o sal�rio atual � maior que 900 por�m menor que 1300
				SM=SI*0.15; //Conta para se determinar o aumento
				SF=SM+SI; //Conta par se determinar o sal�rio final com o aumento
				cout<<"\nO jogador "<<Nome<<" ter� aumento de R$ "<<SM<<" e passar� a receber R$ "<<SF;
			}
			else
			{//Bloco no qual caso verdddeiro o sal�rio atual � at� 900
				SM=SI*0.20; //Conta para se determinar o aumento
				SF=SM+SI; //Conta par se determinar o sal�rio final com o aumento
				cout<<"\nO jogador "<<Nome<<" ter� aumento de R$ "<<SM<<" e passar� a receber R$ "<<SF;
			}
		}
	}
}
