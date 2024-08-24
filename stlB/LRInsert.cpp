#include <iostream>
#include <string>
#include <deque>
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(0)

using namespace std;
/**
 // code generated time limit exceeded
int main() {
    fast;
    int n;
    cin >> n;
    string s;
    cin >> s;

    deque<int> deq;
    deq.push_back(0); // Start with the initial element

    auto current = deq.begin(); // Iterator pointing to the initial position

    for (int i = 1; i <= n; ++i) {
        if (s[i - 1] == 'L') {
            current = deq.insert(current, i); // Insert at the current position
        } else if (s[i - 1] == 'R') {
            current = deq.insert(next(current), i); // Insert at the position after current
        }
    }

    for (int i : deq) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
*/
int main() {
    fast;
    int n;
    cin >> n;
    deque<int> deq;
    deq.push_front(n);
    string s; 
    cin >> s;
    for (int i = n - 2; i >= -1; i--) {
        if (s[i + 1] == 'L') {
            deq.push_back(i+1);
        } else{
            deq.push_front(i+ 1);
        }
    }

    for (int i : deq) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}