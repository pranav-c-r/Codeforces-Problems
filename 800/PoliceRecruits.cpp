#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> lst(n);
    for(int i = 0; i < n; ++i) cin >> lst[i];

    long long count = 0; // available positives
    long long ans = 0;   // number of unhandled -1's

    for (int v : lst) {
        if (v == -1) {
            if (count > 0) count--;
            else ans++;
        } else if (v > 0) {
            count += v;
        }
        // if v == 0: do nothing
    }

    cout << ans << '\n';
    return 0;
}


/*
initially i made these mistakes :

In the second loop you use else for the non-positive case,
so 0 is treated like -1.
That’s wrong unless the problem specifically says zeros behave like -1.

When you see a -1 you flush the entire count with a
while(count!=0){ x++; count--; }.
That consumes all accumulated positives for a single -1.
The usual intended behaviour is that each -1 should remove one unit
from count (if available), not all of them.

Most problems with this pattern require: when you encounter -1:

if count > 0 then count-- (one person/resource removed),

else ans++ (an unhandled -1 — e.g. a failed deletion).

Your final y - x was trying to compute "total -1s minus number of decrements done",
which is okay in theory — but your x calculation is wrong because you drained
count completely for each -1, and you also counted zeros as -1.
*/