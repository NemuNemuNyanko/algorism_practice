#include<bits/stdc++.h>
using namespace std;

int main(void){
    string W,T;
    int count =0;

    cin >> W;
    while(true){
        cin >> T;
        if(T == "END_OF_TEXT")break;
        int n = T.size();
        for(int i=0;i<n;i++){
            if(isupper(T[i]))T[i] = tolower(T[i]);
        }

        if(T == W)count++;
    }

    cout << count << endl;

}