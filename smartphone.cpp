//Question Code - ZCO14003
//@author- @themohitpapneja

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
  //sort(v, v + sizeof v / sizeof v[0]);
int main(){
  long int customers;
  cin>>customers;
  long int i,count=customers;
  long long int max=0;
  long long int budget[customers];
  for(i=0;i<customers;i++){
    cin>>budget[i];
  }
  sort(budget,budget + sizeof budget / sizeof budget[0]);

  max=budget[0]*count;
  for(i=0;i<customers;i++){
    if(budget[i]*count>max){
      max=budget[i]*count;

    }
    count--;

  }
  cout<<max;
}
