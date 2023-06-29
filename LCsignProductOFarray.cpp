#include <bits/stdc++.h>
using namespace std;
int signFunc(int nums[],int n){
    long double mul=1;
    int ans=0;
    for(int i=0 ;i<n;i++ ){
        mul=mul*nums[i];
}
if(mul>ans){
    mul= 1;
}
else if(mul==ans){
    mul= 0;
}
else {
    mul= -1;
}
return mul;
}
int main(){
int n ;
cin>>n;
    int nums[n];
    for(int i = 0; i<n;i++){
        cin>>nums[i];
    }
        cout<<signFunc(nums,n);
            
        }
    
