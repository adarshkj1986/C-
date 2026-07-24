#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string text;
    cout<<"enter the text";
    cin>>text;
    string reverse_s=text;
    reverse(reverse_s.begin(),reverse_s.end());
    if(text==reverse_s){
        cout<<"it is a palindrome";
    }
    else{
        cout<<"it is not a palindrome";
    }
}