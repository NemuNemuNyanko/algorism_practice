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


int subsum(int n,int w,vector<int> &a,vector<vector<int>> &dp){
    if(dp.at(n).at(w) != -1)return dp.at(n).at(w);
    if(w - a.at(n-1) < 0){
        dp.at(n).at(w) = subsum(n-1, w,a,dp);
        return dp.at(n).at(w);
    }
    dp.at(n).at(w) = subsum(n-1, w - a.at(n-1),a,dp) | subsum(n-1, w,a,dp);
    return dp.at(n).at(w);
}

int main(){
    int N,W;
    cin >> N >> W;
    vector<int> a(N);
    rep(i,N)cin >> a.at(i);

    vector<vector<int>> dp(N+1, vector<int>(W+1,-1));
    rep(i,W+1){
        dp.at(0).at(i) = 0;
    }
    rep(i,N+1){
        dp.at(i).at(0) = 1;
    }

    if(subsum(N,W,a,dp))cout << "Yes" << endl;
    else cout << "No" << endl;
}