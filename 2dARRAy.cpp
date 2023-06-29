#include <bits/stdc++.h>
using namespace std;
int main (){
    int n ,m;
    cin>>n;
    cin>>m;
    int arr[n][m]={{1,2,3},{4,5,6},{7,8,9}};
   /* for(int j= 0 ; j<m;j++){
        if(j==0){
        for (int i =0;i<n;i++){
            cout<<arr[i][j]<<",";
        }}
        if(j==1){

        
          for (int i=0;i<n ;i++){
            cout<<arr[i][j]<<",";
        }}
       if(j==2){
          for (int i =0;i<n ;i++){
            cout<<arr[i][j]<<",";
        }}
        cout<<endl;
    }
    
    return 0;*/
     for (int j = 0; j < m; j++)
  {
    for (int i = 0; i < n; i++)
    {
      cout << arr[i][j];
    }
    cout << endl;
  }

  return 0;
}
