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


vector<long long>dp;
vector<vector<long long> > c;

long long rec(int n){
    if(n==0)return 0;
    if(dp.at(n) < INF)return dp.at(n);

    long long ans = INF;
    rep(i,n)chmin(ans,rec(i) + c.at(i).at(n-1));

    dp.at(n) = ans;
    return ans;
}


int main(){
    int N;
    cin >> N;
    c.assign(N,vector<long long>(N, 0));
    rep(i,N){
        rep(j,N)cin >> c.at(i).at(j);
    }

    dp.assign(N+1,INF);
    long long ans = rec(N);
    cout << ans << endl;
}