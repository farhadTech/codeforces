// https://codeforces.com/contest/381/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int sereja = 0, dima = 0;

    for (int i = 1; i <= n; i++) {
        if (i & 1) {
            if (v.front() > v.back()) {
                sereja += v.front();
                v.erase(v.begin());
            } else {
                sereja += v.back();
                v.pop_back();
            }
        } else {
            if (v.front() > v.back()) {
                dima += v.front();
                v.erase(v.begin());
            } else {
                dima += v.back();
                v.pop_back();
            }
        }
        if (v.empty())
            break;
    }

    cout << sereja << " " << dima << endl;
    return 0;
}

