#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)

int main(void){
  int left,right;
  cout << "age_range?" << endl << "min: ";
  cin >> left;
  cout << "max: ";
  cin >> right;

  int mid;
  int i = 1;
 while(left != right){
    mid = (left + right)/2;
    string answer = "unko";

    while(answer != "Yes" &&  answer != "No"){
      cout << i << ":your age <= " << mid << endl << "Yes or No: ";
      cin >> answer;
    }
    
    if(answer == "Yes")right = mid;
    else left = mid+1;
    i++;
  }

  cout << "your age is " << left << endl;
  return 0;
}