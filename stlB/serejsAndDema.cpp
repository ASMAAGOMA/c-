#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> cards(n);
    for (int i = 0; i < n; ++i) {
        cin >> cards.at(i);
    }
    
    int serejaScore = 0, dimaScore = 0;
    int left = 0, right = n - 1;
    bool serejaTurn = true;
    
    while (left <= right) {
        if (cards.at(left) > cards.at(right)) {
            if (serejaTurn) {
                serejaScore += cards.at(left);
            } else {
                dimaScore += cards.at(left);
            }
            left++;
        } else {
            if (serejaTurn) {
                serejaScore += cards.at(right);
            } else {
                dimaScore += cards.at(right);
            }
            right--;
        }
        serejaTurn = !serejaTurn;
    }
    
    cout << serejaScore << " " << dimaScore << endl;
    
    return 0;
}