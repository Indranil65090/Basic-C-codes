#include<iostream>
using namespace std;
int main(){
	int rows,i,j,space;
	cout<<"ROWS:";
	cin>>rows;
	for(i=1;i<=rows;i++){
		for(space=rows-i;space>=1;space--){
			cout<<" ";
		}
		for(j=1;j<=(2*i-1);j++){
			cout<<"*";
		}
		cout<<"\n";
	}
	for(i=rows-1;i>=1;i--){
		for(space=1;space<=rows-i;space++){
			cout<<" ";
		}
		for(j=1;j<=(2*i-1);j++){
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
