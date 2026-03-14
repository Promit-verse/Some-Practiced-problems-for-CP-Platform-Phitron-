#include <bits/stdc++.h>
using namespace std;

int main() {
   long long int a, b, c,d;
   cin>>a>>b>>c>>d;
  
   if(c>=a &&  c<b && b<=d){
      cout<<b<<" "<<c;

   }
   else {
      cout<<-1;
   }
   



    return 0;
}
