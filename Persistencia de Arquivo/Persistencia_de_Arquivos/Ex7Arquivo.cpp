#include <iostream>
#include <fstream>
using namespace std;
main() {
	//Criar uma vari�vel para o arquivo (leitura)
	ifstream arquivoNumeros;
	//Vari�vel int para receber cada n�mero lido do arquivo
	int numero;
	//Vari�veis para armazenar o maior e o menor valor
	int maior, menor;
	//Abrir o arquivo numeros.txt
	arquivoNumeros.open("numeros.txt");
	//Ler o primeiro n�mero e atribuir como menor e maior valor
	arquivoNumeros >> numero;
	cout << numero << " ";
	menor = numero;
	maior = numero;
	//Estrutura de repeti��o para ler todos os valores do arquivo
	do { //good() retorna true enquanto houver dados a serem lidos do arquivo
		//ler o pr�ximo valor do arquivo e armazenar na vari�vel numero
		if (arquivoNumeros.eof()) {
			break;
		}
		arquivoNumeros >> numero;
		//imprimir o n�mero lido na tela
		cout << numero << " ";
		//Teste para verificar se o pr�ximo n�mero � o menor
		if (numero < menor) {
			menor = numero;
		}
		//Teste para verificar se o pr�ximo n�mero � o maior
		if (numero > maior) {
			maior = numero;
		}
	} while(arquivoNumeros.good());
	//Imprimir os valores de menor e maior
	cout << endl;
	cout << "Menor valor: " << menor << endl;
	cout << "Maior valor: " << maior << endl;
}
