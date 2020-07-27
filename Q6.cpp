#include<iostream>
using namespace std;
int main(){
	int n,i,c=0;
	cout<<"Enter number";
	cin>>n;
	for(i=0;i<=n;i++){
		if(n%i==0){
			c++;
		}
	}
	if(c==2){
		cout<<"PRIME";
	}
	else{
		cout<<"NOT PRIME";
		}
	return 0;
}
