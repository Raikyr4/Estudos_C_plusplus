//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	setprecision(2); //Fun��o usada para se utilizar casas decimais
	setlocale(LC_ALL,""); //Fun��o usada para se utilizar acentua��o no programa
	float P1,P2,M; //Vari�veis num�ricas utilizadas, P1=Primeira nota, P2=Segunda nota, M=Media das notas
	string N; //Vari�vel n�o num�rica utilizada, N=Nome do aluno
	cout<<"\nDigite o nome do aluno: ";
	getline(cin,N); //Leitura do nome do aluno podendo ser composto ou n�o
	
	cout<<"\nDigite a primeira nota: ";
	cin>>P1; //Leitura da primeira nota
	
	cout<<"\nDigite a segunda nota: ";
	cin>>P2; //Leitura da segunda nota
	
	M=((P1*2)+(P2*3))/(3+2); //C�lculo da m�dia ponderada do aluno
	if(M<3) //Fun��o consicional para se delimitar se foi aprovado ou reprovado
	{//Bloco no qual caso verdadeiro o aluno foi reprovado
		cout<<"\nO aluno "<<N<<" obteve m�dia "<<M<<" e est� reprovado";
	}
	else
		{//garanto que apartir daqui � maior que 3
			if(M>=7)
			{//bloco no qual o aluno foi aprovado 
				cout<<"\nO aluno "<<N<<" obteve m�dia "<<M<<" e est� aprovado";
			}
			else
			{//bloco no qual o aluno ir� para a recupera��o
				cout<<"\nO aluno "<<N<<" obteve m�dia "<<M<<" e ir� para a recupera��o";
			}
		}
}
