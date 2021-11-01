#include<iostream>
using namespace std;

void Swap(int &iNo1, int &iNo2)   // Call by reference
{
    int temp;
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
    Swap(iValue1, iValue2); // Swap(iVaiue1,iValue2)
    cout<<"After swap value1 is : "<<iValue1<<"\n";
    cout<<"After swap value2 is : "<<iValue2<<"\n";
    return 0;
}
