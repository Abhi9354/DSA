#include <bits/stdc++.h>
#include <queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("abhishek");
    q.push("kumar");
    q.push("gupta");
    cout<<"the top of the queue is "<<q.front()<<endl;
     cout<<"the back of the queue is "<<q.back()<<endl;
     q.pop();
       cout<<"the top of the queue is "<<q.front()<<endl;
     cout<<"the back of the queue is "<<q.back()<<endl;
     cout<<"the size of the queue "<<q.size()<<endl;
}