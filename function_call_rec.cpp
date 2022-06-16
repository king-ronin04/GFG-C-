#include<iostream>
using namespace std;

void fun(int i){
    if(i==0)
    return;
    else{
        cout<<"geeks ";
        fun(i-1);
        cout<<" for geeks";
    }
}

int main()
{
    fun(3);
    return 0;
}