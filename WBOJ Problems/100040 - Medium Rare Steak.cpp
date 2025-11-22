#include <bits/stdc++.h> 

using namespace std;

bool isPrime(int a){
    if (a != 2 && a % 2 == 0 || a == 1) {
        return false;
    }
    for (int i = 3; i <= sqrt(a) + 1; i += 2) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    static int money;
    cin >> money;

    int day;
    cin >> day;


    for (int i = 2; i <= 100000000000; i++) {
        if (day == 0) break;
        if (isPrime(i)){
            money += i;
            day --;
        }
    }

    cout << money;

}