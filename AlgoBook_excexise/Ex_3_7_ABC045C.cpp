#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(){
    string S;
    cin >> S;
    int n = S.size();
    long long sum =0;

    rep(tmp,1<<(n-1)){
        bitset<9> s(tmp);
        int left = 0;
        int word_num = 1;
        rep(i,n-1){
            if(s.test(i)){
                // 範囲外エラー回避のためstoiじゃなくてstollを使う
                sum += stoll(S.substr(left,word_num));
                left = i+1;
                word_num = 1;
            }
            else word_num ++;
        }
        sum += stoll(S.substr(left,word_num));
    }

    cout << sum << endl;
}