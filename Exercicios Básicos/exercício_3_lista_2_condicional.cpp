//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float A,B,C; //A= LAdo A, B=Lado B, C= Lado C
	setlocale(LC_ALL,"");
	cout<<"\nDigite a vari�vel A: ";
	cin>>A; //Leitura do lado A
	cout<<"\nDigite a vari�vel B: ";
	cin>>B; //Leitura do lado B
	cout<<"\nDigite a vari�vel C: ";
	cin>>C; //Leitura do lado C

		if (pow(A,2) == pow(B,2) + pow(C,2)) //Condicional para se testar se � um triangulo retangulo
		{
		cout<<"\n\nEssas vari�veis formam um tri�ngulo ret�ngulo";
		}
		else
		{
			if (pow(A,2) > pow(B,2) + pow(C,2))
			{
			cout<<"\n\nEssas vari�veis formam um tri�ngulo obtus�ngulo"; //Condicional para se testar se � um triangulo obtusangulo ou acutangulo
			}
			else
			{
			cout<<"\n\nEssas vari�veis formam um tri�ngulo acut�ngulo";
			}
		}
}

