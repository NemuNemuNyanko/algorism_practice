#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n,m,l;
    cin >> n >> m >> l;
    vector<vector<int> > matrix1(n,vector<int>(m));
    vector<vector<int> > matrix2(m,vector<int>(l));
    vector<vector<long long int> > ans(n,vector<long long int >(l));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> matrix1.at(i).at(j);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<l;j++){
            cin >> matrix2.at(i).at(j);
        }
    }

    
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            for(int k=0;k<m;k++){
                ans.at(i).at(j) += matrix1.at(i).at(k) * matrix2.at(k).at(j);
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            if(j != l-1)cout << ans.at(i).at(j) << " ";
            else cout << ans.at(i).at(j) << endl;;
        }
    }

}