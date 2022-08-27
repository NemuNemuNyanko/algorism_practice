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

// 文字列変換を利用したver
int main(){
    string S;
    cin >> S;
    long long sum;
    sum = 0;
    int wordsize = S.size();

    rep(bit,1<<(wordsize-1)){
        int left = 0;
        rep(i,wordsize-1){
            if(bit & 1<<i){
                sum += stoll(S.substr(left,i - left +1));
                left = i+1;
            }
        }
        sum += stoll(S.substr(left,wordsize -left));
    }

    cout << sum << endl;
}