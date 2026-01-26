#include <bits/stdc++.h> 

using namespace std;

void decimalToBinaryForInteger(int n){
    stack<int> my_s;

    while (n!=0) {

        if (n % 2 == 1){
            my_s.push(1);
        }
        else{
            my_s.push(0);
        }

        n /= 2;
    }
    
    while (!(my_s.empty())){
        cout << my_s.top();
        my_s.pop();
    }

}

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    decimalToBinaryForInteger(n);
}