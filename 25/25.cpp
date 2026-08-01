#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,i;
    vector<int>v;
    cout<<"enter the number";
    cin>>n;
    for(i=1;i<n;i++){
        if(n%i==0 && i%2!=0){
            v.push_back(i);
        }
    }
    while(! v.empty()){
        int largest=*max_element(v.begin(),v.end());
        cout<<"largest is:"<<largest<<endl;
        break;
    }
  
    
    
}