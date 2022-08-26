#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n,m,l;
  cin >> n >> m >> l;
  vector<vector<int>> command(n, vector<int>(m));
  vector<vector<int>> data(l, vector<int>(m));
  vector<vector<int>> data2(l-1, vector<int>(m));
  
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> command.at(i).at(j);
    }
  }
  for(int i=0;i<l;i++){
    for(int j=0;j<m;j++){
      cin >> data.at(i).at(j);
    }
  }

  for(int i=0;i<l-1;i++){
    for(int j=0;j<m;j++){
      data2.at(i).at(j) = data.at(i+1).at(j) - data.at(i).at(j);
    }
  }


  for(int i=0;i<l-1;i++){
    for(int j=0;j<n;j++){
      if(data2.at(i) == command.at(j)) cout << j+1 << endl;
    }
  }

}