#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
// vector<vector<long long> > dp(3, vector<long long>(4,0));
// vector<vector<vector<long long> > > dp(3, vector<vector<long long> >(4, vector<long long>(5,0)) );
// dp.assign(N,vector<long long>(W, INF)) 二次元辞書のresize 

template <class T> void chmin(T &a,T b){
    if(a > b)a = b;
}
template <class T> void chmax(T &a,T b){
    if(a < b)a = b;
}
const long long INF = 1LL << 60;
const long long MOD = 1000000007;

// 整数同士の累乗
long long pow2(int a, int n){
    long long r = 1;
    while (n != 0){
        if (n % 2 == 1) r = r * a;
        a = a * a;
        n = n / 2;
    }
    return r;
}


int main(){
    int H,W;
    cin >> H >> W;
    vector<vector<char> > grid(H, vector<char>(W));
    rep(i,H) rep(j,W) cin >> grid.at(i).at(j);

    vector<vector<long long> > dp(H, vector<long long>(W,1));
    rep(i,H){
        rep(j,W){
            if(grid.at(i).at(j) == '#') dp.at(i).at(j) = 0;
            else if(i>0 && j>0) dp.at(i).at(j) = (dp.at(i-1).at(j) + dp.at(i).at(j-1)) % MOD;
            else if(i>0) dp.at(i).at(j) = dp.at(i-1).at(j);
            else if(j>0) dp.at(i).at(j) = dp.at(i).at(j-1);
        }
    }

    cout << dp.at(H-1).at(W-1) << endl;
}