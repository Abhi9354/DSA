#include <iostream>
using namespace std;
int BinarySearch ( int arr[], int size ,int key){
    int start = 0;
    int end = size - 1;
   int  mid = start + (end-start)/2;
    while (start<=end ){
        if ( arr[mid]== key ){
            return mid;
        }
        if(key>mid){
            start = mid + 1;
        }
        else {
            end = mid -1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}
int main(){
    int even[6]= {2,4,6,8,10,12};
    int odd[5]= {3,8,11,14,16};
    int evenIndex= BinarySearch(even,6,10);
    cout<<evenIndex<<endl;
    return 0;
}