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

vector<int> p;


int main(){
    int N;
    cin >> N;
    p.resize(N);
    rep(i,N)cin >> p.at(i);

    int sum = accumulate(p.begin(),p.end(),0);

    // a0,...,an-1でwをつくれるならば1,そうでないなら0
    vector<vector<long long> > dp(N+1, vector<long long>(sum+1,0));
    dp.at(0).at(0) = 1;
    rep2(i,1,N+1){
        rep(j,sum+1){
            if(j - p.at(i-1)>=0){
                dp.at(i).at(j) = dp.at(i-1).at(j) || dp.at(i-1).at(j - p.at(i-1));
            }
            else dp.at(i).at(j) = dp.at(i-1).at(j);       
        }
    }

    int ans = 0;
    rep(j,sum+1)ans += dp.at(N).at(j);
    cout << ans << endl;
}