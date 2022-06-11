#include<iostream>
using namespace std;
int main(){
	int org,rev=0,n,rem;
	cout<<"Enter the number:";
	cin>>n;
	org=n;
	while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	if(org==rev){
		cout<<"Pallindrome";
	}
	else{
		cout<<"Not Pallindrome";
	}
	return 0;
}
