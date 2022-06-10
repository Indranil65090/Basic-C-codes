#include<iostream>
using namespace std;
int main(){
	int i,j,r,sp;
	cout<<"ROWS:";
	cin>>r;
	for(i=1;i<=r;i++)
	{
		for(sp=i;sp<r;sp++){
			cout<<" ";
		}
		for(j=1;j<=(2*i-1);j++){
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
