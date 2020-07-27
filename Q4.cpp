#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int i,l,flag;
	char str1[20];
	cout<<"Enter string";
	cin>>str1;
	l=strlen(str1);
	for(i=0;i<l;i++){
		if(str1[i]!=str1[l-i-1]){
			flag=1;
			break;
		}
	}
	if(flag==1){
		cout<<"NOT PALLINDROME";
	}
	else{
		cout<<"PALLINDROME";
		}
	return 0;
}

