//Nome dos integrantes do grupo que participaram da atividade : Raiky Sahb, Vitor Hugo Franco Lopes Azevedo, Guilherme Fernandes Meireles.
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	setlocale(LC_ALL,"");// Fun��o usada para adicionar acentua��o no programa
	
	float St;//vari�vel que armazenam o valores do Seguro total 
	
	float nM;//vari�vel que armazenam o valores do número de acres de milho plantados
	
	float nF;//vari�vel que armazenam o valores do número de acres de feij�o plantados
	
	float nC;//vari�vel que armazenam o valores do número de acres de caf� planatdos
	
	cout<<"Digite o numero de acres plantados com Milho : \n";
	
	cin>>nM;//Leitura do n�mero de acres de milho plantados
	
	cout<<"Digite o numero de acres plantados com Feijao : \n";
	
	cin>>nF;//Leitura do n�mero de acres de feij�o plantados
	
	cout<<"Digite o numero de acres plantados com Cafe : \n";
	
	cin>>nC;//Leitura do n�mero de acres de caf� planatdos
	
	cout<<"O valor do seguro para a plantacao de milho e : "<<0.035*nM<<endl;// Leitura de saida que mosta o valor do seguro para planta��o de milho
	
	cout<<"O valor do seguro para a plantacao de feijao e : "<<0.035*nF<<endl;// Leitura de saida que mosta o valor do seguro para planta��o de feij�o
	
	cout<<"O valor do seguro para a plantacao de cafe e : "<<(0.035*nC)<<endl;// Leitura de saida que mosta o valor do seguro para planta��o de caf�
	
	cout<<"O custo total de seguro sera : "<<((0.035*nM)+(0.035*nF)+(0.035*nC))*1000<<" R$"<<endl;// Leitura de saida que mosta o valor do seguro total
}
