#include<iostream>
using namespace std;
int main(){
    int r,n,sum=0;
    cout<<"enter the number";
    cin>>n;
    while(n>0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    cout<<"the sum of digits are:";
    cout<<sum;
}