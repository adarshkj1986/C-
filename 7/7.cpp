#include<iostream>
using namespace std;
int main(){
    int arr[5],l,r,temp;
    
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    l=0;
    r=sizeof(arr[5])-1;
    while(l<r){
        temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        l++;
        r--;

    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}