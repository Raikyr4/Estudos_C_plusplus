//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int N,N2; //N=N�mero, N2=Raiz inteira do n�mero 
	float N1; //N1 = Raiz do n�mero podendo ter casas decimais
	setlocale(LC_ALL,"");
	cout<<"Digite o n�mero a ser testado: ";
	cin>>N; //Leitura do N�mero
	N1=sqrt(N);
	N2=sqrt(N);
	if (N1==N2) //Condicional para se testar se � quadrado perfeito ou n�o
	{
	cout<<"\nO n�mero digitado � um quadrado perfeito";
	}
	else 
	{
	cout<<"\nO n�mero digitado n�o � um quadrado perfeito";
	}
}

