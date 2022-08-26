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


int main(){
    int N,K;
    cin >> N >> K;
    vector<int> a(N),b(N);
    rep(i,N)cin >> a.at(i);
    rep(i,N)cin >> b.at(i);

    long long min_value = INF;
    rep(i,N){
        rep(j,N){
            
            if(a.at(i) + b.at(j) < K)continue;
            if(a.at(i) + b.at(j) < min_value)min_value = a.at(i) + b.at(j);
        }
    }

    cout << min_value << endl;
}