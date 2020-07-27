#include<iostream>
using namespace std;
int main(){
	int n,i,j,temp;
	cout<<"Enter number of elements in array";
	cin>>n;
	int arr[n];cout<<"Enter elements";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(srr[i]>srr[j]{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
					}
				}
			}
	cout>>"sorted array";
	for(i=0;i<n;i++){
	cout<<srr[i];
	}
	cout>>"second largest number=";
	cout>>srr[n-1];
	cout>>"seond smallest element=";
	cuot>>arr[2];
	return 0;
	}





