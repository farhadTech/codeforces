#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int nextPrime(int num) {
    num++;
    while (!isPrime(num)) {
        num++;
    }
    return num;
}

int findNonPrime(int n) {
    int m = 2; 

    while (true) {
        if (!isPrime(n + m)) {
            return m;
        }
        m = nextPrime(m);
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int m = findNonPrime(n);
        cout << m << endl;
    }

    return 0;
}
