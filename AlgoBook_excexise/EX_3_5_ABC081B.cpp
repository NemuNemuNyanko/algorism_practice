#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int count_2(int n){
    int count = 0;
    while(n %2==0){
        count++;
        n/=2;
    }

    return count;
}

int main(void){
    int N,min_value = 114514;

    cin >> N;
    vector<int> vec(N);
    rep(i,N){
        cin >> vec.at(i);
    }

    for(int x:vec){
        min_value = min(min_value, count_2(x));
    }

    cout << min_value << endl;
}