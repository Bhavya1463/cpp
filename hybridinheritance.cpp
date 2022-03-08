#include<iostream>
using namespace std;

class A
{
    public:
    int a=1;
};

class B: public A
{
    public:
    int b=2;

};

class C: public A
{
    public:
    int c=3;
};

class D : public B,public C
{
    public:
    int d=4;
};

int main()
{
    A a1;
    B b1;
    C c1;
    D d1;

    cout<<a1.a<<endl;
    cout<<b1.b<<endl;
    cout<<c1.c<<endl;
    cout<<d1.d<<endl;
    cout<<b1.a<<endl;
    cout<<c1.a<<endl;
    //cout<<d1.a<<endl;
    cout<<d1.b<<endl;
    cout<<d1.c<<endl;

    return 0;


}