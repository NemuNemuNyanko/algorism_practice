#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)


int main(void){
    int n =0,Tpoint=0,Hpoint=0;
    string W1,W2;

    cin >> n;
    rep(i,n){
        cin >> W1 >> W2;
        if(W1 > W2)Tpoint +=3;
        else if(W1 < W2)Hpoint +=3;
        else{
            Tpoint++;
            Hpoint++;
        }
    }

    cout << Tpoint << " " << Hpoint << endl;

}