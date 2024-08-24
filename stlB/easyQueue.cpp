#include <cstdio>
#include <queue>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    queue<long long> q;
    
    for (int i = 0; i < t; i++) {
        int query;
        scanf("%d", &query);
        
        switch(query) {
            case 1: {
                long long n;
                scanf("%lld", &n);
                q.push(n);
                break;
            }
            case 2: {
                if (!q.empty()) {
                    q.pop();
                }
                break;
            }
            case 3: {
                if (q.empty()) {
                    printf("Empty!\n");
                } else {
                    printf("%lld\n", q.front());
                }
                break;
            }
        }
    }
    
    return 0;
}
