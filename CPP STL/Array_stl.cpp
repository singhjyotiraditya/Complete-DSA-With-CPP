#include<iostream>
#include<bits/stdc++.h> //for all the stl data structure or #include<array> only for stl array
using namespace std;
int main()
{
   int basic[3]={1,2,3}; //Basic array

   array<int,4> a={1,2,3,4}; //Implementation of stl array

   int n=a.size(); //size of stl array

   for (int i=0; i<n; i++){
    cout<<a[i]<<endl;
   }

   cout<<"Element at 2nd index --> "<<a.at(2)<<endl;

   cout<<"Array empty or not --> "<<a.empty()<<endl;

   cout<<"Front Element --> "<<a.front()<<endl;
   cout<<"Last Element --> "<<a.back()<<endl;

   return 0;
}