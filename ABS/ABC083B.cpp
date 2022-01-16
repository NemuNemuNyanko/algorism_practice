#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)


int main(void){
    int N,A,B,digit_sum = 0,sum = 0;
    cin >> N >> A >> B;
    rep2(i,1,N+1){
        int k = i;
        
        //iをいじくるをfor文の終了条件を満たさなりややこしいことになるから
        //かわりの変数 k を用意して色々いじくる
        while(k){
            digit_sum += k %10;
            k /= 10;
        }
        if(digit_sum >=A && digit_sum<=B)sum += i;
        digit_sum = 0;
    }

    cout << sum << endl;
}