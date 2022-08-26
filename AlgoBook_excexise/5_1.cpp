#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)


int main(){
    int N;
    cin >> N;
    vector<int> h(N);
    rep(i,N)cin >> h.at(i);

    vector<long long> dp(N,0);

    rep2(i,1,N){
        if(i == 1)dp.at(i) = dp.at(i-1) + abs(h.at(i) - h.at(i-1));
        else dp.at(i) = min(dp.at(i-1) + abs(h.at(i) - h.at(i-1)), dp.at(i-2) + abs(h.at(i) - h.at(i-2)) );
    }

    cout << dp.at(N-1) << endl;
}

