#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter total no of elements";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target;
    cout<<"enter the element to be targeted";
    cin>>target;
    for(int i=0;i<v.size();i++){
        if(v[i]==target){
            cout<<"the positon of the element is:"<<i;
           
        }
        else{
          continue;
            
        }
    }
    return 0;
}