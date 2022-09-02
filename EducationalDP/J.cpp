#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
// vector<vector<long long> > dp(3, vector<long long>(4,0));
// vector<vector<vector<long long> > > dp(3, vector<vector<long long> >(4, vector<long long>(5,0)) );
// dp.assign(N,vector<long long>(W, INF)) 二次元辞書のresize 
// dp.assign(3, vector<vector<long long> >(4, vector<long long>(5,0)) );


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

int N;
vector<vector<vector<double> > > dp;

double rec(int c1,int c2,int c3){
    if(c1==0 && c2==0 && c3==0)return 0.0;
    if(c1<0 || c2<0 || c3<0)return 0.0;
    if(dp.at(c1).at(c2).at(c3)> -0.1)return dp.at(c1).at(c2).at(c3);

    double sum = c1+c2+c3;
    return N/sum + c1/sum * rec(c1-1,c2,c3) + c2/sum * rec(c1+1,c2-1,c3) + c3/sum * rec(c1,c2+1,c3-1);
}



int main(){
    cin >> N;
    int c1=0,c2=0,c3=0;
    int a;
    rep(i,N){
        cin >> a;
        if(a == 1)c1++;
        if(a == 2)c2++;
        if(a == 3)c3++;
    }

    dp.assign(N+1, vector<vector<double> >(N+1, vector<double>(N+1,-20.0)) );
    double ans = rec(c1,c2,c3);
    cout << setprecision(14) << ans << endl;
}