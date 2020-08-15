#include <iostream>
using namespace std;

int f(int x, int y)
{
    return 2*x+y;
}

int main(void)
{
    cout<<"f(x,y) = 2x+y"<<endl;
    cout<<"f(1,2) = "<<f(1,2)<<endl;
    cout<<"f(128, 143) = "<<f(128, 143)<<endl;
    return 0;
}