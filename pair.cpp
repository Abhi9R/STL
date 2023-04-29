// Reducing the array

#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main() {
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    int* a = new int[n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
        v.push_back(make_pair(a[i], i));
    }

    sort(v.begin(), v.end());
    int* b = new int[n];
    int i = 0;
    for(auto it : v) {
        b[it.second] = i;
        i++;
    }

    for(int i=0;i<n;i++) {
        cout << b[i] << " ";
    } cout << endl;
    return 0;
}