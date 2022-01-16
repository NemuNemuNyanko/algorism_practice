#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(void){
    int A,B,C,X,count = 0;
    cin >> A >> B >> C >> X;

    // 硬貨は0枚でもいけることに注意!
    rep(x,A+1){
        rep(y,B+1){
            rep(z,C+1){
                if(500*x+100*y+50*z == X)count++;
            }
        }
    }

    cout << count << endl;
}