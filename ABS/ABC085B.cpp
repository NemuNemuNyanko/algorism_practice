#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(void){
    int N,count =1;
    cin >> N;
    vector<int>vec(N);
    rep(i,N){
        cin >> vec.at(i);
    }
    
    sort(vec.begin(), vec.end());
    int x = vec.at(0);
    rep2(i,1,N){
        if(x != vec.at(i)){
            count ++;
            x = vec.at(i);
        }
    }

    cout << count << endl;
}