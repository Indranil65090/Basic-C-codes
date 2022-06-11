#include<iostream>
using namespace std;
int main(){
	int i,j,k,n,r;
	cout<<"ROWS:";
	cin>>n;
	for(r=n;r>=1;r--){
		for(i=r;i>=1;i--){
			cout<<"*";
		}
		for(k=1;k<=(2*n-2*r);k++){
			cout<<" ";
		}
		for(j=r;j>=1;j--){
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
