#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;

    // Initialize variables
    ll sum = 0, ans = 0;

    // Read and process array 'a'
    vector<ll> a(n);
    for (auto &element : a) {
        cin >> element;
        sum += element;
    }

    // Read and process array 'b'
    vector<ll> b(n);
    for (auto &element : b) {
        cin >> element;
        sum -= element;
    }

    // Calculate the XOR of corresponding elements in 'a' and 'b' to find differing elements
    for (ll i = 0; i < n; i++) {
        ans += (a[i] ^ b[i]);
    }

    // Calculate the minimum number of operations to make 'a' equal to 'b'
    ans = min(ans, 1 + abs(sum));

    // Output the result for the current test case
    cout << ans << "\n";
}

int main() {
    // Faster I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    // Process each test case
    while (t--) {
        solve();
    }

    return 0;
}
