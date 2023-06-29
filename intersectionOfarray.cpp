#include <bits/stdc++.h> 
#include <vector>
using namespace std;

 void findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m,vector<int>&arr3,int o)
{
  int i = 0 , j = 0 ,k =0;
    vector<int>ans;
    while ( i < n && j < m && k < o){
        if( arr1 [i] == arr2 [j] && arr2[j]== arr3[k]){
            ans.push_back(arr1[i]);
             i++;j++;k++;
        }
       else if( arr1 [i] < arr2[j] ){
          
           i++;
        }
       else if (arr2 [j] < arr3 [k] ){
           j++;
        }
        else{
            
            k++;
    }
    
}
for(auto i : ans){
      cout<<i<<" ";
    }
    }

int main (){
    vector<int>arr1;
    arr1.push_back(3);
     arr1.push_back(3);
      arr1.push_back(3);
       arr1.push_back(3);
        arr1.push_back(3);
        
     vector<int>arr2;
     arr2.push_back(3);  
      arr2.push_back(3);   
       arr2.push_back(3); 

       vector<int>arr3;
       arr3.push_back(3);
        arr3.push_back(3);
         arr3.push_back(3);
          arr3.push_back(3);
           arr3.push_back(7);

    int n = 5;
    int m = 3;
    int o = 5;

findArrayIntersection(arr1,n,arr2,m,arr3,o);

}