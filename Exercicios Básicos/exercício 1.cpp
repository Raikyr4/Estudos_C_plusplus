//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	
	setlocale(LC_ALL,"");// Fun��o usada para adicionar acentua��o no programa
	
	string A; //Vari�vel repons�vel pelo armazenamento do nome do usu�rio
	
	float Z; // Vari�vel repons�lvel pelo armazenamento do sal�rio inicial 
	
	float X; //Vari�vel repons�lvel pelo armazenamento do aumento do sal�rio
	
	float Y;//Vari�vel repons�lvel pelo armazenamento do sal�rio final
	
	cout<<fixed<<setprecision(2);// Fun��o usada para ter precis�o num�rica nas casas dec�mais
	
	cout<<"Digite seu nome\n";
	
	getline(cin,A);// leitura do nome do us�rio
	
	cout<<"Digite seu sal�rio inicial\n";
	
	cin>>Z; // leitura do sal�rio inicial
	
	X=Z*0.25;// C�lculo do aumento do sal�rio
	
	Y=Z*1.25;// C�lculo do sal�rio final
	
	cout<<"O funcion�rio "<<A<<" teve um aumento de R$ "<<X<<" e passar� a receber um sal�rio de R$ "<<Y<<endl;
	// leitura de saida que mostra o nome do usu�rio , o aumneto do sal�rio e o sal�rio final
}
