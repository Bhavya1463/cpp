#include<iostream>
using namespace std;

class animal
{
    public:
    int legs = 4;
};


class dog : public animal
{
    public:
    int tail=1;

};

class puppies : public dog{
    public:
    int paws=4;
};

int main()
{
    animal a1;
    dog d1;
    puppies p1;



    cout<<"Legs: "<<a1.legs<<endl;
    cout<<"Tail: "<<d1.tail<<endl;
    cout<<"Legs(derived(dog)): "<<d1.legs<<endl;
    cout<<"Legs(derived(puppies)): "<<p1.legs<<endl;
    cout<<"Tail(derived(puppies)): "<<p1.tail<<endl;
    cout<<"Paws: "<<p1.paws<<endl;

    //cout<<"Tail(derived): "<<a1.tail<<endl;


    return 0;
}
