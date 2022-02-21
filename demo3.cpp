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
        int sub(calculator obj1,calculator obj2);


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

int calculator::sub(calculator obj1,calculator obj2)
{
    return obj1.input1-obj2.input1;
}

int main()
{


    calculator obj1;
    calculator obj2;
    obj1.setInput(10,5);
    obj2.setInput(2,3);

    cout<<"the inputs are "<<obj1.input1<<" "<<obj2.input1;
    cout<<"the substraction is : "<<obj1.sub(obj1,obj2);


    return 0;

}
