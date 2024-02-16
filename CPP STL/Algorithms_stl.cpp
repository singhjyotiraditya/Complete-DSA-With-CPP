#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;
int main()
{
  vector<int> v;

  v.push_back(1);
  v.push_back(3);
  v.push_back(6);
  v.push_back(7);

  cout<<"finding 6 using bs--> "<<binary_search(v.begin(), v.end(),6)<<endl;

  cout<<"lower bound--> "<<lower_bound(v.begin(), v.end(),6)-v.begin()<<endl; // just less than or equal
  cout<<"upper bound--> "<<upper_bound(v.begin(), v.end(),6)-v.begin()<<endl; //just greater
   
  int a=3;
  int b=5;

  cout<<"max --->"<<max(a,b)<<endl;

  cout<<"min -->"<<min(a,b)<<endl;

  swap(a,b);
  cout<<"a -->"<<a<<endl; 
  

  //Reversing a String
  string s="abcd";
  reverse(s.begin(), s.end());
  cout<<"String s -->"<<s<<endl;
  
  //Rotating a Vector
  cout<<"Rotated -->";
  rotate(v.begin(), v.begin()+1, v.end());
  for (int i:v){
    cout<<i<<" ";
  }

  cout<<endl;

  //sorting a vector : This is based in introsort [quick sort+ heap sort + insertion sort]
  cout<<"Sorted -->";
  sort(v.begin(), v.end());
  for (int i:v){
    cout<<i<<" ";
  }



  return 0;
}