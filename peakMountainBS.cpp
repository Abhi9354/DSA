#include <iostream>
using namespace std;
int findPeak(int arr[], int n ){
    int s= 0;
    int e = n-1;
    int mid = (s+(e-s)/2);
    while ( s<e){
        if(arr[mid] < arr[mid+1]){
            s=mid+1;

        }
        else{
          e=mid;
        }
         mid = (s+(e-s)/2);
    }
    return s;
}
int main(){
    int mountain[6]= {1,3,5,4,3,1};
    int peak = findPeak(mountain,6);
    cout<<peak;
    return 0;
}