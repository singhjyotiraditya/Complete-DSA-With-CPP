#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void print(int *p){
    cout<<"Address of value--> "<<p<<endl;
    cout<<"Value of value--> "<<*p<<endl;
}

void update(int *p){
    p=p+1;
    cout<<"inside: "<<p<<endl; //this will not change the value of p outside.

    //*p = *p +1; //This will change the value from 5 to 6
}

int getSum(int arr[], int n){
    

    cout<<endl<<"Size: "<<sizeof(arr)<<endl; //🌶️ This gives value 8, it means the pointer of array is passed in the function and note the array itself, means hear {int arr[] = int *arr};

    int sum=0;
    for (int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}



int main()
{
    //🫤🤣
    cout<<"<--POINTERS IN FUNCTION-->"<<endl;
    
    
    int value =5;
    int *p = &value;
    
    //print(p);

    cout<<"before: "<<p<<endl;
    update(p);
    cout<<"after: "<<p<<endl;
   

    
    int arr[5] = {1,2,3,4,5};
    //cout<<"The sum is: "<<getSum(arr+3, 2)<<endl;

    return 0;
}