/*
int arr[10]; 40 byte(4*10)
arr: name of array, also is the address of first block of array

--> Also can use '&' operator ,say &arr[0]
--> arr[i] = *(arr+i)  **IMPORTANT** i[arr] = *(i    +arr) is also true.
    BENEFIT:
    You can pass the part of array in the funtion.

Differences between Pointer and Array:
--> Size of array = size*4 byte but pointer is always 8 byte

--> The content of symbol table cannot be changed.
*/

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //int arr[10]={44,56,12,45,89,12,45,22,63,85};

/*
    cout<<"Address of first memory block is: "<<arr<<endl;
    cout<<"Value of first memory block is: "<<arr[0]<<endl;
    cout<<"Address of first memory block (using &) is: "<<&arr[0]<<endl;
    cout<<"Value of *arr {First element of array}: "<<*arr<<endl;
    cout<<"Value of *arr + 1 {First Element + 1}: "<<*arr + 1<<endl;
    cout<<"Value of *(arr + 1) {First Element + 1 i.e, Second Element}: "<<*(arr + 1)<<endl;
    cout<<"!IMP arr[i] = i[arr]: "<<2[arr]<<endl;
*/    
/*
    //SIZE OF ARR & POINTER
    int temp[10];
    cout<<"Size of Array: "<<sizeof(temp)<<endl;
    cout<<"size of *temp: "<<sizeof(*temp)<<endl;
    cout<<"size of &temp: "<<sizeof(&temp)<<endl;

    int *ptr = &temp[0];
    cout<<"Size of pointer: "<<sizeof(ptr)<<endl;
    cout<<"Size of value present at pointer: "<<sizeof(*ptr)<<endl;
    cout<<"Size of &ptr: "<<sizeof(&ptr)<<endl;
*/  

/*
    int a[20] = {1,2,3,5};
    cout<<&a[0]<<endl; //address of block at 0th index
    cout<<&a<<endl;
    cout<<a<<endl; 

    int *p = &a[0];
    cout<< p <<endl;
    cout<< *p <<endl; //1
    cout<< &p <<endl; //address of p block
*/

/*
    
    int arr[10];

    //arr = arr + 1;  //ERROR: address of array is not reassignable

    int *ptr = &arr[0];
    cout<<ptr<<endl; //ptr is the address of arr and *ptr is the value of arr[0];
    ptr = ptr + 1;
    cout<<ptr<<endl;

*/
/*

    //POINTERS IN CHARACTER ARRAYS
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde"; //size 6 for null character

    cout<<arr<<endl; //Prints the address of arr

    cout<<ch<<endl; //Prints the content of ch
    
    //🔴 NOTE: It means the 'cout' function for int array and ch array are diffrently implemented.

    //attention here !!!
    char *c = &ch[0];  //RISKY 🌶️
    cout<<c<<endl; //Prints the entire string until it gets a null char


    cout<<"<--- Single Char--->"<<endl;
    char temp = 'z';
    char *p = &temp;
    cout<<p<<endl; //Prints until it gets a null char
*/
    
    return 0;
}