//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"");// Fun��o usada para adicionar acentuaa��o no programa
	
	string A;//Vari�vel repons�vel pelo armazenamento do nome do usu�rio
	
	float X;// Vari�vel repons�lvel pelo armazenamento da nota de peso 2
	
	float Y;// Vari�vel repons�lvel pelo armazenamento da nota de peso 1
	
	float M;// Vari�vel repons�lvel pelo armazenamento da m�dia ponderada das notas
	
	cout<<"Digite o nome do aluno :\n";
	
	cin>>A;// leitura do nome usu�rio
	
	cout<<"Digite as notas do aluno :\n";
	
	cin>>X>>Y;// leitura das notas do usu�rio
	
	M=(X*2)+(Y*3)/5;// C�lculo da m�dia das notas
	
	cout<<fixed<<setprecision(1);// Fun��o usada para ter precis�o num�rica nas casas dec�mais
	
	cout<<"O aluno "<<A<<" obteve a media "<<M<<endl;// leitura de saida indicando o nome do aluno e a m�dia de suas notas
}