#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(void){
    string S;
    cin >> S;
    int n = S.size();
    int i = 0;
    while(i != n){
        string s1 = S.substr(i,5);
        string s2 = S.substr(i,6);
        string s3 = S.substr(i,8);

        if(s2 == "eraser")i+=6;
        else if(s1 == "erase")i+=5;
        // 前二つだけだと最後がdreamerの時NOを返してしまうからさらに一つ追加
        else if(s3 == "dreamerd" || s3 == "dreamere" ||(i == n-7 && S.substr(i,7) == "dreamer") )i+=7;
        else if(s1 == "dream")i+=5;
        else break;
    }

    if(i == n)cout << "YES" << endl;
    else cout << "NO" << endl;
}