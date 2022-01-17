#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(void){
    string S;
    cin >> S;
    int n = S.size();
    int i = n-1;
    while(i != -1){
        if(i-4 < 0)break;
        string s1 = S.substr(i-4,5);
        if(s1 == "dream" || s1 == "erase"){
            i-=5;
            continue;
        }

        if(i-5 < 0)break;      
        string s2 = S.substr(i-5,6);
        if(s2 == "eraser"){
            i-=6;
            continue;
        }

        if(i-6 < 0)break; 
        string s3 = S.substr(i-6,7);
        if(s2 == "dreamer"){
            i-=7;
            continue;
        }

        break;
    }

    if(i == -1)cout << "YES" << endl;
    else cout << "NO" << endl;
}