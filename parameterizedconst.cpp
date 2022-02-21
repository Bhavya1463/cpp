#include<iostream>
using namespace std;

class Distance
{
    public:
    int feet,inch;

    void setvalue()
    {
        cout<<"Inside the set function"<<endl;
        feet=5;
        inch=8;
        cout<<"Feet="<<feet<<endl;
        cout<<"Inch="<<inch<<endl;

    }

    Distance()
    {
        cout<<"Inside the default constructor"<<endl;
    }//end of default constructor

    Distance(int feet,int inch)
    {
        cout<<"Inside the parameterized Constructor"<<endl;
        feet=feet;
        inch=inch;
        cout<<"Feet="<<feet<<endl;
        cout<<"Inch="<<inch<<endl;

    }
};

int main()
{
    Distance d1,d2(5,9);
    d1.setvalue();
    return 0;
}