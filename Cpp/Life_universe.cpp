//Question Code - TEST
//@author- @themohitpapneja
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n!=42){
        cout<<n<<endl;
        main();
    }
    exit(0);
}

//exit(1) will return the error NZEC in code chef compiler
//before it i used while loop that caused TLE error in code chef
    /*
#include <iostream>
using namespace std;

int main() {
    int n;
    while(n!=42){
        cin>>n;
        cout<<n<<endl;
    }
  }
*/
