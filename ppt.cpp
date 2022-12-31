#include <iostream>
using namespace std;

int main(){
	int table[4], i, ppt;
	for(i=0; i<4; i++){
		cout<<"veuillez saisir la valeur numero "<<i<<" pour stockage: ";
		cin>>table[i];
	}
	
	for(i=1; i<4; i++){
		if(table[0]<table[i]){
			cout<<table[0]<<"est inferieur a "<<table[i];
		}else{
			if(table[1]<table[i]){
				cout<<table[1]<<" est inferieur a "<<table[i];
			}else{
				if(table[2]<table[i]){
					cout<<table[2]<<" est inferieur a "<<table[i];
				}else{
					if(table[3]<table[i]){
						cout<<table[3]<<" est inferieur a "<<table[i];
					}
				}
			}
		}
	}
	return 0;
}
