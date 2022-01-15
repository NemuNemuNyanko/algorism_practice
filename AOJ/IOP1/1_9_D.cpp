#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)


int main(void){
    string str,inst,p;
    int q,a,b;
    cin >> str >> q;
    int n = str.size();

    rep(i,q){
        cin >> inst >> a >> b;;
        if(inst == "print"){
            cout << str.substr(a,b-a+1) << endl;
        }
        else if(inst == "reverse"){
            int back = n-b-1;
            reverse(str.begin()+a, str.end() - back);
        }
        else if(inst == "replace"){
            cin >> p;
            str.replace(a, b-a+1,p);
        }
    }

}