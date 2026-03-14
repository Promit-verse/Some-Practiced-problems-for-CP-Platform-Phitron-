#include <bits/stdc++.h>
using namespace std;
  int main () 
{
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];

    }
    sort(a, a+n);
    for(int i=0; i<q; i++){
        int x;
        cin>>x;
        int flag=0;
        int l=0, h=n-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(a[mid]==x){
                flag=1;
                break;
            }
            else if(a[mid]>x){
                h=mid-1;
            }
            else if(a[mid]<x){
                l=mid+1;
            }
        }
        if(flag){
            cout<<"found"<<endl;
        }
        else {
            cout<<"not found"<<endl;
        }
    }
   
     return 0;
  }