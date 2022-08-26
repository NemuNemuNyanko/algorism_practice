#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

template <class T> void chmin(T &a,T b){
    if(a > b)a = b;
}
const long long INF = 1LL << 60;


int main(){
    int N;
    cin >> N;
    vector<int> h(N);
    rep(i,N)cin >> h.at(i);

    
    vector<long long> dp(N,INF);
    dp.at(0) = 0;

    rep2(i,1,N){
        chmin(dp.at(i),dp.at(i-1) + abs(h.at(i) - h.at(i-1)) );
        if(i>1) chmin(dp.at(i),dp.at(i-2) + abs(h.at(i) - h.at(i-2)) );
    }

    cout << dp.at(N-1) << endl;
}

