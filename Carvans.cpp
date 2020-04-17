//Question Code - CARVANS
//@author- @themohitpapneja

#include<iostream>
using namespace std;

int main(){
  int testcases;
  cin>>testcases;
  while(testcases--){
    int cars;
    cin>>cars;
    int speed[cars];
    for(int& i: speed) cin>>i;

    int count=1,speedmax=speed[0];
    for(int i=0;i<cars;i++){
      if(speed[i]<speedmax){
        speedmax=speed[i];
        count++;
      }
    }
    cout<<count<<endl;
  }
  return 0;
}
