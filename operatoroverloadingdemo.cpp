#include<iostream>
using namespace std;

class Complex{
    int real,img;

    public:
    //default construcotr
    Complex()
    {
        real=0;
        img =0;
    }

    //param const
    Complex(int x,int y)
    {
        real=x;
        img=y;
    }

    //display function()
    void display()
    {
        cout<<"The real part: "<<real <<" and img part: "<<img<<endl;

    }

    //overload the "+" operator

    Complex operator + (Complex ob)
    {
        Complex temp;
        temp.real = real+ob.real;
        temp.img = img +ob.img;

        return temp;
    }
};

int main()
{
    Complex c1(1,1),c2(5,5);
    c2.display();

    //c=a+b
    Complex c3;
    c3=c1+c2;
    c3.display();

    return 0;
}