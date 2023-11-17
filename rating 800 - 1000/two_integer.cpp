// https://codeforces.com/problemset/problem/1409/A

/*
// time limit exceeded.
#include <bits/stdc++.h>
using namespace std;

int solve(){
    int a, b;
    cin >> a >> b;
    if(a == b){
        return 0;
    }
    int count = 0;
    while (true){
        if (a > b){
            a -= 10;
            count++;
            if (a <= b){
                return count;
            }
        }
        else if (a < b){
            a += 10;
            count++;
            if (a >= b){
                return count;
            }
        }
    }
}

int main(){

    int test;
    cin >> test;

    while (test--){
        int ans = solve();
        cout << ans << endl;
    }
    return 0;
}
*/

#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;

        cout << (abs(a - b) + 9) / 10 << endl;
    }

    return 0;
}