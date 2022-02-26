#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector <int>
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int check(int X[], int n) {
    for (int i = 0; i < n; i++) 
        if (X[i] != X[n - i - 1]) return 0;
    return 1;
}

void quayLui(int i, int n, int * X) {
    for (int val = 0; val <= 1; val++) {
        X[i] = val;
        if (i == (n - 1)) {
            if (check(X, n) == 1) {
                for (int j = 0; j < n; j++) {
                    cout << X[j] << " ";
                }
                cout << endl;
            }
        } else 
            quayLui(i + 1, n, X);
    }
}

int main() {
    faster;
    int n;
    cin >> n;
    int X[n + 5];
    quayLui(0, n, X);
}