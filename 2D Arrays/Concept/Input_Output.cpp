#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

// Atleast we have to show the no of columns (4) to pass a 2D array as a parameter to be passed
bool isPresent(int arr[][4], int target, int rows, int columns)
{

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < columns; col++)
        {
            if (target == arr[row][col]){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    // creation of 2D Arr
    int arr[3][4];
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,//11,12};  //row-wise input
    // int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222},{3,33,333,3333}};

    cout<<"Enter Elements"<<endl;
    // Taking Input --> row wise input
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }

    /*
        // Taking Input --> column wise input
        for (int col = 0; col < 4; col++)
        {
            for (int row = 0; row < 3; row++)
            {
                cin >> arr[row][col];
            }
        }
    */

    // Print
    cout<<"Printing the Array"<<endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

/*
    // Linear Search in 2D Arrays
    int target;
    cout<<"Enter the target : ";
    cin>>target;
    if (isPresent(arr, target, 3, 4))
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
*/

    //Row-Wise Sum
    cout<<endl;
    cout<<"Row-Wise Sum"<<endl;
    for (int row = 0; row < 3; row++)
    {
        int sum=0;
        for (int col = 0; col < 4; col++)
        {
            sum=sum+arr[row][col];
        }
        cout <<sum<< " ";
    }

    //Column Wise sum
    cout<<"Column-Wise Sum"<<endl;
    for (int col = 0; col < 4; col++)
    {
        int sum=0;
        for (int row = 0; row < 3; row++)
        {
            sum=sum+arr[row][col];
        }
        cout <<sum<< " ";
    }

    return 0;
}