#include <bits/stdc++.h> 

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, k;
    freopen("diamond.in", "r", stdin);
    scanf ("%d %d", &n, &k);
    
    vector<int> diamonds(n);
    for (int i = 0; i < n; i++) {
        scanf ("%d", &diamonds[i]);
    }
    sort(diamonds.begin(), diamonds.end());

    // BFS / Brute-force search for the maximum valid display case
    int max_diamonds = 0;
    for (int i = 0; i < n; i++) {
        int current_max_count = 0;
        for (int j = i; j < n; j++) {
            if (diamonds[j] - diamonds[i] <= k) {
                current_max_count++;
            } else {
                break; 
            }
        }
        max_diamonds = max(max_diamonds, current_max_count);
    }

    freopen("diamond.out", "w", stdout);
    printf("%d\n", max_diamonds);

    return 0;
}

/*
#include <bits/stdc++.h> 

using namespace std;

int main(){
    // Standard competitive programming optimizations
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, k;
    freopen("diamond.in", "r", stdin);

    // 1. Read input N and K
    if (!(cin >> n >> k)) return 0;

    // 2. Read all diamond sizes
    vector<int> diamonds(n);
    for (int i = 0; i < n; i++) {
        cin >> diamonds[i];
    }
    
    // *** THE CRITICAL FIX ***
    // 3. Sort the diamond sizes. The optimal set will always be a contiguous subarray
    sort(diamonds.begin(), diamonds.end());

    int max_diamonds = 0;

    // 4. Brute-force search for the maximum valid display case
    //    We iterate through every diamond to be the smallest (left boundary, 'i')
    for (int i = 0; i < n; i++) {
        int current_max_count = 0;
        for (int j = i; j < n; j++) {
            if (diamonds[j] - diamonds[i] <= k) {
                current_max_count = j - i + 1;
            } else {
                break; 
            }
        }
        max_diamonds = max(max_diamonds, current_max_count);
    }

    // 5. Output the result (to the console for testing)
    // The USACO problem usually requires output to a file, so use freopen or ofstream for final submission
    cout << max_diamonds << "\n";
    
    return 0;
}

*/