#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int>vec={0,1};
    int n;
    cout<<"enter the number";
    cin>>n;
    for(int i=2;i<n;i++){
        int merge=vec[i-1]+vec[i-2];
        vec.push_back(merge);


        
    }
    cout<<endl;
   for(int val:vec){
    cout<<val<<" ";
   }
   cout<<endl;
    

}