#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
   	setlocale(LC_ALL,"");// Fun��o usada para adicionar acentua��o no programa
   	
   	int L;
   	
   	int G;
   	
   	int M;
   	
   	float T;
   	
   	cin>>L;
   	cin>>G;
   	cin>>M;
   	
   	T=(L*0.35)+(G*0.60)+(M*2);
   	
   	cout<<T<<endl;
   	
return 0;
}
