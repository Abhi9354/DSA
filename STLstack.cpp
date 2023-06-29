#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("abhishek");
    s.push("kumar");
    s.push("gupta");
    cout<<"the top element is "<<s.top()<<endl;
    s.pop();
    cout<<"the top element is "<<s.top()<<endl;
    cout<<"the size of stack is "<<s.size()<<endl;
    cout<<"The size is empty or not "<<s.empty()<<endl;
}