#include <bits/stdc++.h>
using namespace std;
  int main () 
{
   int t;
   cin>>t;
   while(t--){
int n;
cin>>n;
vector<int>v1(n);
for(int i=0; i<n; i++){

cin>>v1[i];
}

int m;
cin>>m;
vector<int>v2(m);
for(int i=0; i<m; i++){

cin>>v2[i];
}
vector<int>v3;
v3.insert(v3.end(), v2.begin(), v2.end());
v3.insert(v3.end(), v1.begin(), v1.end());
for(int i=0; i<v3.size(); i++){
     if (i > 0) cout << " ";
    cout<<v3[i];
}
cout<< endl;

}
   
     return 0;
  }