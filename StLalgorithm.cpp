#include <bits/stdc++.h>
#include <iostream>

#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int arr []= {4,5,6,9,2,8};
    vector<int> v(arr,arr+6);
    sort(v.begin(),v.end());//it is the combination of three algorithm quick sort heap sort anf insertion sort is called Intro sort

    sort(arr,arr+6);
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
  cout<<"find the no using binary search "<<  binary_search(v.begin(),v.end(),6)<<endl;
  cout<<"finding the lower bound of 8 is -> "<<lower_bound(v.begin(),v.end(),8)-v.begin()<<endl;
      cout<<"finding the upper bound of 8 is -> "<<upper_bound(v.begin(),v.end(),8)-v.begin()<<endl;
      int a = 4 ;
      int b = 8 ;
     cout<<"the maximum of a and b is ->"<< max(a,b)<<endl;
     swap(a,b);
     cout<<"the value of a and b is "<<a<<" ,"<<b<<endl;
     reverse(v.begin(),v.end());
     cout<<"after reversing the vector "<<endl;
      for(int i:v){
        cout<<i<<" ";
       
    }
    cout<<endl;
     rotate(v.begin(),v.begin()+2 ,v.end());
     cout<<"after rotating "<<endl;
      for(int i:v){
        cout<<i<<" ";
       
    }
}