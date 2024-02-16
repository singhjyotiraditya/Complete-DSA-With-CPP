//adabptable algo
//stable algo
//SC=o(1)
//TC= O(n^2)  Best Case=O(n)

/*
Insertion Sort: Insertion sort is a sorting algorithm that places an unsorted element at its suitable place in each iteration.

Insertion sort works similarly as we sort cards in our hand in a card game.

We assume that the first card is already sorted then, we select an unsorted card. If the unsorted card is greater than the card in hand, it is placed on the right otherwise, to the left. In the same way, other unsorted cards are taken and put in their right place.

A similar approach is used by insertion sort.
*/




#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[7]={1,2,4,10,8,7,11};
    int n=7;

    for (int i=1; i<n; i++){
        int temp = arr[i];
        int j=i-1;
        while(j>=0){
            if (arr[j]>arr[i]){
                arr[j+1]=arr[j];
                j--;
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }

    for (int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
   return 0;
}