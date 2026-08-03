#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,r,p;
    int sum=0;
    int i=0;
    cout<<"enter the number";
    cin>>n;
    while(n>0){
        r=n%10;
        p=r*round(pow(2,i));
        sum=p+sum;
        n=n/10;
        i++;
    }
    cout<<"the decimal no is:"<<sum;
    return 0;
}