#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector <int> arr(n);


    int mx = INT_MIN;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }


    int ans = 0;
    for(int i = 0; i < n; i++){
        ans += (mx - arr[i]);
    }
    cout << ans << endl;
}

int main(){
    solve();
    return 0;
}
