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
    int N,K;
    cin >> N >> K;
    vector<int> h(N);
    rep(i,N)cin >> h.at(i);

    vector<long long> dp(N,INF);
    dp.at(0) = 0;
    rep2(i,1,N){
        rep2(j,1,K+1){
            if(i-j>=0)chmin(dp.at(i),dp.at(i-j) + abs(h.at(i) - h.at(i-j)));
        }
    }

    cout << dp.at(N-1) << endl;
}