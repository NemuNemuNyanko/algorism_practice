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

// 例題と異なり利得が最大になるような分割を考えていることに注意
// https://algo-method.com/tasks/317
vector<long long>dp;
vector<vector<long long> > g;

// [n-1,n]区間は発電していないときの[0,n]の最大発電量
long long rec(int n){
    if(n==0 || n == 1)return 0;
    if(dp.at(n) > -INF)return dp.at(n);

    long long ans = -INF;
    rep2(i,0,n-1){
        rep2(j,i,n-1){
            chmax(ans,rec(i) + g.at(i).at(j));
        }
    }

    dp.at(n) = ans;
    return ans;
}


int main(){
    int T;
    cin >> T;
    g.assign(T,vector<long long>(T, 0));
    rep(i,T){
        rep(j,T)cin >> g.at(i).at(j);
    }

    dp.assign(T+2,-INF);
    long long ans = rec(T+1);
    cout << ans << endl;
}