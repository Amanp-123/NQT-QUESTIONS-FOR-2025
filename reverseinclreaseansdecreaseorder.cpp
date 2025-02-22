#include<bits/stdc++.h>
using namespace std;
int main() {
  // Your code here
  vector<int> arr = {7,3,4,2,1,5,8,9,7,10};
  int n = arr.size();
  sort(arr.begin(), arr.end());
  for(int i=0; i<n/2;i++){
    cout << arr[i] << " ";
  }
  for(int i=n-1; i>=n/2;i--){
    cout << arr[i] << " ";
  }
  return 0;
}