#include <iostream>
#include <array>
using namespace std;
int main (){
    array<int,5> arr= {1,3,2,4,6};
    int s= arr.size();
    cout<<arr.at(2)<<endl;
    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;
    cout<<arr.empty()<<endl;
    cout<<s;
}