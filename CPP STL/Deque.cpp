//Doubly ended queue
//We can insert or delete (push or pop) elements from both the ends;
//dynamic, size can increase
//random access is possible using at()

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout<<i<< " ";
    }
    cout<<endl;

    // d.pop_back(); //Pop from back
    // for(int i:d){
    //     cout<<i<< " ";
    // }

    //d.pop_front(); //Pop from front

    cout<<"Print first index element -->"<<d.at(1)<<endl;
    
    cout<<"front element -->"<<d.front()<<endl;
    cout<<"back element -->"<<d.back()<<endl;

    cout<<"Empty or not  "<<d.empty()<<endl;

    cout<<"before erase "<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1); //size changes but max-size do not
    cout<<"before erase "<<d.size()<<endl;



    return 0;
}