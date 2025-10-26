/*
The below code is correct but time limit exceeded in test 3.
refer the uncommented code for most optimal answer.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        if (a%b==0){
            cout << "0" << endl;
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
*/

/*
You dont need for loops or any loop for this problem. Its ez one.
if a%b=0 then print 0 (moves req = 0)
else:
print moves needed to make a div by b => (b - a%b)
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i=0;i<t;i++){
        int a,b;
        cin >> a >> b;
        if (a%b==0){
            cout << "0" << endl;
            continue;
        }
        else{
            cout << b-(a%b) << endl;
            continue;
        }
    }
    return 0;
}