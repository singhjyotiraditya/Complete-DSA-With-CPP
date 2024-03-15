#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
        int n;
        cin>>n;

        int** arr = new int* [n];

        for (int i=0; i<n; i++){
            arr[i] = new int[n];
        }
        //creation done

        //taking input
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                cin>>arr[i][j];
            }
        }

        //printing output
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    */

    int row;
    cout<<"Enter the no of rows"<<endl;
    cin >> row;

    int column;
    cout<<"Enter the no of columns"<<endl;
    cin >> column;

    int **arr = new int *[row];

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[column];
    }
    
    cout<<endl<<"Enter the elements"<<endl;
    for (int i=0; i<row; i++){
        for (int j=0; j<column; j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<endl<<"Printing the Matrix"<<endl;
    for (int i=0; i<row; i++){
        for (int j=0; j<column; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"Releasing Memory"<<endl;
    for (int i = 0; i < row; i++)
    {
        delete [] arr[i];
    }
    delete [] arr;
    cout<<"Memory Released"<<endl;



    return 0;
}