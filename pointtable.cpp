#include <bits/stdc++.h>
using namespace std;
  int main () 
{
 int T;
 cin>>T;
for (int i=1; i<=T; i++) {
 int a, b, c;
cin>>a>>b>>c;
    if((a==6 && b==4 && c==1) || (a==6 && b==1 && c==4) ||(a==4 && b==6 && c==1) ||(a==1 && b==6 && c==4) ||(a==4 && b==1 && c==6) ||
            (a==1 && b==4 && c==6)) {
            cout<<"Case "<<i<<": perfectus"<<endl;
        } 
        else {
            cout<<"Case " <<i<<": invalidum"<< endl;
        }
    }

    return 0;
}

  