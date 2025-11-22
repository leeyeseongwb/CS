#include <bits/stdc++.h> 

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int x, y, z;
    cin >> x >> y >> z;

    if ((x > y) == (y > z)) cout << "True" << "\n";
    else cout << "False" << "\n";
}