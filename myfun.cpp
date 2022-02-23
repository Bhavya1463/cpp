#include<iostream>
using namespace std;

int myfun(int i);
int myfun(int i,int j);

int main()
{
    cout<<"Calling function"<<myfun(10)<<endl;
    cout<<"Calling function"<<myfun(10,20)<<endl;

    return 0;
}

int myfun(int i)
{
    return i;
}

int myfun(int i,int j)
{
    return i+j;
}
