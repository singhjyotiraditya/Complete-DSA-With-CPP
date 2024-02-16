//data is stored in form of key value pair
//key must be unique
//Many to one relation: Two key can point to same value but vice-versa is not correct
//Returned value is sorted

//insert, erase, find count - O(logn)
//unordered map is implemented using hash set so in case of searching O(1);

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    map<int, string> m;

    m[1]="Jyotiraditya";
    m[2]="Singh";
    m[13]="Chad";

    m.insert({5,"bheem"});
    

    cout<<"before erase"<<endl;
    for (auto i: m ){
        cout<<i.first<<" : "<<i.second<<endl;
    }
  
    cout<<"finding 13--> "<<m.count(13)<<endl; //13 present or not

    m.erase(13);
    cout<<"after erase"<<endl;
    for (auto i: m ){
        cout<<i.first<<" : "<<i.second<<endl;
    }
    

    auto it = m.find(5);
    for (auto i=it; i!=m.end(); i++){
        cout<<(*i).first<<" ";
    }cout<<endl;



    return 0;
}