//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
	float pi,R,Al,V,A; //pi= Valor de pi, R=Raio da figura, Al= Altura da figura, V= Volume da figura, A= Area da figura
	int OP; //Op= op��o selecionada 
	setlocale(LC_ALL,"");
	setprecision(2); //Fun��o para se utilizar casas decimais
	cout<<"1 - Cone Reto";
	cout<<"\n2 - Cilindro";
	cout<<"\n3 - Esfera";
	cout<<"\nDigite a op��o desejada a ser testada: ";
	cin>>OP; //Leitura da op��o selecionada
	pi=3.1416;
	switch(OP) //Condicional switch para selecionar a op��o escolhida
	{
		case 1: //Caso do cone reto
		cout<<"\nDigite o valor do raio: ";
		cin>>R; //Leitura do raio
		cout<<"\nDigite o valor da altura: ";
		cin>>Al; //Leitura da altura
		//Embaixo os c�lculos utilizados
		V=(pi*pow(R,2)*Al)/3;
		A=pi*R*(sqrt(pow(R,2)+pow(Al,2)));
		
		cout<<"\nO valor da �rea �: "<<A;
		cout<<"\nO valor do volume �: "<<V;
		break;
		
		case 2: //Caso do cilindro
		cout<<"\n\nDigite o valor do raio: ";
		cin>>R; //Leitura do raio
		cout<<"\n\nDigite o valor da altura: ";
		cin>>Al; //Leitura da altura
		//Embaixo os c�lculos utilizados
		V=pi*(pow(R,2))*Al;
		A=2*pi*R*Al;
		
		cout<<"\nO valor da �rea �: "<<A;
		cout<<"\nO valor do volume �: "<<V;
		break;
		
		case 3: //Caso da esfera
		cout<<"\n\nDigite o valor do raio: ";
		cin>>R; //Leitura do raio
		//Embaixo os c�lculos utilizados
		V=(1.3333)*pi*pow(R,3);
		A=4*pi*pow(R,2);
		
		cout<<"\nO valor da �rea �: "<<A;
		cout<<"\nO valor do volume �: "<<V;
		break;
		
		default: //Caso n�o seja selecionada uma op��o v�lida
		cout<<"\n\nOp��o selecionada inv�lida, tente novamente";
		break;
	}
}
