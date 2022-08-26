#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

template <class T> void chmin(T &a,T b){
    if(a > b)a = b;
}
const long long INF = 1LL << 60;


long long flog(int i,const vector<int> &h){
    if(i == 0)return 0;
    if(i == 1)return flog(i-1,h) + abs(h.at(i) - h.at(i-1));
    return min(flog(i-1,h) + abs(h.at(i) - h.at(i-1)), flog(i-2,h) + abs(h.at(i) - h.at(i-2)) );

}

int main(){
    int N;
    cin >> N;
    vector<int> h(N);
    rep(i,N)cin >> h.at(i);

    long long ans = flog(N-1,h);

    cout << ans << endl;
}

