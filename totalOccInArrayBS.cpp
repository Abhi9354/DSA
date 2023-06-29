#include <iostream>
using namespace std;
int firstOcc( int arr [] , int n , int key ){
    int start = 0 ;
    int end = n-1 ;
    int mid = start + (end - start)/2 ;
    int ans = -1;

    while ( start<= end ){
        if ( arr[mid] == key ){
         ans = mid;
         end = mid - 1 ;
        }
        else if ( key > arr[mid]){
            start = mid + 1 ;
        
        }
        else if (key < arr[mid]){
            end = mid - 1;

        }
         mid = start + (end - start)/2 ;
    }
    return ans;
    }


    int lastOcc( int arr [] , int n , int key ){
    int start = 0 ;
    int end = n-1 ;
    int mid = start + (end - start)/2 ;
    int ans = -1;

    while ( start<= end ){
        if ( arr[mid] == key ){
         ans = mid;
         start = mid +1 ;
        }
        else if ( key > arr[mid]){
            start = mid + 1 ;
        
        }
        else if (key < arr[mid]){
            end = mid - 1;

        }
         mid = start + (end - start)/2 ;
    }
    return ans;
    }
int main(){
    int even [12] = {1,2,3,4,5,6,6,6,7,8,9,10};
     int leftOccurrenceIndex = firstOcc(even,12,6);
     cout<<leftOccurrenceIndex<<"\n";
     int RightOccurrenceIndex= lastOcc(even,12,6);
     cout<<RightOccurrenceIndex<<"\n";
     int totalOcc = (lastOcc(even,12,6) - firstOcc(even,12,6))+1;
     cout<<totalOcc;
}