//FIFO

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    queue<string> q;  

    q.push("Jyotira");
    q.push("Aditya");
    q.push("Singh");

    cout<<"Size of queue before pop "<<q.size()<<endl;

    cout<<"First Element --> "<<q.front()<<endl;
    cout<<"Last Element --> "<<q.back()<<endl;

    q.pop();
    cout<<"First Element after pop --> "<<q.front()<<endl;
    cout<<"Last Element after pop --> "<<q.back()<<endl;

    cout<<"Size of queue after pop "<<q.size()<<endl;

    //same empty

    return 0;
}