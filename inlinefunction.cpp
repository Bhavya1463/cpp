#include<iostream>
using namespace std;

inline int cube(int s)
{
    cout<<"Inside th function"<<endl;
    return s*s*s;
};

int main()
{
    cout<<"cube of the value 5 is : "<<cube(5)<<endl;

    return 0;
}