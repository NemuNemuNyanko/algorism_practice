#include<bits/stdc++.h>
using namespace std;

int main(void){
    string s, p;
    cin >> s >> p;
    string s2 = s+s;

    if (s2.find(p) == string::npos ) cout << "No" << endl;
    else cout << "Yes" << endl;
}