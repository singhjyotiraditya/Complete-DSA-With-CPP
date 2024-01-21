#include<iostream>
using namespace std;
int main()
{
 /*   
    int num=5;
    // cout<<"the value of num is "<<num<<endl;

    //address Of operator - & [hexadecimal]  [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F]
    // cout<<"the address of num is "<<&num<<endl;

    //Pointer: stores address [*p->&->num]
    //int *ptr;  //declaring pointer : pointing to some garbage value [Bad]
    int *ptr=&num;
    cout<<ptr<<endl;  //address of num
    cout<<*ptr<<endl; //value of num
    cout<<num<<endl;  //value of num
    cout<<&num<<endl; //address of num
    

    cout<<endl;

    //(*)-dereference operator

    //Pointer should be of same data type as num
    double d= 4.22;
    double *ptr2=&d;
    cout<<ptr2<<endl;  
    cout<<*ptr2<<endl; 
    cout<<d<<endl;  
    cout<<&d<<endl;

    //sizeof(num)=4 
    //sizeof(ptr)=8 for all the data types

    // int *p=0;
    // cout<<*p<<endl; //Segmentation fault: no address exist like 0

    //Redeclaration
    int *p=0;
    p=&num;

*/



/*
    //Increment & Decrement 
    int n=5;
    int *p3=&n;
    int a=*p3;
    
    cout<<"before --> "<<n<<endl;

    a++;
    cout<<n<<" -->No Effect on n"<<endl;

    (*p3)++;
    cout<<n<<" -->Change: n Increment by 1"<<endl;


    //Storing a POINTER
    int *q=p3;
    cout<<p3<<" - "<<q<<endl; //same
    cout<<*p3<<" - "<<*q<<endl; //same
*/

    //imp concept
    int i=3;
    int *t=&i;

    cout<<"*t before "<<*t<<endl; //3
    *t=*t+1;
    cout<<"*t after "<<*t<<endl; //4

    cout<<"t before "<<t<<endl; //0xa5189ffa34
    t=t+1;  //it will go to next address : as the size of integer is 4 so (4 + previous address)
    cout<<"t after "<<t<<endl; //0xa5189ffa38


/*
    TYPES OF POINTER
    NULL POINTER: *p=0; *q=NULL
    DOUBLE POINTER: int *p = &a; int **q = &p; [pointer to a pointer]
    VOID POINTER: void *p; but we can p=&i;
    WILD POINTER: Declared but not initialized int *ptr;
    DANGLING POINTER: Pointer to a lication which is been freed or deleted
    [int * ptr;  //dangling pointer
    {   int ch;
        ptr = & ch;
    }]

*/

 return 0;
}