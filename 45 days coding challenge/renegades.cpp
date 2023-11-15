// problem link: https://codeforces.com/gym/485555/problem/A

// using dynamic programming (accepted)
#include <iostream>
#include <vector>

using namespace std;

int combinations(int n, int k) {
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));

    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= min(i, k); ++j) {
            if (j == 0 || j == i) {
                dp[i][j] = 1;
            } else {
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
            }
        }
    }

    return dp[n][k];
}

int countTeams(int N) {
    int totalTeams = 0;
    for (int k = 2; k <= N; ++k) {
        totalTeams += combinations(N, k);
    }
    return totalTeams;
}

int main() {
    int N;
    cin >> N;

    int result = countTeams(N);
    cout << result << endl;

    return 0;
}

/* 
using recursion (time limit exceeded.)
#include <iostream>
#include <vector>

using namespace std;

int combinations(int n, int k) {
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));

    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= min(i, k); ++j) {
            if (j == 0 || j == i) {
                dp[i][j] = 1;
            } else {
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
            }
        }
    }

    return dp[n][k];
}

int countTeams(int N) {
    int totalTeams = 0;
    for (int k = 2; k <= N; ++k) {
        totalTeams += combinations(N, k);
    }
    return totalTeams;
}

int main() {
    int N;
    cin >> N;

    int result = countTeams(N);
    cout << result << endl;

    return 0;
}
*/