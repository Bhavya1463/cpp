#include<iostream>
#include<ctime>
using namespace std;

class timedate
{
    private:
    int hour,minute,second;

    public:

    void setInput(int a,int b,int c)
    {
        hour=a;
        minute=b;
        second=c;
    }


    int setTime(){
        time_t now=time(0);
        char *dt=ctime(&now);
        getTime(now);
    }
    int getTime(time_t now)
    {
        int hh,mi,sec;
        cout<<"the current time is "<<now<<endl;
        hour=hh;
        minute=mi;
        second=sec;
        return 0;
    }
    int Sleeptime(timedate obj1,timedate obj2)
    {
        return obj1.hour-obj2.hour;
        return obj1.minute-obj2.minute;
        return obj1.second-obj2.second;

    }


};

class datetime
{
    public:

    int setDate()
    {

    }
    int getDate()
    {

    }
    int setDob()
    {

    }
    int findAge()
    {

    }
};

int main()
{
    timedate obj1;
    timedate obj2;
    timedate obj3;

    
    obj1.setTime();
    obj2.setInput(10,29,30);

    cout<<"The difference is "<<obj2.Sleeptime(obj1,obj2);
    return 0;

}