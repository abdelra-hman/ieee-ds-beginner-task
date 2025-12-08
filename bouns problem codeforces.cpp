#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int _max = *max_element(v.begin(), v.end());
        int _min = *min_element(v.begin(), v.end());

        cout << _max - _min << endl;
    }
    return 0;
}