//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
using namespace std;
int main()
{
	int N, NF; //N=N�mero, NF=N�mero final da placa
	setlocale(LC_ALL,"");
	cout<<"\nDigite os quatro digitos da placa: ";
	cin>>N; //Leitura do n�mero da placa
	if(N>=1000 && N<=9999) //Condicional para se testar se a placa possui ou n�o quatro digitos
	{
		NF=N%10; //Conta para se determinar o ultimo d�gito
		if(NF==1 || NF==2) //Condicional para caso seja o m�s de janeiro
		{
			cout<<"\n\nO m�s de emplacamento � Janeiro";
		}
		if(NF==3 || NF==4) //Condicional para caso seja o m�s de fevereiro
		{
			cout<<"\n\nO m�s de emplacamento � Fevereiro";
		}
		if(NF==5 || NF==6) //Condicional para caso seja o m�s de Mmar�o
		{
			cout<<"\n\nO m�s de emplacamento � Mar�o";
		}
		if(NF==7 || NF==8) //Condicional para caso seja o m�s de abril
		{
			cout<<"\n\nO m�s de emplacamento � Abril";
		}
		if(NF==9 || NF==0) //Condicional para caso seja o m�s de maio
		{
			cout<<"\n\nO m�ss de emplacamento � Maio";
		}
	}
	else
	{
		cout<<"\n\nA placa n�o possui o n�mero de digitos necess�rios";
	}
}
