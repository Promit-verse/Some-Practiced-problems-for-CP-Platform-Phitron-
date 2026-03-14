#include <bits/stdc++.h>
using namespace std;
  int main () 
{
   vector<int>v(5); //vector & vector type declaration
   v.push_back(2); //add two in vector
  // v.push_back(3);
   //cout<<v[0]<<' '<<v[1]<<endl;
   //v.push_back(5);
   //v.push_back(1);
   //v.pop_back();

   //cout<<v.size()<<endl; //just 1 element, so size 1
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<' ';
    } 
   return 0;
  }