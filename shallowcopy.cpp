//code to demo shallow copy in defalut constructot

#include<iostream>
using namespace std;

class demo{
    int data1,data2,*p;

    public:
    demo()
    {
        //default constructor
        p=new int;

    }

    void setvalue(int i,int j,int k)
    {
        data1=i;
        data2=j;
        *p=k;
    }

    void display()
    {
        cout<<"Value for data 1"<<data1<<endl;
        cout<<"Value for data 2"<<data2<<endl;
        cout<<"Value for p"<<*p<<endl;

    }
};

int main()
{
    demo d1;
    d1.setvalue(10,20,30);
    d1.display();


    //call compilers copy constructor
    demo d2,d3;
    d3=d1;

    d3.display();
    
    //update the values
    d1.setvalue(100,200,300);
    d1.display();
    d3.display();

    
    return 0;
}