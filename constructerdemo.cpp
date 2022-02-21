//DEmo code for constructor

#include<iostream>
using namespace std;


class demoCont
{
    public:
    int number;
    void setvalue()
    {
        cout<<"Inside the setvalue function"<<endl;
        number =100;
        cout<<"the number is "<<number<<endl;
    }

    demoCont()
    {
        cout<<"inside the constructor"<<endl;
    }//end of default constructor

    demoCont(int num)
    {
        cout<<"Inside parameterized constructor"<<endl;
        number=num;
        cout<<"the number iss "<<number<<endl;
    }

} ;

int main()
{
    demoCont d1,d2(50);
    d1.setvalue();
    return 0;
}
