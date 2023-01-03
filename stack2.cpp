#include <iostream>
#include <cstdlib>
using namespace std;

int size,stack[100],top=-1,ele;

void disp_stack(){
    if (top==-1)
    cout<<"Stack is empty"<<endl;

    else
    {
        int i;
        cout<<"Stack:- "<<" ";
       
        for (i=top;i>=0;i--)
        cout<<stack[i]<<" ";

        cout<<endl;

    }
    
}

void push(){
     int ele;
     cout<<"Enter the element you want to push: ";
        cin>>ele;

    if (top==size-1)
    cout<<"Stack is in Overflow State"<<endl;

    else{
        top++;
        stack[top]=ele;
    
        }
    }
    
void pop()
{
    if (top==-1){
        cout<<"Stack is in Underflow state"<<endl;
    }
    
    else{
        int del_ele;
        del_ele=stack[top];
        top--;
    }
}

int main()
{
    int ch;
   cout<<"Enter size of stack: ";
   cin>>size;

   cout<<"1)Push\n2)Pop\n3)Display\n4)Exit\n";
   while(1)
   {
    cout<<"Enter your choice: ";
    cin>>ch;
    
    switch (ch)
   {
    case 1:
    push();
    break;

    case 2:
    pop();
    break;

    case 3:
    disp_stack();
    break;

    case 4:
    exit(1);

   default:
    cout<<"Error!"<<endl;
   }

   }

    return 0;
}