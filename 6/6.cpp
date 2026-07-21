#include<iostream>
using namespace std;
int main(){
    int a[3],target;
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    cout<<"enter the no:";
    cin>>target;
    int i;
    for( i=0;i<3;i++){
        if(a[i]==target){
            cout<<i<<endl;
            break;
        }
    }
    if(i==3){
        cout<<"not found";
    }
    return 0;
}