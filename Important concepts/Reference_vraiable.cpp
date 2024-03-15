/*
CONCEPT:
--> same memory but different name
---> "Pass by Reference" and "Pass by Value" are two methods of passing parameters to functions, where pass by reference passes the memory address while pass by value passes a copy of the value.

-->Creating an array with a size known at runtime is considered bad practice because it consumes stack memory, which might cause a program to crash if the array size is too large.
int n;
cin>>n;
int arr[n]; //Bad Practice

Its better to make int arr[10000] => It's better to allocate memory at compile time with a fixed array size.

Why???
Ans: Programs start with a fixed amount of stack memory (limited) and heap memory (more). If a program requires a large stack memory at runtime (e.g., for a large array), it may lead to a stack overflow and crash.

-->Why Ref Var?
Passing parameters by reference allows functions to directly modify the original variables, reducing memory consumption and improving performance.

*/

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

// Pass by Value
void updateCall(int &n)
{
    n++;
}

// Pass by Reference
void updateRef(int &n)
{
    n++;
}

// Return by Reference: Bad Practice
// Returning a reference to a local variable (num) in the function func leads to a dangling reference because num goes out of scope after the function returns. Accessing such a reference can cause undefined behavior, potentially crashing your program.
int &func(int a)
{
    int num = a;
    int &ans = num;
    return ans;
}

// This will also happen in case of pointers
int *fun(int n)
{
    int *ptr = &n;
    return ptr;
}

int main()
{
    int i = 5;
    int &j = i; // Creating a reference variable

    /*
        cout << i << endl;
        i++;
        cout << i << endl;
        j++;
        cout << i << endl;
        cout << j << endl;
    */

    int n = 5;
    cout << "Before " << n << endl;
    updateRef(n);
    cout << "After " << n << endl;
    return 0;
}
