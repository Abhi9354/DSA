#include <iostream>
using namespace std;
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++){
    cout << arr[i]<<" ";
}cout<<endl;
}
void AlterArray(int arr[],int n)
{
    int i=0;

    while(i<n) 
    {
        if(i+1<n)
        {
            swap(arr[i],arr[i+1]);
            i=i+2;
        }
        
    }
}
int main()
{
    int arr[]={1,3,5,6,7,9};
    AlterArray(arr,6);
    printArray(arr,6);

    return 0;
}