#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n,m;
    cin >> n >> m;
    vector<vector<int> > matrix(n,vector<int>(m));
    vector<int> vec(m);
    vector<int> ans(n);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> matrix.at(i).at(j);
        }
    }
    for(int j=0;j<m;j++){
        cin >> vec.at(j);
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans.at(i) += matrix.at(i).at(j) * vec.at(j);
        }
    }

    for(int i=0;i<n;i++){
        cout << ans.at(i) << endl;
    }
}