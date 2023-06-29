#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int arr[]= {48000,59000,99000,13000,78000,45000,31000,17000,39000,37000,93000,77000,33000,28000,4000,54000,67000,6000,1000,11000};
    int n = sizeof(arr)/sizeof(arr[0]);
    double sum=0;
    int mini;
    int maxi=-1;
    for(int i =0 ;i < n;i++){
      sum= sum + arr[i];
      maxi= max (maxi,arr[i]);
      mini= min(mini,arr[i]);
      }
        double ans=(sum-(maxi+mini))/(n-2);
     cout<<ans;
          return 0;
    }


