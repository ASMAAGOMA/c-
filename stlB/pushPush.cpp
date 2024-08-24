#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0)
using namespace std;
int main() {
    fast;
    int n;
    cin >> n;
    vector<int> a(n);
    deque<int> deq;
    bool t = false;
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
        if (t) {
            deq.push_front(a.at(i));
        } else {
            deq.push_back(a.at(i));
        }
        t = !t;
    }
    if (n % 2 == 1) {
        reverse(deq.begin(), deq.end());
    }
    for (const int& i : deq) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
