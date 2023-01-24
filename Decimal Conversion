#include<bits/stdc++.h>
using namespace std;

int binarytodecimal(int n)
{
    int ans = 0 ;
     int x  = 1 ;
     while(n>0)
     {
        int res = n%10 ; 
        ans += res*x ;
        x <<=1 ;
        n = n/10 ;

     }
     return ans ; 
}
int octaltodecimal (int n)
{
    int ans = 0 ; 
    int x = 1 ;
    while(n>0)
    {
        int res = n%10 ; 
        ans += res*x ;
        x *=8  ; 
        n =n/10 ;
    }
    return ans ;
}
int hexatodecimal(string n )
{     
    int ans = 0  ;
    int x =1; 
   for(int i = (n.size())-1 ; i>=0 ; i--)
   {
        if(n[i]>='0' && n[i]<='9')
        {
            ans += (n[i]-'0') * x ; 
        }
        else if (n[i]>='A' && n[i]<='F')
        {
            ans += (n[i]-'A' +10) *x ;
        }
        x *=16 ;

   }
   return ans ;
}
int decimalTobinary(int n)

{
    int ans  = 0 ; 
    int x = 1 ;
    while(x<=n) 
    {
        x *=2 ;
    }
    x /=2;
    while(x)  
    {
        int lastdigit = n / x ;
        n  -= lastdigit*x ;
        x /=2 ;

        ans = ans*10 + lastdigit ;

    }
    return ans ;

}
int decimalTooctal(int n)
{
    int ans = 0 ;
    int x = 1 ;
    while(x<=n)
    {
        x *=8 ;
    }
    x /=8 ;
    while(x)
    {
        int lastdigit = n/x ;
        n  -= lastdigit*x ;
        x /=8 ;
        ans = ans*10  + lastdigit ;
    }
    return ans ;
}
string decimalToHexadecimal(int n)
{
    string ans  ; 
    int x = 1 ; 
    int i = 0 ;
    while(x<=n)
    {
        x *=16 ;
    }
    x /=16 ;
    while(x)
    {
        int lastdigit = n / x ;
        n  -=lastdigit*x ;
        x /=16 ;
        if(lastdigit>=0 && lastdigit<=9)
        {
            ans= ans + to_string(lastdigit);
        }
        else 
        {
           char c = 'A' +lastdigit - 10 ;
           ans.push_back(c) ;
        }
       

    } 
    return ans ;
}
int main()
{
    
    cout<<"Binary To Decimal"<<endl;
    int n ; 
    cin>>n;
    cout<<binarytodecimal(n)<<endl; ;

    cout<<"Octal To Decimal"<<endl;
    int a ; 
    cin>>a ; 
    cout<<octaltodecimal(a)<<endl; ;

    cout<<"Hexadecimal To Decimal"<<endl;
    string b ; 
    cin>>b ;
    cout<<hexatodecimal(b)<<endl; ;
    
    cout<<"decimalTobinary"<<endl;
    int x ; 
    cin>>x ;
    cout<<decimalTobinary(x)<<endl;

    cout<<"decimalTooctal"<<endl;
    int o ; 
    cin>>o ; 
    cout<<decimalTooctal(o)<<endl;

    cout<<"decimalToHexadecimal"<<endl;
    int h ; cin>>h ;
    cout<<decimalToHexadecimal(h)<<endl;

    


    
    return 0 ;
}
