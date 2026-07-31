#include<iostream>
using namespace std;

int main(){
    int n,digit;
    int sum=0;
    cout<<"enter the number:";
    cin>>n;
    int temp=n;
    while(temp>0){
        digit=temp%10;
        int fact=1;
        for(int i=1;i<digit+1;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==n){
        cout<<"the number is a strong number";
        
    }
    else{
        cout<<"the number is not a strong number";
       
    }

    return 0;
}