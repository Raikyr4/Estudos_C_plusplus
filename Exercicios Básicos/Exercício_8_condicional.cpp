//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float P1,P2,R1,R2,R3,R4; //Vari�veis num�ricas utilizadas, P1=Primeiro n�mero, P2=Segundo n�mero, R1=Divis�o inteira, R2=Resultado da multiplica��o, R3=Resultado da soma, R4=Resultado da subtra��o
	int Op; //Vari�vel num�rica inteira utilizada, Op=Op��o escolhida
	setprecision(2); //Fun��o usada para se utilizar casas decimais
	setlocale(LC_ALL,""); //Fun��o usada para se utilizar acentua��o no programa
	cout<<"\nDigite o primeiro n�mero: ";
	cin>>P1; //Leitura do primeiro n�mero
	cout<<"\nDigite o segundo n�mero: ";
	cin>>P2; //Leitura do segundo n�mero
	
	cout<<"\n1-Retornar o quociente inteiro de uma divis�o";
	cout<<"\n2-Retornar a multiplica��o de dois n�meros";
	cout<<"\n3-Retornar a soma de dois n�meros";
	cout<<"\n4-Retornar a subtra��o de dois n�meros";
	cout<<"\n\nEscolha uma das op��es acima e digite aqui o n�mero escolhido: ";
	cin>>Op; //Leitura da op��o escolhida pelo usu�rio
	
	if(Op==1) //Fun��o condicional para se determinar a op��o escolhida
	{//Bloco no qual a op��o 1 foi escolhida
		if(P2!=0)
		{//Bloco no qual � poss�vel fazer a divis�o
		R1=P1/P2; //C�lculo para se determinar a divis�o
		cout<<"\n\nO resultado de sua divis�o inteira �: "<<R1;
		}
		else
		{//Bloco no qual n�o � possivel fazer a divis�o
		cout<<"\nN�o � poss�vel fazer uma divis�o por 0";
		}
	}
	else
	{
		if(Op==2)
		{//Bloco no qual a op��o 2 foi escolhida
			R2=P1*P2; //C�lculo para se determinar a multiplica��o
			cout<<"\nO resultado da multiplica��o �: "<<R2;
		}
		else
		{
			if(Op==3)
			{//Bloco no qual a op��o 3 foi escolhida
				R3=P1+P2; //C�lculo para se determinar a soma
				cout<<"\nO resultado da soma �: "<<R3;
				
			}
			else
			{
				if(Op==4)
				{//Bloco no qual a op��o 4 foi escolhida
					R4=P1-P2; //C�lculo para se determinar a subtra��o
					cout<<"\nO resultado da subtra��o �: "<<R4;
				}
				else
				{//Bloco no qual a op��o 3escolhida n�o existe
					cout<<"\nDesculpe mas n�o foi inserida nenhuma op��o v�lida tente novamente";
				}
			}
		}
	}
}
