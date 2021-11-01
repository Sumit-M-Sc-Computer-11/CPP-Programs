#include<iostream>
using namespace std;

template <class T>
T Max(T x, T y)
{
    if(x > y)
    { return x; }
    else
    { return y; }
}

int main()
{
    int i = 10, j = 10, iret;
    double a = 3.10, b = 6.10, dret;
    char ch1 = 'G', ch2 = 'A', cret;
    
    iret = Max(i,j);
    cout<<"Max is : "<<iret<<"\n";
    
    dret = Max(a,b);
    cout<<"Max is : "<<dret<<"\n";
    
    cret = Max(ch1, ch2);
    cout<<"Max is : "<<cret<<"\n";
    
    return 0;
}
