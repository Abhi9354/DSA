#include<bits/stdc++.h>

using namespace std;
int main (){
  int n;
    cout<<"enter the value of n";
   cin>>n;

   int k ;
   cout<<"enter the value of k";
   cin>>k;
   int count=0;
    for(int i =1 ; i<=n;i++){
            if(n%i==0)count++;
            if(count==k)cout<<i;

        }
        return -1;
    }



/* int n;
   cout<<"enter the value of n";
   cin>>n;

   int k ;
   cout<<"enter the value of k";
   cin>>k;
   int* arr[]={NULL};
for(int i = 1;i<=n;i++){
    if(n%i==0){
      *arr[i]=i;
    }
    else
    continue;
}
int j= sizeof(arr)/sizeof(arr[0]);
for (int i=1; i<=j;i++){
    cout<<*arr[i]<<" ,";
}
    for(int i = 1 ;i<=j;i++){
        if(*arr[i]==k){
            cout<<i;
        }
        if(k>n){
            return -1;
        }
    }
    */