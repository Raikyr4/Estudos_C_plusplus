//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int N; //N=N�mero
	setlocale(LC_ALL,""); //Fun��o para se utilizar acentua��o
	cout<<"\nDigite o n�mero a ser testado: ";
	cin>>N; //Leitura do n�mero
	if (((N % 5)==0) && ((N % 3)==0)) //Condicional para se testar se � divisivel ou n�o
	{
	cout<<"\nO n�mero � divisivel por 5 e por 3";
	}
	else
	{
	cout<<"\nO n�mero n�o � divisivel por 5 e por 3";
	}
}
