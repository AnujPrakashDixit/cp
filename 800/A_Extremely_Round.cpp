#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long ans = 0;

        while (n > 9) {
            n /= 10;
            ans += 9;
        }

        cout << ans + n << endl;
    }

    return 0;
}
