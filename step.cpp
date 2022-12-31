#include <iostream>
using namespace std;

int main(){
	int y;
	do{
	int m, fact=1;
	cout<<"veuillez saisir un nombre et ce programme devra vous calculer le factorielle ! ";
	cin>>m;
	
	for(int i=1; i<=m; i++){
		fact=fact*i;
	}
	cout<<m<<"!"<<"= "<<fact<<endl;
	cout<<"			appuyer sur 1 pour recommencer et 0 pour arreter : ";
	cin>>y;
	}while(y!=0);
}
