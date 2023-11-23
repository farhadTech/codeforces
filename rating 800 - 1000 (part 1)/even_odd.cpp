#include <iostream>
using namespace std;
#define ll long long

int main(){
    ll n, k;
    cin >> n >> k;

    ll result;

    // mid point to separate odd and even section
    ll mid = (n + 1) / 2;
    if(k <= mid){
        // position k is within odd numbers section
        result = 2 * k - 1;
    }
    else{
        // position k is within even numbers section
        result = 2 * (k - mid);
    }
    
    cout << result << endl;
    return 0;
}
