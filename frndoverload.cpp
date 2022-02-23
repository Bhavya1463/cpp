#include<iostream>
using namespace std;

class Complex
{
    public:
    int real,img;

    Complex()
    {
        real=0;
        img=0;
    }

    Complex(int x,int y)
    {
        real=x;
        img=y;
    }

   void display()
    {
        cout<<"real= "<<real<<" and "<<"img= "<<img<<endl;
    }

    friend Complex operator +(Complex, Complex);
};

Complex operator +(Complex obj1,Complex obj2)
{
    Complex temp;

        temp.real = obj1.real + obj2.real;
        temp.img = obj1.img + obj2.img;

        return temp;
}

int main()
{
    Complex c1(1,1),c2(5,5);
    c1.display();
    c2.display();

    Complex c3;
    c3=c1 + c2;
    c3.display();


    return 0;
}