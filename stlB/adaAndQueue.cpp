#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    deque<long long> q;
    bool revTrack = false;
    
    for (int i = 0; i < t; i++) {
        string query;
        cin >> query;
        
        if (query == "back") {
            if (q.empty()) {
                cout << "No job for Ada?\n";
            } else {
                if (revTrack) {
                    cout << q.front() << "\n";
                    q.pop_front();
                } else {
                    cout << q.back() << "\n";
                    q.pop_back();
                }
            }
        } else if (query == "front") {
            if (q.empty()) {
                cout << "No job for Ada?\n";
            } else {
                if (revTrack) {
                    cout << q.back() << "\n";
                    q.pop_back();
                } else {
                    cout << q.front() << "\n";
                    q.pop_front();
                }
            }
        } else if (query == "reverse") {
            revTrack = !revTrack;
        } else if (query == "push_back") {
            long long n;
            cin >> n;
            if (revTrack) {
                q.push_front(n);
            } else {
                q.push_back(n);
            }
        } else if (query == "toFront") {
            long long n;
            cin >> n;
            if (revTrack) {
                q.push_back(n);
            } else {
                q.push_front(n);
            }
        }
    }
    
    return 0;
}
