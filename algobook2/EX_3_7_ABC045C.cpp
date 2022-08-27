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

// left番目からright番目までの文字を取得
// ex. getnum(123456,4,2)→234
long long getnum(long long  number,int left,int right){
    // 右からleft＋1個の数字を取得
    long long subnum = number % pow2(10,left+1);
    // 右からright個のまでの数字を取得
    long long subnum2 = number % pow2(10,right);

    return (subnum - subnum2) / pow2(10,right);
}


int main(){
    long long S,sum;
    sum = 0;
    cin >> S;
    int n = to_string(S).size() -1;

    rep(bit,1<<n){
        int right = 0;
        rep(i,n){
            if(bit & 1<<i){
                sum += getnum(S,i,right);
                right = i+1;
            }
        }
        sum += getnum(S,n,right);
    }

    cout << sum << endl;
}