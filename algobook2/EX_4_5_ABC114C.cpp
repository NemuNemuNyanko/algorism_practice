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

int count(long long N,long long now,int flag){
    if(now > N)return 0;

    // 2進数表記で111は0b111
    if(flag == 0b111)return 1 + count(N,now*10+3,flag) + count(N,now*10+5,flag) + count(N,now*10+7,flag); 
    return count(N,now*10+3,flag | 0b001) + count(N,now*10+5,flag | 0b010) + count(N,now*10+7,flag | 0b100);
}

int main(){
    long long N;
    cin >> N;
    int answer = count(N,0,0b000);
    cout << answer << endl;
}