#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the total no of elements";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];

    }
    for(int val:v){
        cout<<val;
    }
    cout<<endl;
    int largest=v[0];
    for(int i=0;i<v.size();i++){
        if(v[i]>largest){
            largest=v[i];
        }
    }
    cout<<"largest is"<<largest<<endl;
    int s_largest=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]>s_largest && largest!=v[i]){
            s_largest=v[i];

        }
    }
    cout<<"second largest is:"<<s_largest;
}