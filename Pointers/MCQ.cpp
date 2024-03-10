/* CONCEPT:

   -->arr, &arr, &arr[0] ; all gives same result

   --> int *ptr = arr++; this gives error because we can't update symbol table (arr = arr+1;)

   --> In a char array, if we try to cout using the pointer at 0 index, it will print the whole char array until it get null.

   --> char *p = str;  Here str[0]=p[0]=b;
*/

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* Que1:
    int first = 8;
    int second = 18;
    int *ptr = &second;
    *ptr = 9;
    cout<<first<<" "<<second; */

    /* Que 2:
    int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout<<first<<endl; */

    /* //Que3:
    int first =8;
    int *p = &first;
    cout<<(*p)++<<" ";
    cout<<first<<endl; */

    /* //Que4: Segmentation Fault
    int *p= 0; //NULL POINTER
    int first = 110;
    *p = first;
    cout<<*p<<endl; */

    /* //Que5:
    int first = 8;
    int second = 11;
    int *third = &second;
    first = *third;
    *third = *third +2;
    cout<<first<<" "<<second; */

    /* //Que6:
    float f = 12.5;
    float p= 21.5;
    float* ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout<< *ptr<< " "<<f<<" "<<p<<endl; */

    return 0;
}