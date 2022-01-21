#include <bits/stdc++.h>
using namespace std;

int f(int &x) {
  x = x * 2;  // xを2倍 (参照によって"呼び出す側の変数"が変更される)
  return x;
}

int g(int* x){
    *x *= 2;
    return *x;
}

int main() {
    int x1 = 3;
    int x2 = 4;

    int y1 = f(x1);
    int y2 = g(&x2);
    cout << x1 << " " << y1 << endl;
    cout << x2 << " " << y2 << endl;


    vector<int> a = {1, 3, 2, 5};
    for (int x : a) {
      x = x * 2;
    }
    // aは{1, 3, 2, 5}のまま
    // x自体は2倍になるものの、対応する配列の要素は変更されない
    for (int x : a) {
      cout << x << " ";
    }
    cout << endl;

    for (int &x : a) {
      x = x * 2;
    }
    // aは{2, 6, 4, 10}となる
    for (int x : a) {
      cout << x << " ";
    }
    cout << endl;

}
