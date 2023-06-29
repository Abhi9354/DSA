#include <iostream>

#include <array>
using namespace std;
int main(){
{
    array<int,6>arr={1,2,3,4,5,2};
    
 int ans = 0;
    for (int i = 0 ; i < arr.size() ; i++){
        ans = ans ^ arr[i];
  
    }
    for (int i=1;i<arr.size(); i++){
        ans =ans^i;
    }
	cout<< ans ;
}}
/*for array of {1,2,3,4,5,2} and {1,2,,3,4,5}
output is  2*/