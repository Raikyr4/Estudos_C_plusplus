//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int A,A1,A2,A3; //A= Ano, A1=Primeiro teste, A2= Segundo teste, A3= Terceiro teste
	setlocale(LC_ALL,"");
	cout<<"\nDigite o ano a ser testado: ";
	cin>>A; //Leitura do ano
	//c�lculos
	A1=A%400;
	A2=A%100;
	A3=A%4;
	
	if(A>=1752) //Condicional para testar se o ano inserido � depois de 1752
	{
		if(A1==0) //Condicional para testar se � divisivel por 400
		{
			cout <<"\nO ano digitado � bissexto";
		}
		else
		{
			if( (A2!=0) && (A3==0) ) //Condicional para testar se serpa divisil por 100 e por 4 caso n�o seja no primeiro caso
			{
				cout <<"\nO ano digitado � bissexto";
			}
			else
			{
				cout <<"\nO ano digitado n�o � bissexto";
			}
		}
	}
	else
	{
		cout<<"\nO ano digitado n�o � bissexto, pois est�o antes de 1752";
	}
	
}
