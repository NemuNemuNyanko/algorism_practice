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
int pow2(int a, int n){
    int r = 1;
    while (n != 0){
        if (n % 2 == 1) r = r * a;
        a = a * a;
        n = n / 2;
    }
    return r;
}

long long getnum(long long  number,int left,int right){
    // 右からleft＋1個のの数字を取得
    long long subnum = number % pow2(10,left+1);
    // 右からright個のまでの数字を取得
    long long subnum2 = number % pow2(10,right);

    return (subnum - subnum2) / pow2(10,right);
}

int main(){
    int num = 0b001 | 0b111;
    cout << (num == 0b011) << endl;
}