//a->b->c->d    c->d  b->d

#include<iostream>
using namespace std;

class A
{
    public:
    int a=10;

};

class B: public A
{
    public:
    int b=20;
};

class C: public B
{
    public:
    int c=10;
};

class D: public C,public B
{
    public:
    int d=10;
};

int main()
{
    A a1;
    B b1;
    C c1;
    D d1;

    cout<<a1.a;
    cout<<b1.b;
    cout<<c1.c;
    cout<<d1.d;
    cout<<b1.a;
    cout<<c1.b;
    cout<<d1.b;
    cout<<d1.c;
    cout<<d1.a;


}