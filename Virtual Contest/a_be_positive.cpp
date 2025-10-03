#include<iostream>
#include<vector>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int>arr(n);

  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int totalNegative = 0;
  for(int i = 0; i < n; i++){
    if(arr[i] == -1) {
      totalNegative++;
    }
  }
  int ops = 0;
  for(int i = 0; i < n; i++){
    if(arr[i] == 0) {
      ops++;
    }
  }

  if(totalNegative % 2 != 0) {
    ops+=2;
  }
  cout << ops << "\n";
}

int main() {
  int test_cases;
  cin >> test_cases;

  for(int i = 1; i <= test_cases; i++) {
    solve();
  }
  return 0;
}

