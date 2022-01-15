#include<bits/stdc++.h>
using namespace std;

int main(void){
    string W;
    int m,h;
    while(true){
        cin >> W >> m;
        if(W == "-")break;

        int w_num = W.size();
        for(int i=0;i<m;i++){
            cin >> h;
            W = W.substr(h,w_num - h) + W.substr(0,h);
        }

        cout << W << endl;        
    }
}