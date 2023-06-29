#include <bits/stdc++.h>
#include<list>
using namespace std;
int main(){
    list<int> l ;
    l.push_back(21);
    l.push_front(35);
    list<int>n(5,100);
    cout<<"element in  N list are -->";
    for(int i:n){
        cout<<i<<",";
    }
    cout<<endl;
    cout<<"element in  L list are -->";
    for(int i:l){
        cout<<i<<",";
    }
    cout<<endl;
    cout<<"after erase";
    n.erase(n.begin());
    for(int i:n ){
        cout<<i<<",";
    }

    return 0;
}