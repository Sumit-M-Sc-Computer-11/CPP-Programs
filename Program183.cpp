#include<iostream>
using namespace std;

template <class T>
T Maximum(T Arr[], int iSize)
{
    T iMax = Arr[0];
    for(int i = 1; i < iSize; i++)
    {
        if(Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
    }
    return iMax;
}

int main()
{
    float *arr = NULL;
    int iSize;
    float iRet;
    
    cout<<"Enter number of elements\n";
    cin>>iSize;
    
    arr = new float[iSize];
    
    printf("Enter the values\n");
    for(int i = 0; i < iSize; i++)
    {
        cin>>arr[i];
    }
    
    iRet = Maximum(arr,iSize);
    cout<<"Largest number is : "<<iRet<<"\n";
    
    delete []arr;
    
    return 0;
}
