#include<bits/stdc++.h>
using namespace std;

/*int count(int n){
  int count=0,r;
  while(n!=0){
    r=n%10;
    n=n/10;
    count++;
  }
  return count;
}*/

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
