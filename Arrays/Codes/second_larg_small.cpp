#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a[6]={1,3,8,4,6,8};
   int n=6;
   int second_max;
   int max=INT_MIN;
    for (int i=0; i<n; i++){
        if (a[i]>max){
           second_max=max;
           max=a[i];
           
        }
        else if (a[i]>second_max && a[i]!=max){
            second_max=a[i];
        }
    }

    int second_min=INT_MAX;
   int min=INT_MAX;
    for (int i=0; i<n; i++){
        if (a[i]<min){
           second_min=min;
           min=a[i];
           
        }
        else if (a[i]<second_min && a[i]!=second_min){
            second_min=a[i];
        }
    }

    cout<<max<<endl;
    cout<<second_max<<endl;

    cout<<min<<endl;
    cout<<second_min<<endl;
   return 0;
}