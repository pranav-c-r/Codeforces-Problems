#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int faces=0;
    for (int i=0;i<n;i++){
        string s;
        cin >> s;
        if (s=="Icosahedron")
            faces+=20;
        else if (s=="Tetrahedron")
            faces+=4;
        else if (s=="Dodecahedron")
            faces+=12;
        else if (s=="Octahedron")
            faces+=8;
        else
            faces+=6;
    }
    cout<<faces;
    return 0;
}