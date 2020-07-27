#include<iosteram>
using namespace std;
int main(){
int n,i,j,k,temp;
cout<<"enter n";
cin>>n;
int arr[n];
printf("Enter array elements");
for(i=0;i<n;i++){
    cin>>arr[i];
}
for(k=1;k<n;k++){
    temp=arr[k];
    j=k-1;
    while(j>=0&&temp<=arr[j]){
        arr[j+1]=arr[j];
        j=j-1;
    }
    arr[j+1]=temp;
}
cout<<"sorted array";
for(i=0;i<n;i++){
    cout<<"%d",arr[i];
}
return 0;
}

