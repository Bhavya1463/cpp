#include<iostream>
using namespace std;

class Student
{
    public:
    int roll_no;
    char name;
};

class Test
{
    public:
    float marks[5];
};

class Result : public Student,public Test
{
    public:
    float totalmarks=0;
    float per;

    void setinput()
    {
            cout<<"Roll No: ";
            cin>>roll_no;
            cout<<"Name of student: ";
            cin>>name;
    }

    void setmarks()
    {
        fflush(0);
        for(int i=1;i<=5;i++)
        {
            cout<<"Enter marks for subject: ";
            cin>>marks[i];
        }
    }


    void total()
    {
        for(int i=0;i<5;i++)
        {
            totalmarks=totalmarks + marks[i];
        }
        cout<<"Total Marks: "<<totalmarks;
    }

    void percentage()
    {
        per=(totalmarks/500)*100;
        cout<<"Percentage: "<<per;
        cout<<"\n";
    }
};

int main()
{
    Result r1;
    r1.setinput();
    r1.setmarks();
    r1.total();
    r1.percentage();

    return 0;
}
