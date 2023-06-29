#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    int arr1 [6]={1,2,3};
    int arr2 [3]={2,5,6};
    int m = 3;
    int  n = 3;
    int j=0;
for(int i =3; i<6; i++){
    arr1[i]=arr2[j];
    j++;
}
for(int i = 0 ; i<6;i++){
    cout<<arr1[i]<<" ";
}
sort(arr1,arr1+6);
for(int i = 0 ; i<6;i++){
    cout<<arr1[i]<<" ";
}
return 0;
}
