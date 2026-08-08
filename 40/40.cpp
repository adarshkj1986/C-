#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    vector<int>v2;
    int n;
    cout<<"enter the no";
    cin>>n;
      v.resize(n);
  
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<(int)v.size()-1;i++){
        if(v[i]==v[i+1]){
            v2.push_back(v[i]);
        }
    }
    cout<<"duplicates are:";
    for(int val:v2){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}