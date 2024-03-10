/*
CREATION:
int value = 5;
int* ptr = &value;

Why we write int* ?
 --> to know the data type
 --> and, how many bytes to consider

NOTE: we can put * near int or ptr, dosen't matter.



DOUBLE POINTER:
//Creation:
int i=5;
int* ptr = &i;
int** ptr2 = &ptr;


*/


#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void update (int **p){
    /* p=p+1; 
    //kuch change hoga?? NO CHANGE
    
    *p=*p+1; 
    //kuch change hoga?? p will CHNAGE */

    **p=**p+1; 
    //kuch change hoga?? i will CHANGE

}

int main()
{
    int i = 5;
    int* p = &i;
    int** p1 = &p;

/* 
    cout<<"Value of i: "<<i<<endl;
    cout<<"Value of *p: "<<*p<<endl; //Same as value of i
    cout <<"Value og **p1: "<<**p1<<endl;
    
    cout<<endl<<"Value of &i: "<<&i<<endl;
    cout<<"Value of p: "<<p<<endl;
    cout<<"Value of *p1: "<<*p1<<endl; //Same as value of p

    cout<<endl<<"Value of &p: "<<&p<<endl;
    cout<<"Value of p1: "<<p1<<endl;  
 */

    cout<<"before "<< i <<endl;
    cout<<"before "<< p <<endl;
    cout<<"before "<< p1 <<endl;
    update(p1);
    cout<<endl<<"after "<< i <<endl;
    cout<<"after "<< p <<endl;
    cout<<"after "<< p1 <<endl;
    

    return 0;
}