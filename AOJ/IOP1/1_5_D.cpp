#include<bits/stdc++.h>

using namespace std;

// 複数行選択後, CTRL + [ or ]で一気にインテンド処理可能
void call(int n){
    for(int i = 1;i <= n;i++){
        int x = i;
        if(x % 3 ==0)cout << " " << i;
        else{
            while(x){
                if (x % 10 == 3){
                    cout << " " << i;
                    break;
                }
                x /= 10;
            }
            
        }
    }
    cout << endl;
    return;
}


int main(void){
    int n;
    cin >> n;
    call(n);
    return 0;
}
