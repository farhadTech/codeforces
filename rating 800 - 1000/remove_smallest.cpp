// problem link: https://codeforces.com/problemset/problem/1399/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector <int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    bool flag = false;

    for(int i = 0; i < n - 1; i++){
        if(v[i + 1] - v[i] > 1){
            flag = true;
        }
    }
    if(flag){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}

int main(){
    int test; cin >> test;

    while(test--){
        solve();
    }    
    return 0;
}
