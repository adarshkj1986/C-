#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,n1,sum=0;
    cout<<"enter the number";
    cin>>n;
    int count=0;
    n1=n;
    int temp=n;
    
    while(temp>0){
        temp=temp/10;
        count++;
    }
    n=n1;
   
    while(n>0){
        int r=n%10;
        sum=sum+round(pow(r,count));
        n=n/10;

    }
    if(n1==sum){
        cout<<"this is a armstrong number";
    }
    else{
        cout<<"this is not a armstrong number";
    }
}