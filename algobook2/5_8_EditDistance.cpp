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

string s1,s2;
vector<vector<long long> >dp;

long long rec(int i,int j){
    if(i == 0 && j==0)return 0;
    if(dp.at(i).at(j) < INF)return dp.at(i).at(j);

    long long ans = INF;
    // 変更
    if(i > 0 && j > 0){
        if(s1[i-1] == s2[j-1])chmin(ans,rec(i-1,j-1));
        else chmin(ans,rec(i-1,j-1) + 1);
    }
    // 削除
    if(i > 0)chmin(ans,rec(i-1,j)+1);
    // 挿入
    if(j > 0)chmin(ans,rec(i,j-1)+1);

    dp.at(i).at(j) = ans;
    return ans;
}



int main(){
    cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();
    dp.assign(n+1,vector<long long>(m+1, INF));

    long long ans = rec(n,m);
    cout << ans << endl;
}