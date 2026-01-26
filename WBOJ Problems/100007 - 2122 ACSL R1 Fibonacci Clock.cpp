#include <bits/stdc++.h> 

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int h = 0;
    int m = 0;
    int s = 0;

    string userIn;
    cin >> userIn;

    int size[5] = {1, 1, 2, 3, 5};
    
    for (int i = 0; i < 5; i++){
        if (userIn[i] == 'R' || userIn[i] == 'Y' || userIn[i] == 'M') h += size[i];
        if (userIn[i] == 'G' || userIn[i] == 'Y' || userIn[i] == 'C') m += size[i];
        if (userIn[i] == 'B' || userIn[i] == 'M' || userIn[i] == 'C') s += size[i];
    }
    m *= 5;
    s *= 5;

    if (s >= 60) {
        m += s / 60;
        s %= 60;
    }
    if (m >= 60) {
        h += m / 60;
        m %= 60;
    }
    if (h >= 12) {
        h %= 12;
    }

    printf("%02d:%02d:%02d",h,m,s);

    
}