#include <iostream>
#include<math.h>

using namespace std;

int main()
{
  int num, orignum, remainder;
  cout << "Enter decimal number : ";
  cin >> num;
 
  
int ans = 0;
int i= 0;
  while (num!= 0)
  {
    
    remainder = num % 2;
    ans = remainder + ans * pow(10,i);

    num=num/2;
   
    i++;
    
  }
  cout<<ans;

  return 0;
}