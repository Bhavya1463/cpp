#include<iostream>
using namespace std;

class demo
{
    public:
    int z=10;

    void display1()
    {
        cout<<"x: "<<x<<"y: "<<y<<"z: "<<z<<endl;

    }
    private:
    int x=20;

    protected:
    int y=30;

};

class derived: public demo
{   
    public:
    void display2()
    {
        cout<<"x: "<<x<<"y: "<<y<<"z: "<<z<<endl;
    }
   // private:
    //int x=50;
};


class derived1: public derived
{   
    public:
    void display3()
    {
        cout<<"x: "<<x<<"y: "<<y<<"z: "<<z<<endl;
    }
    
    
};

int main()
{
    demo d1;
    derived d2;
    derived1 d3;

    d1.display1();
    d2.display2();
    d2.display1();
    d3.display3();
    d3.display2();
    d3.display1();
}