#include<iostream>
using namespace std;
int main(){
    int n[5],duplicate[50];
    int dupIndex=0;
    for(int i=0;i<=sizeof(n);i++){
        for(int j=i+1;j<sizeof(n);j++){
            if(n[i]==n[j]){
                duplicate[dupIndex]=n[i];
                dupIndex++;
            }

        }

    }
}