//Question Code - CONFLIP
//@author- @themohitpapneja
#include<iostream>
using namespace std;

int main(){
  int testcases;
  cin>>testcases;
  while(testcases--){
    int gamesPLayed;
    cin>>gamesPLayed;
    while(gamesPLayed--){
      int i,n,q;
      cin>>i>>n>>q;
      //cout<<i<<n<<q;
      int result;
        if(n%2==0){//even- number of 1st elements--> h in case of  all h
          result=1*(n/2);
          cout<<result<<endl;
        }
        else{//odd number of 1 st elements --> h in case of all t and vice versa
          result=1*((n+1)/2);
          if(i==1){
              if(q==1){
                cout<<(n-result)<<endl;
              }
              else{
                cout<<result<<endl;
              }
          }
          else if(i==2){
            if(q==1){
              cout<<result<<endl;
            }
            else{
              cout<<(n-result)<<endl;

            }

          }

        }

    }
  }
  return 0;
}
