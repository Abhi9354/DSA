#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]= {8,6,1,0,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"the value of n is "<<n<<endl;
    for(int i = 0; i<n-1;i++){
        int minIndex = i;
        for (int j= i+1; j<n ;j++){
            if (arr[minIndex]>arr[j]){
                minIndex= j;
            }
          
        }
          int temp = arr[i];
          arr[i]=arr[minIndex];
          arr[minIndex]=temp;
          
    }
    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}