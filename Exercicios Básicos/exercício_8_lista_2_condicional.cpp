//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float V,Q; //V=Valor, Q= quantia a ser transformada
	char OP; //OP=Op��o escolhida
	setlocale(LC_ALL,"");
	setprecision(2);
	cout<<"\nEscolha a op��o desejada";
	cout<<"\nE - Euro";
	cout<<"\nL - Libra Esterlina";
	cout<<"\nD - Dollar";
	cout<<"\nI - Iene";
	cout<<"\nDigite a op��o selecionada: ";
	cin>>OP; //Leitura da op��o escolhida
	
		switch(OP) //Fun��o condicional switch para se determinar a op��o escolhida
		{
			case 'E': //Caso selecionado seja Euro
				cout<<"\n\nDigite a quantia a ser convertida: ";
				cin>>Q;
				V=Q*4.617;
				cout<<"\nTal quantia vale R$"<<V<<" reais";
				break;
			case 'e': //Caso selecionado seja Euro
				cout<<"\n\nDigite a quantia a ser convertida: ";
				cin>>Q;
				V=Q*4.617;
				cout<<"\nTal quantia vale R$"<<V<<" reais";
				break;
			case 'L': //Caso selecionado seja Libra
				cout<<"\n\nDigite a quantia a ser convertida: ";
				cin>>Q;
				V=Q*4.816;
				cout<<"\nTal quantia vale R$"<<V<<" reais";
				break;
			case 'l': //Caso selecionado seja Libra
				cout<<"\n\nDigite a quantia a ser convertida: ";
				cin>>Q;
				V=Q*4.816;
				cout<<"\nTal quantia vale R$"<<V<<" reais";
				break;
			case 'D': //Caso selecionado seja Dollar
				cout<<"\n\nDigite a quantia a ser convertida: ";
				cin>>Q;
				V=Q*3.871;
				cout<<"\nTal quantia vale R$"<<V<<" reais";
				break;
			case 'd': //Caso selecionado seja Dollar
				cout<<"\n\nDigite a quantia a ser convertida: ";
				cin>>Q;
				V=Q*3.871;
				cout<<"\nTal quantia vale R$"<<V<<" reais";
				break;
			case 'I': //Caso selecionado seja Iene
				cout<<"\n\nDigite a quantia a ser convertida: ";
				cin>>Q;
				V=Q*2.818;
				cout<<"\nTal quantia vale R$"<<V<<" reais";
				break;
			case 'i': //Caso selecionado seja Iene
				cout<<"\n\nDigite a quantia a ser convertida: ";
				cin>>Q;
				V=Q*2.818;
				cout<<"\nTal quantia vale R$"<<V<<" reais";
				break;
			default: //Caso a op��o escolhida seja inv�lida
				cout<<"\n\nOpcão selecionada inv�lida, tente novamente"<<endl;
		}
}
