#include <bits/stdc++.h> 

using namespace std;


int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    vector <long long> fibNum = {1, 1};

    int n;
    cin >> n;

    for (int i = 0; i < n - 2; i++){
        fibNum.push_back(fibNum[fibNum.size() - 2] + fibNum[fibNum.size() - 1]);
    }

    cout << fibNum[n - 1];
}