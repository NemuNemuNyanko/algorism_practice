#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(void){
    int N,Y,x=-1,y=-1,z=-1;
    cin >> N >> Y;
    // 一応小さく
    Y /= 1000;

    for(int i=0;i<=N;i++){
        for(int j=0;j<=N-i;j++){
            int k = N-i-j;
            if(10*i+5*j+k == Y){
                x = i;
                y = j;
                z = k;
                break;
            }
        }
        if(x != -1)break;
    }

    cout << x << " "<< y <<" "<< z;
}