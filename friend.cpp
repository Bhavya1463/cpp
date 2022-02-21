#include<iostream>
using namespace std;

class A{
    private:
    int numA;
    
    public:
    friend void add(A obj);
    void setA()
    {
        cout<<"Inside A";
    }
};

class B{
    private:
    int numB;
    
    public:
    friend void add(B obj);
    void setB()
    {
        cout<<"Inside B";
    }
};

void add(B obj)
{
    cout<<"Inside add function"<<endl;
    //obj.numA=10;
    obj.numB=20;
}


int main()
{
    B obj;
    obj.setB();
    add(obj);

    return 0;
}