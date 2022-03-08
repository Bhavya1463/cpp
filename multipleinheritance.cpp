#include<iostream>
using namespace std;

class liquid
{
    public:
    int liq = 4;
};


class fuel
{
    public:
    int fuel=5;

};

class petrol : public liquid,public fuel{
    public:
    int petrol=6;
};

int main()
{
    liquid l1;
    fuel f1;
    petrol p1;



    cout<<"Liquid: "<<l1.liq<<endl;
    cout<<"Fuel: "<<f1.fuel<<endl;
    cout<<"Petrol: "<<p1.petrol<<endl;
    cout<<"Liquid(derived): "<<p1.liq<<endl;
    cout<<"Fuel(derived): "<<p1.fuel<<endl;


    //cout<<"Tail(derived): "<<a1.tail<<endl;


    return 0;
}
