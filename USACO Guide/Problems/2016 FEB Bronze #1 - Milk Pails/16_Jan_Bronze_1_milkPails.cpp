#include <bits/stdc++.h> 

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int x, y, m;

    freopen("pails.in", "r", stdin);
    scanf ("%d %d %d", &x, &y, &m); 

    int sum = 0;
    
    for (int i = 0; i <= m / x; i++) {
        for (int j = 0; j <= m / y; j++) {
            int current = i * x + j * y;
            if (current <= m) {
                sum = max(sum, current);
            }
        }
    }

    freopen("pails.out", "w", stdout);
    printf("%d\n", sum);

    return 0;
}