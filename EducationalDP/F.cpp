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

vector<vector<long long> > dp;
stack<char> ans;
string s,t;

void rec(int i,int j){
    if(i==0 || j==0)return;

    if(dp.at(i).at(j) == dp.at(i-1).at(j-1)+1 && s[i-1] == t[j-1]){
        ans.push(s[i-1]);
        return rec(i-1,j-1);
    }
    if(dp.at(i).at(j) == dp.at(i-1).at(j))return rec(i-1,j);
    return rec(i,j-1);
}


int main(){
    cin >> s >> t;
    int n = s.size();
    int m = t.size();

    dp.assign(n+1,vector<long long>(m+1, 0));
    rep2(i,1,n+1){
        rep2(j,1,m+1){
            if(s[i-1] == t[j-1])dp.at(i).at(j) = dp.at(i-1).at(j-1)+1;
            else dp.at(i).at(j) = max(dp.at(i-1).at(j), dp.at(i).at(j-1));
        }
    }

    rec(n,m);
    while(!ans.empty()){
        cout << ans.top();
        ans.pop();
    }
    cout << endl;
}