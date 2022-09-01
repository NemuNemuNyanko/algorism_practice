#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
// vector<vector<long long>> dp(3, vector<long long>(4,0));
// vector<vector<vector<long long>>> dp(3, vector<vector<long long>>(4, vector<long long>(5,0)) );
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

vector<long long>w,v;
vector<vector<long long>> dp;
int N,W;

long long rec(int i,int weight){
    if(i == 0)return 0;
    if(dp.at(i).at(weight) > -INF)return dp.at(i).at(weight);

    long long ans = -INF;
    if(weight - w.at(i-1) >=0)chmax(ans,v.at(i-1) + rec(i-1,weight - w.at(i-1)));
    chmax(ans,rec(i-1,weight));

    dp.at(i).at(weight) = ans;
    return ans;
}

int main(){
    cin >> N >> W;
    w.resize(N);
    v.resize(N);
    rep(i,N)cin >> w.at(i) >> v.at(i);

    dp.assign(N+1,vector<long long>(W+1,-INF));
    long long ans = rec(N,W);
    cout << ans << endl;
}