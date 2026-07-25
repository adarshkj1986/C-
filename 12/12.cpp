#include<iostream>
using namespace std;
#include<list>
#include<map>
int main(){
    list<int>l;
    l.push_back(1);
    l.push_back(2);
    cout<<l.size()<<endl;
    map<string,int>m;
    m["tv"]=50;
    m["laptop"]=100;
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }

}