#include<bits/stdc++.h>

using namespace std;
int main(void){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin >> vec.at(i);
    }
    for(int i=n-1;i>=0;i--){
        if(i != 0)cout << vec.at(i) << " ";
        else cout << vec.at(i) << endl;
    }
}
