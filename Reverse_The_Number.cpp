//Question Code - FLOW007
//@author- @themohitpapneja

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
      int n,rev=0;
      cout<<"Enter n: ";
      cin>>n;
      while(n!=0){
          int r=n%10;
          rev=rev*10+r;
          n=n/10;
        }
      cout<<rev<<endl;
    }

  return 0;
}
