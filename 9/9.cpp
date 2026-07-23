#include<iostream>
using namespace std;
int main(){
    int a[5]={5,2,4,1,3};
    int min_index,temp;
    for(int i=0;i<5;i++){
        min_index=i;
        for(int j=i+1;j<5;j++){
            if (a[j]<a[min_index]){
                min_index=j;
            }
        }
        temp=a[i];
        a[i]=a[min_index];
        a[min_index]=temp;
    }

        
        for(int i=0;i<5;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        return 0;

    }
