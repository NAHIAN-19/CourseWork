#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int c = 0,IMAX,IMIN;
 
    int MAX = *max_element(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        if (a[i] == MAX) {
            IMAX = i;
            c = c + i;
            break;
        }
    }
 
    int MIN = *min_element(a.begin(), a.end());
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == MIN) {
            IMIN = i;
            c = c + n - (i + 1);
            break;
        }
    }
 
    if (IMAX > IMIN) {
        cout << c - 1 << endl;
    } else {
        cout << c << endl;
    }
 
    return 0;
}
