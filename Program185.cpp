#include<iostream>
using namespace std;

template <class T>
class Array
{
private:
    T * Arr;
    int iSize;
    
public:
    Array(int no)
    {
        iSize = no;
        Arr = new T[iSize];
    }
    ~Array()
    {
        delete []Arr;
    }
    void Accept()
    {
        cout<<"Enter the values\n";
        for(int i = 0; i <iSize; i++)
        {
            cin>>Arr[i];
        }
    }
    T Maximum()
    {
        T Max = Arr[0];
        for(int i = 0;i < iSize; i++)
        {
            if(Arr[i] > Max)
            {
                Max = Arr[i];
            }
        }
        return Max;
    }
};

int main()
{
    int iRet = 0;
    int iNo = 0;
    cout<<"Enter number of elements\n";
    cin>>iNo;

    Array <int> * obj = new Array<int>(iNo);
    
    obj->Accept();
    iRet = obj->Maximum();
    
    cout<<"Maximum number is : "<<iRet<<"\n";

    delete obj;
    return 0;
}
