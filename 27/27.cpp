#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    double n;
    int r;
    vector<int>v;
    cout<<"enter the decimal no";
    cin>>n;
    long long integer=n;
    double frac=n-integer;
    long long temp=integer;
    while(temp>0){
        r=temp%2;
        v.push_back(r);
        temp=temp/2;

    }
    reverse(v.begin(),v.end());
    for(int val:v){
        cout<<val;
    }
    if(frac>0){
        cout<<".";
        int precison=4;
        while(precison--){
            frac*=2;
            int bit=frac;
            cout<<bit;
            frac-=bit;
        }

    }
    return 0;
}