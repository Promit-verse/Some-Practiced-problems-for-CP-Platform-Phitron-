#include <bits/stdc++.h>
using namespace std;
  int main () 
{
   int n;
   cin>>n;
   int a[n][n];
   int sum1=0;
   int sum2=0;
   for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cin>>a[i][j];
    }
   }
   for(int i=0; i<n; i++){
    for(int j=i; j<=i; j++){
        sum1+=a[i][j];
    }
   }
   for(int i=0; i<n; i++){
    for(int j=n-1-i; j==n-1-i; j--){
        sum2+=a[i][j];
    }
   }
cout<<abs(sum1-sum2);
     return 0;
  }