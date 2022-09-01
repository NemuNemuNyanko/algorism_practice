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
    int N;
    cin >> N;
    vector<int> a(N),b(N),c(N);
    rep(i,N)cin >> a.at(i) >> b.at(i) >> c.at(i);

    vector<int> dpA(N),dpB(N),dpC(N);
    dpA.at(0) = a.at(0);
    dpB.at(0) = b.at(0);
    dpC.at(0) = c.at(0);
    rep2(i,1,N){
        dpA.at(i) = max(dpB.at(i-1),dpC.at(i-1)) + a.at(i);
        dpB.at(i) = max(dpA.at(i-1),dpC.at(i-1)) + b.at(i);
        dpC.at(i) = max(dpA.at(i-1),dpB.at(i-1)) + c.at(i);
    }

    int ans = 0;
    chmax(ans,dpA.at(N-1));
    chmax(ans,dpB.at(N-1));
    chmax(ans,dpC.at(N-1));
    cout << ans << endl;
}