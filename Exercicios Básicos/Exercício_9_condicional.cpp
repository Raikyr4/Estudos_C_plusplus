//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int N,MC,DU,M,C,In; //Vari�veis num�ricas utilizadas, N=N�emro, MC=Algarismo de milhar e da centena juntos, DU=Algarismo da dezena e unidade juntos, M=Algarismo de milhar, C=Algarismo da centena, In=inverso
	setprecision(2); //Fun��o usada para se utilizar casas decimais
	setlocale(LC_ALL,""); //Fun��o usada para se utilizar acentua��o no programa
	cout<<"\nDigite o n�mero de quatro digitos: ";
	cin>>N; //Leitura do n�mero de quatro digitos
	
	MC=N/100; //C�lculo para se pegar o algarismo de milhar e da centena
	DU=N%100; //C�lculo para se pegar o algarismo da dezena e unidade
	M=MC/10; //C�lculo para se determinar o algarismo de milhar
	C=MC%10; //C�lculo para se determinar o algarismo da centena
	In=C*10+M; //C�lculo para se inverter
	
	if((N>=1000) || (N<=9999)) //Fun��o condicional para se verificar se o n�mero � de quatro algarismos
	{//Bloco no qual caso verdadeiro o n�mero n�o possui quatro digitos
		cout<<"\nO n�mero deve ser de quatro algarismos";
	}
	else
	{//Bloco no qual o n�mero possui quatro digitos
		if(In==DU)
		{//Bloco no qual o n�mero � um pal�ndromo
		cout<<"\nO n�mero "<<N<<" � um pal�ndromo e seu pal�ndromo �: "<<N;
		}
		else
		{//Bloco no qual o n�mero n�o � um pal�ndromo
			cout<<"\nO n�mero digitado "<<N<<" n�o � um pal�ndromo";
		}
	}
}
