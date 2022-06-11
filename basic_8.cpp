#include<iostream>
using namespace std;
int main(){
	int org,sum=0,c,n;
	cin>>n;
	org=n;
	while(n!=0){
		c=n%10;
		sum+=(c*c*c);
		n/=10;
	}
	if(org==sum){
		cout<<"Armstrong number!!";
	}
	else{
		cout<<"Not Armstrong number!!";
	}
	return 0;
}
