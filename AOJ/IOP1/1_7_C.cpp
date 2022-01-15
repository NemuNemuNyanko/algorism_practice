#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n,m;
    cin >> n >> m;
    vector<vector<int> > matrix(n+1,vector<int>(m+1));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> matrix.at(i).at(j);
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            matrix.at(i).at(m) += matrix.at(i).at(j);
        }
    }
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            matrix.at(n).at(j) += matrix.at(i).at(j);
        }
    }
    for(int i=0;i<n;i++){
        matrix.at(n).at(m) += matrix.at(i).at(m);
    }

    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(j != m)cout << matrix.at(i).at(j) << " ";
            else cout << matrix.at(i).at(j) << endl;
        }
    }
}