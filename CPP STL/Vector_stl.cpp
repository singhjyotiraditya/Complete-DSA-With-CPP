//Vectors are a kind of Dynamic Array  
//This will create a double sized vector if more elemnts are added than the size 0,1,2,4,8,16

#include<iostream>
#include<bits/stdc++.h> //for all the stl data structure or #include<vector> only for stl array
using namespace std;

int main()
{
    vector<int> a(5,1); //a vector created with size 5 and all elements are 1
    cout<<"Print a -->"<<endl;
    for (int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    vector <int> last(a); //This will add the copy of all the elements of a to last

    vector <int> v; //implementation of vector having size and capacity as zero.
    cout<<"Capacity--> "<<v.capacity()<<endl;  //Size: No of elements in vector //Capacity: Total Memory allocated
    cout<<"Size--> "<<v.size()<<endl; 

    v.push_back(1); //to enter elemnts in vector
    cout<<"Capacity--> "<<v.capacity()<<endl; 
    cout<<"Size--> "<<v.size()<<endl; 

    v.push_back(2); //to enter elemnts in vector
    cout<<"Capacity--> "<<v.capacity()<<endl; 
    cout<<"Size--> "<<v.size()<<endl; 

    v.push_back(3); //to enter elemnts in vector
    cout<<"Capacity--> "<<v.capacity()<<endl; 
    cout<<"Size--> "<<v.size()<<endl; 

    v.push_back(4); //to enter elemnts in vector
    cout<<"Capacity--> "<<v.capacity()<<endl; 
    cout<<"Size--> "<<v.size()<<endl; 

    v.push_back(5); //to enter elemnts in vector
    cout<<"Capacity--> "<<v.capacity()<<endl; 
    cout<<"Size--> "<<v.size()<<endl;

    cout<<"Element at 2nd position --> "<<v.at(2)<<endl;

    cout<<"Front Element --> "<<v.front()<<endl;
    cout<<"Last Element --> "<<v.back()<<endl;

    cout<<"Before Pop -->"<<endl;
    for (int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back(); //deleting an element
    
    cout <<"After Pop  -->"<<endl;
    for (int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Before Clear --> "<<v.size()<<" & "<<v.capacity()<<endl;
    v.clear(); //Size become 0 but not capacity, capacity remains same
    cout<<"After Clear --> "<<v.size()<<" & "<<v.capacity()<<endl;


    return 0;
}