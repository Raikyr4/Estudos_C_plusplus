//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
		setlocale(LC_ALL,"");// Fun��o usada para adicionar acentua��o no programa
			
	double C; //Vari�vel que armazena o valor do capital inicial
	
	double M;//Vari�vel que armazena o valor do Montante final
	
	double n;//Vari�vel que armazena o valor do n�mero de anos
	
	double i;//Vari�vel que armazena o valor da taxa de lucro
	
	cout<<"Insira o valor do Capital inicial : ";
	
	cin>>C; // leitura de entrada do capital inicial
	
	cout<<"Insira a taxa de lucro em (%) : ";
	
	cin>>i;//leitura de entrada da taxa de lucro
	
	cout<<"Insira o n�mero de anos para o investimaneto : ";
	
	cin>>n;//leitura de entrada do n�mero de anos
	
	M=C*pow((1+i/100),n);//C�lculo do montante final
	
	cout<<fixed<<setprecision(2);//Fun��o respon�vel pela rpecis�o das casa decimais
	
	cout<<"O montante acumulado durante "<<n<<" anos foi de "<<M<<endl;//leitura de saida que informa o montante final de acordo com o n�mero de anos investidos 
}
