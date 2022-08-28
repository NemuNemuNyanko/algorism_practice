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

bool subsum(int n,int w,vector<int> &a){
    if(w == 0)return true;
    if(n == 0)return false;
    return subsum(n-1, w - a.at(n-1),a) || subsum(n-1, w,a);
}

int main(){
    int N,W;
    cin >> N >> W;
    vector<int> a(N);
    rep(i,N)cin >> a.at(i);

    if(subsum(N,W,a))cout << "Yes" << endl;
    else cout << "No" << endl;
}