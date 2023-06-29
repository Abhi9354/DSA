#include <bits/stdc++.h>
using namespace std;
bool isPossible ( int arr[], int k,int n ,int mid ){
    int CowCount = 1;
    int lastposition = arr[0];
    for (int i=0 ; i<n ; i++){
        if(arr[i]-lastposition>=mid){
            CowCount++;
            if(CowCount==k){
                return true;
            }
            lastposition= arr[i];
        }
    }
    return false;
}

int main(){
    int k =2 ;
    int arr[5]={4,2,1,3,6};   //intialize array
     int n =sizeof(arr) / sizeof(arr[0]); //to get the no of index
    sort(arr,arr+n);  // sorting the array
    cout<<"printing the sorting array "<<endl;
    for(int i = 0;i<n;i++){
        
        cout<<arr[i]<<" "; //printing after sorting
    }
    cout<<endl;
    
    int s = 0;   //inttialise the start element of search space
    int maxi=-1;
    for(int i= 0;i<n;i++){
        maxi = max(maxi,arr[i]); //to get the max element of an array
    }
    cout << "printing the maximum element of an array"<<endl;
    cout<<maxi<<endl;
    int e = maxi;
    int mid = s + (e-s)/2;
    int ans = -1 ;
    while ( s <= e){
        if (isPossible(arr,k,n ,mid)){
             ans = mid;
             s = mid + 1 ;
        }
        else{
            e= mid -1;
        }
        mid = s + (e-s)/2;
    }
    cout<<"the largest possible distance for aggressive cow is "<<" ";
    cout <<ans;
    return 0;
}






/*#include <bits/stdc++.h>
using namespace std;
bool isPossible ( int arr[], int k,int n ,int mid ){
    int CowCount = 1;
    int lastposition = arr[0];
    for (int i=0 ; i<n ; i++){
        if(arr[i]-lastposition>=mid){
            CowCount++;
            if(CowCount==k){
                return true;
            }
            lastposition= arr[i];
        }
    }
    return false;
}

int main(){
    int k =2 ;
    int arr[5]={4,2,1,3,6};   //intialize array
    cout<<"size of an array "<<endl;
    cout<<sizeof(arr)<<endl;
    cout<<"size of fisrt element "<<endl;
      cout<<sizeof(arr[0])<<endl;
     int n =sizeof(arr) / sizeof(arr[0]); //to get the no of index
    sort(arr,arr+n);  // sorting the array
    cout<<"printing the sorting array "<<endl;
    for(int i = 0;i<n;i++){
        
        cout<<arr[i]<<" "; //printing after sorting
    }
    cout<<endl;
    
    int s = 0;   //inttialise the start element of search space
    int maxi=-1;
    int mini;
    for(int i= 0;i<n;i++){
        maxi = max(maxi,arr[i]); //to get the max element of an array
        mini= min(mini,arr[i]);
    }
     cout << "printing the minimum element of an array"<<endl;
    cout<<mini<<endl;
    cout << "printing the maximum element of an array"<<endl;
    cout<<maxi<<endl;
    int e = maxi-mini;
    int mid = s + (e-s)/2;
    int ans = -1 ;
    while ( s <= e){
        if (isPossible(arr,k,n ,mid)){
             ans = mid;
             s = mid + 1 ;
        }
        else{
            e= mid -1;
        }
        mid = s + (e-s)/2;
    }
    cout<<"the largest possible distance for aggressive cow is "<<" ";
    cout <<ans;
    return 0;
}*/