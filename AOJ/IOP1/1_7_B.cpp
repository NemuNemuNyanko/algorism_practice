#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n,x,count = 0;
    while(true){
        cin >> n >> x;
        if(n == 0&&x==0)break;

        for(int i =1;i<=n;i++){
            for(int j = i+1;j<=n;j++){
                for(int k = j+1;k<=n;k++){
                    if(i+j+k == x)count++;
                }
            }
        }
        cout << count << endl;
        count = 0;
    }

    
}