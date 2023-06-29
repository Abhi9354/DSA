int findUnique(int *arr, int size)
{
    int ans = 0;
    for ( int i = 0 ; i < size ; i++ ){
        ans = ans ^ arr[i];
    }
return ans;
}
/*for this excersize array of  { 2,2,3,3,4,4,,7,7,9}
output is 9 */