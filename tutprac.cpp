#include <iostream>
using namespace std;
class test
{
int code;
static int count; // static variable
public :
void setcode()
{
count=++count;
}
void showcode()
{
std::cout<<"object number" <<code <<"\n";
}
static void displaycount() // static member function
{
std::cout<<"count:" <<count <<"\n";
}
};
int test::count;
int main()
{
test t1,t2;
t1.setcode();
t2.setcode();
test::displaycount(); // accessing static function
test t3;
t3.setcode();
test::displaycount();
t1.showcode();
t2.showcode();
t3.showcode();
return 0;
}