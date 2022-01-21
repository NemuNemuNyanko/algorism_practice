#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  vector<pair<int, int>> vec(N);

  rep(i,N){
    int a,b;
    cin >> a >> b;
    vec.at(i) = make_pair(b,a);
  }

  sort(vec.begin(), vec.end());

  rep(i,N){
      int a,b;
      tie(b,a) = vec.at(i);
      cout << a << " " << b << endl;
  }
}
