#include <iostream>
#include <deque>
using namespace std;
int main(){
deque<int> d ;
d.push_front(2);
d.push_back(1);
cout<<d.front()<<endl;
cout<<d.back()<<endl;
d.pop_front();
cout<<d.at(0)<<endl;
d.push_front(2);
d.push_front(4);
d.push_back(5);
cout<<"after pushing "<<endl;
for(int i:d){
    cout<<i<<endl;
}
d.erase(d.end(),d.begin()+2);
cout<<"after erase "<<endl;
for(int i:d){
    cout<<i<<endl;

return 0;
}}