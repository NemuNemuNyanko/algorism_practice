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


int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i,N)cin >> a.at(i);

    int counter = 0;
    bool flag = true;

    while(true){
        rep(i,N){
            if(a.at(i) % 2 == 0)a.at(i) /= 2;
            else flag = false;
        }
        if(flag == false)break;
        counter++;
    } 

    cout << counter << endl;
}