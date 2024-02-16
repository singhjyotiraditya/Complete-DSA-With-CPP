//LIFO

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    stack<string> s;

    s.push("Jyotira");
    s.push("Aditya");
    s.push("Singh");

    cout<<"Top element --> "<<s.top()<<endl;

    s.pop();
    cout<<"Top element after pop --> "<<s.top()<<endl;

    cout<<"Size of stack --> "<<s.size()<<endl;

    cout<<"Empty or not --> "<<s.empty()<<endl;

    return 0;
}