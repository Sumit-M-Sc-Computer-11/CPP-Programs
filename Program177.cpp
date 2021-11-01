#include<iostream>
using namespace std;

// Specific Function
void Swap(int &iNo1, int &iNo2)
{
    int temp;
    temp = iNo1;
    iNo1 = iNo2;
    iNo2 = temp;
}

template <class T>      // Template header
void SwapX(T &iNo1, T &iNo2)
{
    T temp;
    temp = iNo1;
    iNo1 = iNo2;
    iNo2 = temp;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    cout<<"Enter first number\n";
    cin>>iValue1;
    
    cout<<"Enter second number\n";
    cin>>iValue2;
    SwapX(iValue1, iValue2); // Swap(iVaiue1,iValue2)
    cout<<"After swap value1 is : "<<iValue1<<"\n";
    cout<<"After swap value2 is : "<<iValue2<<"\n";
    return 0;
}
