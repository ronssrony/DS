#include<iostream>
#define n 50 
using namespace std;

class stack {
    int* arr ;
    int  top ; 
    public:
    stack()
    {
        arr= new int[n] ;
         top = -1 ;
    }
    void push(int x)
    {
        if(top == n-1)
        {
            cout<<"overflow"<<endl;
            return ; 
        }
        top++ ;
        arr[top] = x ;
    }
    void pop ()
    {
        if(top == -1)
        {
            cout<<"NO element to pop"<<endl;
            return  ;
        }
        top-- ;
    }
    int Top()
      {
        if(top==-1)
        {
            cout<<"NO element in the stack"<<endl;
            return -1 ;
        }
        return arr[top];
      }
      bool empty ()
      {
        return top == -1 ;
      }

};
int main()
{ 
   
    stack st;
    int r ; 
    cin>>r ; 
    int t ; 

    for(int i = 0 ; i<r ; i++)
    {  
        cin>>t ;
        st.push(t);
       
    }
    

    return 0 ;
}
