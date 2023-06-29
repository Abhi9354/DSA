#include <iostream>
using namespace std;
int getPivot(int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start )/2 ;
    while(start < end ){
        if (arr[mid]>=arr[0]){
            start = mid + 1;

        }
        else {
            end = mid ;

        }
        mid = start + (end - start ) / 2;

    }
    return start ;
}

int binarySearch(int arr[],int start, int end ,int k ){
    int s = start;
    int e = end;
    int mid = s + (e - s)/2 ;
    while (start<=end)
    {
        if (arr[mid]==k){
            return mid;
        }
        if (arr[mid]<k){
            s= mid + 1;
            
        }
        else{
            e = mid -1;

        }
        mid = s + (e - s)/2 ; 
        
    }
    return -1;

}
 int main(){
    int arr [5]= {7,9,1,2,3};
    int pivot = getPivot(arr,5);
    int k = 2;
    if(k>=arr[pivot] && k<=arr[4]){
        cout<<binarySearch(arr,pivot,4,k);
    }
    else {
        cout<<binarySearch(arr,0,pivot,k);
    }
    return 0;
 }