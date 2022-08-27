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

// 同じ値が2回以上出てきても secondmin と min が異なるようにする
int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i,N)cin >> a.at(i);

    long long min = INF;
    long long second_min = INF;
    rep(i,N){
        if(a.at(i) < min){
            second_min = min;
            min = a.at(i);
        }
        else if(a.at(i) < second_min && a.at(i) != min)second_min = a.at(i);
    } 

    cout << min << " " << second_min <<endl;
}