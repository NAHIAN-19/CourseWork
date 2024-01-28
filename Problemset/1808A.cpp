#include <iostream>
#include <algorithm>
using namespace std;

int getDigitDiff(int x) {
    int mx = -1, mn = 100;
    while (x) {
        mx = max(mx, x % 10);
        mn = min(mn, x % 10);
        x /= 10;
    }
    return mx - mn;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;

        int ans = l;
        int maxDiff = getDigitDiff(l);
        if (maxDiff < 9) {
            for (int i = l + 1; i <= r; i++) {
                int diff = getDigitDiff(i);
                if (diff > maxDiff) {
                    ans = i;
                    maxDiff = diff;
                    if (maxDiff == 9) {
                        break;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
