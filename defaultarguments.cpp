#include<iostream>
using namespace std;

int vol(int x,int y=2, int z=10)
{
    return(x*y*z);
}


int main()
{
    cout<<"Vol is(5): "<<vol(5)<<endl;
    cout<<"Vol is(5,5): "<<vol(5,5)<<endl;
    cout<<"Vol is(5,5,5): "<<vol(5,5,5)<<endl;

    return 0;

}