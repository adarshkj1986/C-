#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"enter the number";
    cin>>n;
    while(n>0){
        if(n%10==1){
            count++;
        }
        n=n/10;
    }
    cout<<"the no of set bits are:"<<count;
    return 0;
}