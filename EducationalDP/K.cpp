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
    vector<int> a(N);
    rep(i,N)cin >> a.at(i);

    vector<bool> dp(K+1,false);
    rep(i,K+1){
        rep(j,N){
            if(i + a.at(j)>K)continue;
            dp.at(i + a.at(j)) = dp.at(i + a.at(j)) || !dp.at(i);
        }
    }
    if(dp.at(K))cout << "First" << endl;
    else cout << "Second" << endl;
}