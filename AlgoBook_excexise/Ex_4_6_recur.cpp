#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

bool func(int i, int w, const vector<int> &a) {
    // ベースケース
    if (i == 0) {
        if (w == 0) return true;
        else return false;
    }

    return func(i-1,w,a) || func(i-1,w-a.at(i-1),a);
}

int main() {
    // 入力
    int N, W;
    cin >> N >> W;
    vector<int> a(N);
    rep(i,N)cin >> a.at(i);

    // 再帰的に解く
    if (func(N, W, a)) cout << "Yes" << endl;
    else cout << "No" << endl;
}