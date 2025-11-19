#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int index = -1;

        // Check the first three elements to determine the majority
        if(arr[0] != arr[1]) {
            // unique element is among first two
            if(arr[0] != arr[2]) index = 1;     // arr[0] is unique
            else index = 2;                    // arr[1] is unique
        } 
        else {
            // arr[0] == arr[1], so unique appears later
            for(int i = 2; i < n; i++){
                if(arr[i] != arr[0]) {
                    index = i + 1;
                    break;
                }
            }
        }

        cout << index << "\n";
    }

    return 0;
}
