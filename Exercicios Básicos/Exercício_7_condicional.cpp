//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float A,B,C; //Vari�veis num�ricas utilizadas, A=Primeiro n�mero, B=Segundo n�mero, C=Terceiro n�mero
	cout<<setlocale(LC_ALL,""); //Fun��o usada para se utilizar acentua��o no programa
	setprecision(2); //Fun��o usada para se utilizar casas decimais
	cout<<"\nDigite o primeiro n�mero: ";
	cin>>A; //Leitura do primeiro n�mero
	cout<<"\nDigite o segundo n�mero: ";
	cin>>B; //Leitura do segundo n�mero
	cout<<"\nDigite o terceiro n�mero: ";
	cin>>C; //Leitura do terceiro n�mero
	if(A>B && A>C) //Fun��o condicional para se determinar qual o maior n�mero
	{//Bloco no qual garanto que o A � maior que as outras
		if(B>C)
		{//Bloco no qual caso verdadeiro o A � o maior e o menor o C
			cout<<"\nO maior n�mero � "<<A<<" e o menor � "<<C;
		}
		else
		{//Bloco no qual caso verdadeiro o A � o maior e o menor o B
			cout<<"\nO maior n�mero � "<<A<<" e o menor � "<<B;
		}
	}
	else
	{
		if(B>A && B>C)
		{///Bloco no qual garanto que o B � maior que as outras
			if(A>C)
			{//Bloco no qual caso verdadeiro o B � o maior e o menor o C
				cout<<"\nO maior n�mero � "<<B<<" e o menor � "<<C;
			}
			else
			{//Bloco no qual caso verdadeiro o B � o maior e o menor o A
				cout<<"\nO maior n�mero � "<<B<<" e o menor � "<<A;
			}
		}
		else
		{
			if(C>A && C>B)
			{//Bloco no qual garanto que o C � maior que as outras
				if(A>B)
				{//Bloco no qual caso verdadeiro o C � o maior e o menor o B
					cout<<"\nO maior n�mero � "<<C<<" e o menor � "<<B;
				}
				else
				{//Bloco no qual caso verdadeiro o C � o maior o menor o A
					cout<<"\nO maior n�mero � "<<C<<" e o menor � "<<A;
				}
			}
			else
			{
				if(A=B && A!=C)
				{//Bloco no qual garanto que o A e o B s�o iguais
					if(A>C)
					{//Bloco no qual caso verdadeiro A e B s�o os maiores
						cout<<"\nO A e o B s�o iguais e maiores que o C";
					}
					else
					{//Bloco no qual caso verdadeiro A e B s�o os menores
						cout<<"\nO A e o B s�o iguais e menores que o C";
					}
				}
				else
				{
					if(A=C && A!=B)
					{//Bloco no qual garanto que o A e o C s�o iguais
						if(A>B)
						{//Bloco no qual caso verdadeiro A e C s�o os maiores
							cout<<"\nO A e o C s�o iguais e maiores que o B";
						}
						else
						{//Bloco no qual caso verdadeiro A e C s�o os menores
							cout<<"\nO A e o C s�o iguais e menores que o C";
						}
					}
					else
					{
						if(B=C && B!=A)
						{//Bloco no qual garanto que o B e o C s�o iguais
							if(B>A)
							{//Bloco no qual caso verdadeiro B e C s�o os maiores
								cout<<"\nO B e o C s�o iguais e maiores que o A";
							}
							else
							{//Bloco no qual caso verdadeiro B e C s�o os menores
								cout<<"\nO B e o C s�o iguais e menores que o A";
							}
						}
						else
						{
							if(A=B=C)
							{//Bloco no qual caso verdadeiro A, B e C s�o iguais
								cout<<"\nN�o tem maior ou menor pois todos s�o iguais";
							}
						}
					}
					
				}
			}
		}
	}
}
