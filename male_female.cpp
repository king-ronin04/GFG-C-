#include<iostream>
using namespace std;
int main()
{
    int age;
    char gen;
    cout<<"Enter Age: ";
    cin>>age;
    cout<<"Enter Gender(M/F): ";
    cin>>gen;

    if(gen=='M'){
        cout<<"Male ";
        if(age<18)
            cout<<"Kid";
        else
            cout<<"Adult";
    } else if(gen =='F'){
        cout<<"Female ";
         if(age<18)
            cout<<"Kid";
        else
            cout<<"Adult";
    } else {
        cout<<"Wrong Input";
    }

    return 0;
}