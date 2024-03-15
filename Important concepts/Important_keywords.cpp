#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define PI 3.14 // MACROS

int score = 15; // global variable : But a bad practice

inline int getMax(int &a, int &b)
{
    return (a > b) ? a : b;
} //Inline function

void print(int arr[], int n, int start = 0 ) //int start is a default argument with value 0
{
  for (int i=start; i<n; i++){
    cout<<arr[i]<<" ";
  }
}

int main()
{

    int r = 5;
    // double PI = 3.14;

    double area = PI * r * r;
    // cout<<"Area is "<<area<<endl;

    int a = 3;
    int b = 4;
    int ans = 0;
    ans = getMax(a, b);
    //cout<< ans<<endl;
    
    int arr[5] = {1,2,3,4,5};
    int n=5;
    print(arr, n);
    cout<<endl;
    print(arr, n, 3);

    return 0;
}