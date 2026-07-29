#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>v1;
    vector<int>v2;
    vector<int>result;
    int n,n1,i;
    cout<<"enter the first number";
    cin>>n;
    cout<<"enter the second number";
    cin>>n1;
    for(i=1;i<=n;i++){
        if(n%i==0){
            v1.push_back(i);
        }
    }
    for(i=1;i<=n1;i++){
        if(n1%i==0){
            v2.push_back(i);
        }
    }
    set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),back_inserter(result));
    
    while(!result.empty()){
        int hcf=*max_element(result.begin(),result.end());
        cout<<hcf;
        break;

    }
    return 0;
}