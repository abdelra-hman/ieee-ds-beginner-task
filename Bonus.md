## 1- codeforces problem

``cpp
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

## 2-What is the difference between Regression and Classification.
-
regression: predicts a continuous number works with linear regression  polynomial regression 
classification: Predicts a discrete category/label
works with logistic regression / decision Trees
