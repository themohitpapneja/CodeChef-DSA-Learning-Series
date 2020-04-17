//Question Code - LAPIN
//@author- @themohitpapneja

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
  int t,count;
  string str,str1,str2;
  cin>>t;
  while(t--){
  cin>>str;
  count=str.length();
  if(count%2==0){
    str1=str.substr(0,count/2);
    str2=str.substr(count/2,count);
    }
  else{
    str1=str.substr(0,count/2);
    str2=str.substr((count/2)+1,count);
    }
  sort(str1.begin(),str1.end());
  sort(str2.begin(),str2.end());

  if(str1.compare(str2)==0){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
}
  return 0;
}
