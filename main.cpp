#include <iostream>
using namespace std;

int main() {
	int n=1, m=0;
	while(n!=0){
	int stock[10];
	for(int i=0; i<=9; i++){
		cout<<"veuillez entrer la valeur "<<i<<" pour stockage ";
		cin>>stock[i];
	}
	
	for(int i=0; i<=9; i++){
		cout<<stock[i]<<endl;
		/*n=stock[i];*/
		m=m+stock[i];
		}
	cout<<"la somme de tous les valeurs entrées est: "<<m<<endl<<endl;
	cout<<"la boucle reprend ! "<<endl;
}
	return 0;
}
