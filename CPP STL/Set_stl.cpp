//implementation using bst
//SET: store only different element, and return in sorted order
//insertion or deletion but no modification

//set is slower than unordered set
//unordered set do not return element in sorted order

//Insert, find, erase and count - O(logn)
//set begin, size, end - O(1)
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    set<int> s;
    
    //Insertion in  set takes O(log(n)) Tc
    s.insert(5);
    s.insert(5);//similar element
    s.insert(5);//similar element
    s.insert(1);
    s.insert(0);
    s.insert(0);//similar ele
    s.insert(6);

    for (auto i: s){
        cout<<i<<" ";
    }

    cout<<endl;

    //s.erase(s.begin()); //earse the first element

    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);  //earse only 2nd element

    cout<<"After deleting s.begin()"<<endl;
    for (auto i: s){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"5 is present or not--> "<<s.count(5)<<endl; //count func to check if the set is empty or not

    // set<int>::iterator itr=s.find(5);
    // cout<<"Value present at itr--> "<<*itr<<endl;

    auto itr = s.find(5);
    cout<<"Value present at itr--> "<<*itr<<endl;
    

    for(auto it = itr; it != s.end(); it++){
    cout << *it << " ";
    }
    cout << endl;


    return 0;
}