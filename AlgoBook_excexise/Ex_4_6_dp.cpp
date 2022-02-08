#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)


bool func(int i, int w, const vector<int> &a,vector<vector<int>> &data) {
    if(data.at(i).at(w) != -1)return data.at(i).at(w);
    data.at(i).at(w) = func(i-1,w,a,data) || func(i-1,w-a.at(i-1),a,data);
    return data.at(i).at(w);
}

int main() {
    // 入力
    int N, W;
    cin >> N >> W;
    vector<int> a(N);
    rep(i,N)cin >> a.at(i);

    // 再帰的に解く
    vector<vector<int>> data(N+1, vector<int>(W+1,-1));
    data.at(0).at(0) = 1;
    rep2(i,1,W+1) data.at(0).at(i) = 0;

    if (func(N, W, a,data)) cout << "Yes" << endl;
    else cout << "No" << endl;
}