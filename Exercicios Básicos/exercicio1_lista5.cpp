//exercicio 1 da lista 5 de repeti��o;

//incluindo bibliotecas
#include<iostream>
#include<iomanip>
using namespace std;
int main() {

     setlocale(LC_ALL,"");//para utilizar pontua��o no programa 
     
     //introduzindo as vari�veis int e string 
     
     int n,soma,controle;//n s�o os n�meros inteiro e controle � o n�mero limite 
     string repetir="S";
     
     //estrutura de repeti��o while
     while(repetir=="S"||repetir=="s")
     {
     
     n=1;
     soma=0;
     
     //entrando com o n�mero limite 
     cout<<"Entre com o n�mero limite a ser somado a partir de 1: "<<endl;
     cin>>controle;
     
     //estrutura de repeti��o while 
     while(n<=controle)
     {
     soma=soma+n;
     n++;
     }
     
     //imprimindo a sa�da do programa 
     
	 cout<<"A soma dos "<<controle<<" primeiros n�meros �: "<<soma<<endl;
     cout<<"Deseja continuar S para sim e N para n�o:"<<endl;//condi��o de parada 
     cin>>repetir;
     
     system("cis");//para limpar a tela
     
     }
    
    }
    
    //Nomes dos participantes do grupo : Vitor Hugo Franco Lopes Azevedo; Henrique Meireles; Raike Sabah.
    
