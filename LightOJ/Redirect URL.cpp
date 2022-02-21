#include <bits/stdc++.h>
using namespace std;
int main(){

      int test;
      cin>>test;
      for(int i=1; i<=test; i++){
            string x;
            cin>>x;
            if(x[4]!='s')x.insert(4,"s");
            cout<<"Case "<<i<<": "<<x<<endl;

      }    
}
