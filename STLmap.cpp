#include<bits/stdc++.h>
#include <map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]= "Abhishek";
    m[2]="kumar";
    m.insert({5,"bheem"});
    for(auto i :m){
        cout<<i.first<<" "<<i.second<<endl;
    }
   cout<<"count"<<m.count(13)<<endl;
   m.erase(1);
   for (auto i :m ){
    cout<<"after erasing "<<i.first<<" "<<i.second<<endl;

   }
   auto it = m.find(5);
   for(auto i = it ; i!=m.end();i++){
    cout<<(*i).first<<endl;
   }
}