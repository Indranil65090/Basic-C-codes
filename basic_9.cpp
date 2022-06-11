#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char str[50];
	cout<<"Enter the string:";
	gets(str);
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==' '){
			str[i]='-';
		}
	}
	for(int i=0;str[i]!='\0';i++){
		cout<<str[i];
	}
	return 0;
}

