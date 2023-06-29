#include<iostream>
using namespace std;
bool isPossible(int arr[],int n ,int k, int mid){
    int countpainter = 1;
    int boardsum=0;
    for (int i= 0 ; i<n ; i++){
        if( boardsum + arr[i]<= mid ){
            boardsum= boardsum + arr[i];
        }
        else {
            countpainter++;
            if (countpainter > k ||arr[i]>mid ){
                return false;
            }
            boardsum = arr[i];
        }
    }
    return true;
}
int main(){
    int arr [4]= {5,5,5,5};
    int k = 2 ;
    int n= 4;
    int s =  0;
    int sum =0;
    for (int i = 0 ; i<n ; i++){
        sum = sum + arr[i];
    }
    int e= sum;
int ans = -1 ;
int mid = s+(e-s)/2;
  while ( s<=e){
    if (isPossible(arr,n,k,mid)){
        ans =mid;
        e=mid-1;
    }
    else{
        s=mid+1;
    }
     mid = s+(e-s)/2;
  }
  cout<<ans;
  return 0;
}