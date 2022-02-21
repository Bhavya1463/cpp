#include<iostream>
#include<ctime>
#include <unistd.h>



using namespace std;

class timedate
{
    public:
    int hour,minute,second;

    void setTime()
    {
        time_t tt;
        struct tm *ti;
        time (&tt);
        ti=localtime(&tt);
        cout<<asctime(ti)<<endl;
       /* cout<<"Hour: "<<(5+ti->tm_hour)%24<<endl;
        cout<<"Minute: "<<30+ti->tm_min<<endl;
        cout<<"Seconds: "<<ti->tm_sec<<endl;*/

        hour=(5+ti->tm_hour)%24;
        minute=30+ti->tm_min;
        second=ti->tm_sec;
    }

    timedate getTime()
    {
        timedate temp;
        temp.hour=hour;
        temp.minute=minute;
        temp.second=second;

        return temp;

    }


    timedate sleeptime(timedate naptime,timedate wakeup)
    {
        timedate temp;
        temp.hour=wakeup.hour - naptime.hour;
        temp.minute=wakeup.minute - naptime.minute;
        temp.second=wakeup.second - naptime.second;

        return temp;
    }




};

class datetime
{
    public:
    int day,month,year;

    int setDate()
    {
   time_t now = time(0);
   tm *ltm = localtime(&now);

   cout << "Year:" << 1900 + ltm->tm_year<<endl;
   cout << "Month: "<< 1 + ltm->tm_mon<< endl;
   cout << "Day: "<< ltm->tm_mday << endl;

   day=1900 + ltm->tm_year;
   month=1 + ltm->tm_mon;
   year=ltm->tm_mday;

    }
    datetime getDate()
    {
        datetime temp1;
        temp1.day=day;
        temp1.month=month;
        temp1.year=year;

        return temp1;
    }
    datetime setDob(int a,int b,int c)
    {
        datetime temp;
        temp.day=a;
        temp.month=b;
        temp.year=c;

        return temp;

    }
    datetime findAge(datetime dob)
    {   
        datetime temp1,temp2=getDate();
        temp1.day=temp2.day-dob.day;
        temp1.month=temp2.month-dob.month;
        temp1.day=temp2.year-dob.year;

        return temp1;

    }
};

int main()
{
   /* timedate t1,t2,t3,t4;
    timedate timeatsleep,timeatwake;
    t1.setTime();
    t3=t1.getTime();
    cout<<"values returned from getTime\n";
    cout<<"Hour: "<<t3.hour<<"Minute: "<<t3.minute<<"Seconds: "<<t3.second<<endl;



    cout<<"calculating sleep time";
    t1.setTime();
    timeatsleep=t1.getTime();

    sleep(5);

    t1.setTime();
    timeatwake=t1.getTime();
    return 0;

    t4=t1.sleeptime(timeatsleep,timeatwake);
    cout<<"time spend sleep";
    cout<<"Hour: "<<t4.hour<<"Minute: "<<t4.minute<<"Seconds: "<<t4.second<<endl;
*/

    //class datetime

    datetime d1,d2,d3;
    d1.setDate();
    d2=d1.getDate();
    cout<<"values returned from getDate"<<endl;
    cout<<" Day: "<<d2.day<<"  Month: "<<d2.month<<"  Year: "<<d2.year<<endl;

    cout<<"Calculating age";
    datetime dob;
    dob.day=29;
    dob.month=11;
    dob.year=2001;

    datetime d4=d1.setDob(dob.day,dob.month,dob.year);
    datetime age= d1.findAge(d4);
    cout<<"Your age is "<<age.year<<"years"<<age.month<<"months"<<age.day<<"days"<<endl;

    return 0;


}