#include <iostream>
using namespace std;

int main(void)
{
    int a[5];

    a[0] = 4;
    cout<<"a = "<<a<<endl;
    cout<<"a[0] = "<<a[0]<<endl;
    cout<<"&a[0] = "<<&a[0]<<endl;
    cout<<"&a = "<<&a<<endl;

    cout<<"&a[2]"<<&a[2]<<endl;
    cout<<"sizeof(a) = "<<sizeof(a)<<endl;
    cout<<"sizeof(int) * 5 = "<<sizeof(int)*5<<endl;
    
    cout<<"\n\n"<<endl;

    a[1] = 7;
    int *p;
    p = &a[1];
    cout<<"p = "<<p<<endl;
    cout<<"*p ="<<*p<<endl;

    return 0;
}