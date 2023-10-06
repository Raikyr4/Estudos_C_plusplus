//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int Op; //Vari�vel num�rica inteira utilizada, Op=Op��o escolhida
	float A,T,TD,T1,TD1,TD2,TD0,TF; //Vari�veis num�ricas utlizadas, A=�rea, T=Total,TD=Desconto de 10% ap�s a aplica��o do primeiro desconto, TD0= Aplica��o do primeiro desconto de 5%, T1=Quanto passou de 1750, TD1=Desconto de 5%, TD2=Desconto de 10%, TF=Total j� ap�s aplica��o do desconto
	string N; //Vari�vel n�o num�rica utilizada, N=Nome do fazendeiro
	setprecision(2); //Fun��o usada para se utilizar casas decimais
	setlocale(LC_ALL,""); //Fun��o usada para se utilizar acentua��o no programa
	cout<<"\nNome do fazendeiro: ";
	getline(cin,N); //Leitura do nome do fazendeiro podendo ser composto ou n�o
	cout<<"\nDigite quantos acres ser�o pulverizados: ";
	cin>>A; //Leitura da �rea
	
	cout<<"\n\n1-pulveriza��o contra ervas daninhas,  R$ 5,00 por acre";
	cout<<"\n2-pulveriza��o  contra gafanhotos, R$ 10,00 por acre";
	cout<<"\n3-pulveriza��o contra broca, R$ 15,00 por acre";
	cout<<"\n4-pulveriza��o contra tudo acima, R$ 25,00";
	cout<<"\nSelecione a forma a ser pulverizada: ";
	cin>>Op; //Leitura da op��o selecionada
	
	switch(Op) //Fun��o condicional switch no qual facilita a utiliza��o de escolha das op��es
	{
		case 1: //Primeiro caso
			T=A*5.00; //C�lculo para se calcular o valor total
			break; //Fun��o para se terminar o switch ap�s esse caso terminar
			
		case 2: // Segundo caso
			T=A*10.00; //C�lculo para se calcular o valor total
			break; //Fun��o para se terminar o switch ap�s esse caso terminar
			
		case 3: //Terceiro caso
			T=A*15.00; //C�lculo para se calcular o valor total
			break; //Fun��o para se terminar o switch ap�s esse caso terminar
			
		case 4: //Quarto caso
			T=A*25.00; //C�lculo para se calcular o valor total
			break; //Fun��o para se terminar o switch ap�s esse caso terminar
			
		default: //Caso no qual a op��o selecionada n�o existe
			cout<<"\nA op��o digitada n�o � uma op��o poss�vel";
			break; //Fun��o para se terminar o switch ap�s esse caso terminar
			return 0; //Fun��o para se terminar o programa
	}
	if((A>=300) && (T>1750))
	{//Bloco para caso ambos os descontos seja maplicado
		TD0=T*(5/100); //C�lculo para se descobrir o primeiro desconto de 5% aplicado
		TD=TD0*(10/100); //C�lculo para se descobrir o desconto de 10% depois de ser aplicado o primeiro
		TF=T-TD; //C�lculo para se descobrir o total final
		cout<<"\nO fazendeiro "<<N<<" ir� pagar R$"<<TF<<" pelo servi�o de pulveriza��o";
	}
	else
	{
		if(A>=300)
		{//Bloco para caso apenas o desconto de 5% seja aplicado
			TD1=T*(5/100); //C�lculo para se descobrir o desconto
			TF=T-TD1; //C�lculo para se descobrir o total final
			cout<<"\nO fazendeiro "<<N<<" ir� pagar R$"<<TF<<" pelo servi�o de pulveriza��o";
		}
	
		else
		{
			if(T>1750)
			{//Bloco para caso apenas o desconto de 10% seja aplicado
				T1=T-1750; //C�lculo para se descobri quanto passou de 1750
				TD2=T1*(10/100); //C�lculo para se descobrir o desconto
				TF=T-TD2; //C�lculo para se descobrir o total final
				cout<<"\nO fazendeiro "<<N<<" ir� pagar R$"<<TF<<" pelo servi�o de pulveriza��o";
			}
			else
			{//Bloco para caso n�o seja aplicado nenhum desconto
				cout<<"\nO fazendeiro "<<N<<" ir� pagar R$"<<T<<" pelo servi�o de pulveriza��o";
			}
		}
	}
}
