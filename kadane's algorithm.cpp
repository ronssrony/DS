//kadane's algorithm
#include<bits/stdc++.h>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
        int n ; 
        cin>>n; 
        int arr[n] ;
        for(int i =  0 ;i<n ;i++)
        {
                cin>>arr[i] ;
        }
        int currntsum = 0 ;
        int maxsum = INT_MIN;
        for(int i =  0 ;i<n ;i++)
        {
                currntsum +=arr[i] ; 
                if(currntsum<0)
                {
                        currntsum= 0 ;
                }
                maxsum=max(maxsum,currntsum) ;
        }
        cout<<maxsum<<endl;

}
        
        return 0 ;
}
