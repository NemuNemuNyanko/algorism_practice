#include <bits/stdc++.h>
using namespace std;

int mymin(int x, int y){
    if(x <= y)return x;
    else return y;
}

int main(){
    int a,b;
    cin >> a >> b;
    cout << mymin(a,b) << endl;
    return 0;
}