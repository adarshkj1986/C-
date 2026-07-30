#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n,i;
    int sum=0;
    cout<<"enter the number";
    cin>>n;
    for(i=1;i<n;i++){
        if(n%i==0){
            v.push_back(i);
        }
    }
    
    for(i=0;i<v.size();i++){
         sum=sum+v[i];
        
    }
    
    if(sum==n){
        cout<<"this is a perfect number";
    }
    else{
        cout<<"this is not a perfect number";
    }
}