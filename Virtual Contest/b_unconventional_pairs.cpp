#include <bits/stdc++.h>
using namespace std;

void fun(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  sort(a.begin(), a.end(), greater<int>());

  int mx = INT_MIN;
  for (int i = 1; i < n; i += 2) {
    mx = max(mx, abs(a[i] - a[i - 1]));
  }
  cout << mx << endl;
}


int main(){
  int t;
  cin >> t;
  while(t--) {
    fun();
  }
  return 0;
}
