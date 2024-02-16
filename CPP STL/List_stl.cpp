//Doubly link list
//we cannot directly access my number from the list, firstly we have to traverse till that number to sccess it

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    list<int> l;

    list<int> n(5, 100);
    cout<<"Printing n"<<endl;
    for(int i: n){
        cout<<i<<" ";
    }

    cout<<endl;

    l.push_back(1);
    l.push_front(2);

    for (int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"after erase -->"<<endl;
    for (int i: l){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"size of list "<<l.size()<<endl;
    return 0;
}