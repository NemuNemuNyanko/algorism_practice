#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(){
    int K,S,count = 0;
    cin >> K >> S;
    
    rep(x,K+1){
        rep(y,K+1){
            if(x+y>= S-K && x+y<=S)count++;
        }
    }

    cout << count << endl;
}