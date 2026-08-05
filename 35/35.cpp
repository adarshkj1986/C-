#include<iostream>
using namespace std;
int rev(int  n, int rev_n=0){
    if (n==0){
        return rev_n;
    }
    else{
        return rev(n/10,rev_n*10+(n%10));
    }

}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<rev(n);
    return 0;
}