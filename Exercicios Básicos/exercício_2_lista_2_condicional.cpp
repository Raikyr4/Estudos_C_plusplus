//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int N,MC,DU,S,Final; //N=N�mero, MC= Milhar e centena, DU= Dezena e unidade, S= Soma de MC e Du, Final � para se testar se o n�mero possui
	setlocale(LC_ALL,"");
	cout<<"\nDigite um n�mero de 4 d�gitos: ";
	cin>>N; //Leitura do n�mero
	MC=N/100;
	DU=N%100;
	S=MC+DU;
	Final= pow(S,2);
	if(N>=1000 && N<=9999) //Condicional para se testar se o n�mero possui 4 d�gitos
	{
		if (Final==N) //Condicional para se testar se o n�mero possui a caracteristica ou n�o
		{
		cout<<"\nO n�mero digitado possui tal caracter�stica";
		}
		else 
		{
		cout<<"\nO n�mero digitado n�o possui tal caracter�stica";
		}
	}
	else
	{
		cout<<"\nO n�mero digitado n�o possui 4 d�gitos, tente novamente";
	}
}
