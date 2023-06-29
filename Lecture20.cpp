#include <bits/stdc++.h>


using namespace std;
int main(){
    int arr[]= {11,7,3,12,4};
    int s = 0 ;
    int e = 4;
    
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for(int i =0 ;i <=4 ;i++){
        cout<<arr[i]<<" ";
    }
   
    return 0 ;
}