#include<iostream>
using namespace std;
int main(){
	int i,j,k,n,r;
	cout<<"Rows:";
	cin>>n;
	for(r=1;r<=n;r++){
		for(i=1;i<=r;i++){
			cout<<"*";
		}
		for(k=1;k<=(2*n-2*r);k++){
			cout<<" "; 
		}
		for(j=1;j<=r;j++){
			cout<<"*";
		}
	cout<<"\n";
}
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
