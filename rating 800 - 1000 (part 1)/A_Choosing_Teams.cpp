#include <iostream>
using namespace std;

void solve(){
    int n, x;
    cin >> n >> x;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int teams = 0;
    for(int i = 0; i < n; i++){
        if((arr[i] + x) <= 5){
            teams++;
        }
    }
    
    cout << teams / 3 << endl;

}

int main(){
    solve();
}
