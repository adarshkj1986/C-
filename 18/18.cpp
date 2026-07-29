#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v1;
    vector<int>v2;
    vector<int>result;
    int n,n1;
    cout<<"enter the first number";
    cin>>n;
    cout<<"enter the second number";
    cin>>n1;
    for(int i=1;i<=10;i++){
        v1.push_back(n*i);
    }
    for(int i=1;i<=10;i++){
        v2.push_back(n1*i);
    }
    set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),back_inserter(result));
    while(!result.empty()){
        int lcm=*min_element(result.begin(),result.end());
        cout<<lcm;
        break;
    }
    cout<<endl;
    return 0;
}