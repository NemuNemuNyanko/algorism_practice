#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

template <class T> void chmin(T &a,T b){
    if(a > b)a = b;
}
const long long INF = 1LL << 60;

vector<int> h;
vector<long long> dp;

long long flog(int i){
    if(dp.at(i) < INF)return dp.at(i);
    chmin(dp.at(i),flog(i-1)+ abs(h.at(i) - h.at(i-1)) );
    if(i>1) chmin(dp.at(i),flog(i-2)+ abs(h.at(i) - h.at(i-2)) );

    return dp.at(i);
}

int main(){
    int N;
    cin >> N;
    // hの大きさを指定
    h.resize(N);
    rep(i,N)cin >> h.at(i);

    // dpの大きさ初期値を設定
    dp.assign(N,INF);
    dp.at(0) = 0;

    long long ans = flog(N-1);
    cout << ans << endl;
}

