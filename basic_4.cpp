#include<iostream>
using namespace std;
int main(){
	int i,j,r,k,p;
	cout<<"ROWS:";
	cin>>r;
	for(p=1;p<=r;p++){
		for(i=1;i<=p;i++){
			cout<<"*";
		}
		for(k=1;k<=(2*r-2*p);k++){
			cout<<" ";
		}
		for(j=1;j<=p;j++){
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
