#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
// vector<vector<long long>> dp(3, vector<long long>(4,0));
// vector<vector<vector<long long>>> dp(3, vector<vector<long long>>(4, vector<long long>(5,0)) );

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
    vector<int> h(N);
    rep(i,N)cin >> h.at(i);
    
    vector<long long> dp(N);
    dp.at(0) = 0;
    dp.at(1) = abs(h.at(1) - h.at(0));
    rep2(i,2,N){
        dp.at(i) = min(dp.at(i-1) + abs(h.at(i) - h.at(i-1)),dp.at(i-2) + abs(h.at(i) - h.at(i-2)));
    }
    cout << dp.at(N-1) << endl;
}