#include<iostream>
using namespace std;
int main(){
    int x,ans=1,n;
    cout<<"enter the number";
    cin>>x;
    cout<<"enter the second number";
    cin>>n;
    while(n>0){
        if(n & 1){
        ans=ans*x;
        }
    
    x=x*x;
    n=n/2;
    }
    cout<<ans;
}