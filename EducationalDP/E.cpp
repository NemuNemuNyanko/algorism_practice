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
    int N,W;
    cin >> N >> W;
    vector<long long>w(N),v(N);
    rep(i,N)cin >> w.at(i) >> v.at(i);

    long long valsum = accumulate(v.begin(),v.end(),0);
    vector<vector<long long>> dp(N+1,vector<long long>(valsum+1,INF));
    dp.at(0).at(0) = 0;
    rep2(i,1,N+1){
        rep(j,valsum+1){
            chmin(dp.at(i).at(j), dp.at(i-1).at(j));
            if(j - v.at(i-1) >=0)chmin(dp.at(i).at(j), dp.at(i-1).at(j - v.at(i-1)) + w.at(i-1));
        }
    }

    int ans = 0;
    rep(j,valsum+1){
        if(dp.at(N).at(j) <= W)chmax(ans,j);
    }
    
    cout << ans << endl;
}