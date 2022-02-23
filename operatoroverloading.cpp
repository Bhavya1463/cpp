//demo code for operator overloading

#include<iostream>
using namespace std;

class Complex
{
    int real,img;

    public:
    
    Complex()
    {
        //default constructor
        real=0;
        img=0;
    }

    //parameterized constructor

    Complex(int x,int y)
    {
        real=x;
        img=y;
    }

    //display function

    void display()
    {
        cout<<"real= "<<real<<" and "<<"img= "<<img<<endl;
    }

    //overload the "+" operator

    Complex operator + (Complex ob){
        Complex temp;

        temp.real = real + ob.real;
        temp.img = img + ob.img;

        return temp;

    }

        //overload the "--" operator

    Complex operator -- (){
        Complex temp;

        temp.real = --real;
        temp.img = --img;

        return temp;

    }


    Complex operator -- (int){
        Complex temp;

        temp.real = real--;
        temp.img = img--;

        return temp;

    }


        //overload the "++" operator

    Complex operator ++ (){
        
        Complex temp;
        
        temp.real = ++real;
        temp.img = ++img;

        return temp;

    }


    Complex operator ++ (int){
        Complex temp;

        temp.real = real++;
        temp.img = img++;

        return temp;

    }

//overload the "-" operator
    Complex operator - (){
        Complex temp;
        temp.real=-real;
        temp.img=-img;

        return temp;

    }
};

int main()
{
    Complex c1(1,1),c2(5,5);
    c1.display();
    cout<<"\n";
    c2.display();
    cout<<"\n";

    Complex c3,c4;
    c3 = c1 + c2;
    c3=c1.operator +(c2);
    c3.display();
    cout<<"\n";

    cout<<"------"<<endl;
    c4=-c3;
    c4.display();
    cout<<"\n";

    cout<<"-- operator "<<endl;
    Complex c5,c6,c7,c8;
    c5=--c3;
    c5.display();
    cout<<"\n";

    cout<<"++ operator"<<endl;
    c6=++c3;
    c6.display();
    cout<<"\n";
    
    cout<<"post increment"<<endl;
    c3++;
    c3.display();
    cout<<"\n";

    cout<<"post decrement"<<endl;
    c3--;
    c3.display();
    cout<<"\n";

    return 0;

}