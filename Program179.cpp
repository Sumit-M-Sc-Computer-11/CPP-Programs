#include<iostream>
using namespace std;

int Max(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}
int main()
{
    int iValue1 , iValue2, iRet = 0 ;
    
    cout<<"Enter first value\n";
    cin>>iValue1;
    
    cout<<"Enter second value\n";
    cin>>iValue2;
    iRet = Max(iValue1, iValue2);
    cout<<"Maximum is : "<<iRet<<"\n";
    return 0;
}
