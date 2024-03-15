// Variable size array
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int getSum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;

    // variable size array
    int *arr = new int[n];

    //taking input in an array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<<"The sum is: "<<getSum(arr, n);

    return 0;
}