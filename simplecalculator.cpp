#include<iostream>
using namespace std;

class calculator
{
    public:
        int input1;
        int input2;
        void setInput(int a,int b){
            input1=a;
            input2=b;
        }

        int add();
        int sub();


        int mult()
        {
            return input1*input2;
        }

        int div()
        {
            return input1/input2;
        }
};

int calculator::add()
        {
            return input1+input2;
        }

int calculator::sub()
{
    return input1+input2;
}

int main()
{


    int a,b;
    cin>>a;
    cin>>b;
    calculator obj1;
    obj.setInput(a,b);
    cout<<"the inputs are "<<obj.input1<<" "<<obj.input2;
    cout<<"the addition is : "<<obj.add();
    cout<<"the addition is : "<<obj.sub();
    cout<<"the addition is : "<<obj.mult();
    cout<<"the addition is : "<<obj.div();

    return 0;

}
