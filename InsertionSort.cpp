#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]= {10,1,7,4,8,2,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 1; i<n ; i++){
        int temp = arr[i];
        int j = i-1;
        while (j>=0){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
                j--;
            }
            else 
            break;
        }
        arr[j+1]=temp;
    }
    for (int i = 0; i<n;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}