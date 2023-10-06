//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
	int A,B,C; //Vari�veis num�ricas inteiras utilizadas, A=vari�vel A, B=vari�vel B, C=Vari�vel C.
	float X,Delta,X1,X2; //Vari�veis num�ricas utilizadas
	setlocale(LC_ALL,""); //Fun��o usada para se utilizar acentua��o no programa
	setprecision(2); //Fun��o usada para se utilizar casas decimais
	cout<<"\nDigite o n�mero da vari�vel A: ";
	cin>>A; //Leitura da vari�vel A
	cout<<"\nDigite o n�mero da vari�vel B: ";
	cin>>B; //Leitura da vari�vel B
	cout<<"\nDigite o n�mero da vari�vel C: ";
	cin>>C; //Leitura da vari�vel C
	Delta=(pow(B,2))-4*A*C; //Conta para se calcular o delta
	cout<<"\n\nO valor de delta �: "<<Delta; //Leitura para se mostrar o delta em tela
	X=-B/A; //Conta para se calcular o X
	X1=(-B)+(sqrt(Delta))/(2*A); //Conta para se calcular o X1
	X2=(-B)-(sqrt(Delta))/(2*A); //Conta para se calcular o X2
	if(Delta<0) //Func��o consdicional para se determinar se existe ou n�o ra�zes reais
	{//Bloco no qual caso verdadeiro n�o existem ra�zes reais
		cout<<"\n\nN�o existem ra�zes reais para tais vari�veis";
	}
	else
		{//garanto que existem raizes
			if(Delta>0)
			{//Bloco no qual caso verdadeiro as ra�zes existem
				cout<<"\n\nAs ra�zes existem";
				cout<<"\nX1 � igual a "<<X1;
				cout<<"\nX2 � igual a "<<X2;
			}
			else
			{//Bloco no qual caso verdadeiro as ra�zes existem e s�o iguais
				if(Delta==0)
				{
					cout<<"\n\nAs ra�zes s�o iguais, e o resultado � "<<X;
				}
			}
		}
}
