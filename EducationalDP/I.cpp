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
    vector<double>p(N);
    rep(i,N)cin >> p.at(i);
    vector<vector<double> > dp(N+1, vector<double>(N+1,0));
    
    dp.at(0).at(0)=1;
    rep(i,N){
        rep(j,N+1){
            dp.at(i+1).at(j) += dp.at(i).at(j)*(1-p.at(i));
            if(j+1 < N+1)dp.at(i+1).at(j+1) += dp.at(i).at(j)*p.at(i);
        }
    }

    double sum = 0;
    rep2(i,N/2+1,N+1){
        sum += dp.at(N).at(i);
    }    
    cout << setprecision(10) << sum << endl;
}