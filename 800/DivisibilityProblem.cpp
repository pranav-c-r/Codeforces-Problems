#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        if (a%b==0){
            cout << "0";
            continue;
        }
        int moves = 0;
        while(true){
            a++;
            moves++;
            if (a%b==0) {
                cout << moves << endl;
                break;
            }
        }
    }
    return 0;
}