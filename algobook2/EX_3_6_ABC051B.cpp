#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
// vector<vector<int>> dp(3, vector<int>(4,0));
// vector<vector<vector<int>>> dp(3, vector<vector<int>>(4, vector<int>(5,0)) );

template <class T> void chmin(T &a,T b){
    if(a > b)a = b;
}
template <class T> void chmax(T &a,T b){
    if(a < b)a = b;
}
const long long INF = 1LL << 60;


int main(){
    int K,N;
    cin >> K >> N;

    int counter = 0;
    rep(x,K+1){
        rep(y,K+1){
            int z = N - x - y;
            if(z > K)continue;
            if(z < 0)break; //1回0未満になったらそれ以降も0未満
            counter++;
        }
    }

    cout << counter << endl;
}

