#include <iostream>
using namespace std;

class Stack
{
private:
    int *Arr;
    int iSize;
    int iTop;
    
public:
    Stack(int);
    ~Stack();
    void Push(int);
    int Pop();
    void Display();
};

Stack :: Stack(int iNo)
{
    iSize = iNo;
    iTop = -1;
    Arr = new int[iSize];
}

Stack :: ~Stack()
{
    delete []Arr;
}

void Stack::Push(int iNo)
{
        if(iTop == iSize -1)
        {
            cout<<"Stack is full\n";
        }
        else
        {
            iTop++;
            Arr[iTop] = iNo;
        }
}

int Stack:: Pop()
{
    if(iTop == -1)
    {
        cout<<"Stack is empty\n";
        return -1;
    }
    else
    {
        int iNo = Arr[iTop];
        iTop--;
        return iNo;
    }
}

void Stack::Display()
{
        if(iTop == -1)
        {
            cout<<"Stack is empty\n";
        }
        else
        {
            for(int i = 0; i <= iTop; i++)
            {
                cout<<Arr[i]<<"\t";
            }
            cout<<"\n";
        }
}

int main()
{
    int iNo = 0, iRet = 0;
    cout<<"Enter the size of array\n";
    cin>>iNo;
    
    Stack obj(iNo);
    obj.Push(11);
    obj.Push(21);
    obj.Push(51);
    
    obj.Display();
    
    iRet = obj.Pop();
    cout<<"Poped element is : "<<iRet<<"\n";
    iRet = obj.Pop();
    cout<<"Poped element is : "<<iRet<<"\n";
    
    return 0;
}
