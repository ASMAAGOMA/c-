#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int minMoves(string s) {
    int round = 0;
    int squar = 0;
    int reg = 0;
    for (char c : s) {
        if (c == '(') {
            round++;
        }
        else if (c == ')'){
            if (round > 0) {
                round --;
                reg++;
            }
        }
        else if (c == '[') {
            squar++;
        }
        else if (c == ']'){
            if (squar > 0) {
                squar --;
                reg++;
            }
        }
}
    return reg;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        cout << minMoves(s) << endl;
    }

    return 0;
}
