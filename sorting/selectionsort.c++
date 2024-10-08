#include <bits/stdc++.h>
using namespace std;

void selection(int arr[],int size){
    int min;
    for(int i=0;i<size-1;i++){
        min=i;
        for(int j=i+1;j<size;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        int t=arr[min];
        arr[min]=arr[i];
        arr[i]=t;
    }
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        arr[i]=d;
    }
    selection(arr,n);
    cout<<"after sorting : ";
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}