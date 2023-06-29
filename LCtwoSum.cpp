#include <bits/stdc++.h>
using namespace std;

int twoSum(int nums[], int target, int n)
{
    int ans = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                cout << "[" << i << "," << j << "]";
                break;
            }
        }
    }
}

int main()
{
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int n = sizeof(nums) / sizeof(nums[0]);
    twoSum(nums, target, n);
    
    return 0;
}