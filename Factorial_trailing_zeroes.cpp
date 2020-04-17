//Question Code - FCTRL
//@author- @themohitpapneja
#include<iostream>
using namespace std;

int main(){
  int testcases;
  cin>>testcases;
  while(testcases--){
    int n,zeroes=0;
    cin>>n;
    while(n>4){
      zeroes+=n/5;
      n=n/5;
    }
    cout<<zeroes<<endl;
  }
}
