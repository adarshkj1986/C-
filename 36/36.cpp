#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return n%10+sum(n/10);
    }
}
int main(){
    int n;
    cout<<"enter the no";
    cin>>n;
    cout<<sum(n);
    return 0;
}