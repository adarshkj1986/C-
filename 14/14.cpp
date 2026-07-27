#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>vec1;
    vector<int>vec2;
    vector<int>result;
    int number;
    int n,n1;
    cout<<"enter the first number";
    cin>>n;
    cout<<"enter the second number";
    cin>>n1;
    for(int i=1;i<n;i++){
        if(n%i==0){
            vec1.push_back(i);
        }
    }
    for(int i=1;i<n1;i++){
        if(n1%i==0){
            vec2.push_back(i);
        }
    }
     set_intersection(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), back_inserter(result));
     
    if(!result.empty()){
        int gcd=*max_element(result.begin(),result.end());
        cout<<"gcd is:"<<gcd;
    }
}