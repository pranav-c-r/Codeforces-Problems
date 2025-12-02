#include <bits/stdc++.h>
using namespace std;

int main() {
    int y,w;
    cin>>y>>w;
    int mx=max(y,w);          
    int favorable=6-mx+1;  // we add 1 becoz dot can win if he gets atleast equal to the others
                // eg if y=4,w=2 then dot can get 4,5,6 to win.
                // note that 4 is also included. so we add +1
                // 6-mx+1 instead of 6-mx.
    int total=6;
    //Reduce the fraction
    int g=__gcd(favorable,total);
    favorable/=g;
    total/=g;
    cout<<favorable<<"/"<<total;
    return 0;
}