#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[] , int n , int key)
{
        int s = 0 ; 
        int e = n ;
        int mid ; 

        while(s<=e)
       {
           mid = (s+e)/2 ;
           cout<<mid<<endl;
          if(arr[mid]==key)
          {
                return mid ;
          }
          else if(arr[mid]<key)
          {
                s = mid+1 ;
          }
          else 
          {
                e = mid-1 ;
          }
       }
       return -1 ;
}
int main()
{
int t ;
cin>>t;
while(t--)
{
        int n ;
        cin>>n ; 
        int arr[n] ; 
        for(auto i =  0 ;i<n ;i++)
        {
                cin>>arr[i] ;
        }
        int key ; 
        cin>>key ;
        cout<<binarysearch(arr,n,key) ;
}

        
        return 0 ;
}
