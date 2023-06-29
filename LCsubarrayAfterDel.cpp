/*class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int previousCount = 0, currentCount = 0, maxCount = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) 
              currentCount++;
            else {
                maxCount = max(maxCount, currentCount + previousCount);
                previousCount = currentCount;
                currentCount = 0;
            }
        }
        maxCount = max(maxCount, currentCount + previousCount);
        return maxCount == nums.size() ? maxCount - 1 : maxCount;
    }
};*/
#include <iostream>

using namespace std;

int main()
{
  int n, k;
  cout << "enter the integer ";
  cin >> n;
  cin >> k;
  int m = 0;
  int arr[m];
  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      m++;
      arr[m] = i;
    }
  }
  for(int i= 1;i<=m;i++){
    cout<<arr[i]<<",";
  }
 
  cout << arr[k];
  return 0;
}