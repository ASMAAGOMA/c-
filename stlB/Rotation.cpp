#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    string allPosRotation = s + s;
    if (allPosRotation.find(t) != string::npos) {
        cout << "Yes"<< endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
