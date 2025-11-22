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

    for (int i = 0; i < n; i++) {
        int b_from, b_to;
        string num_str;
        cin >> b_from >> b_to >> num_str;
        
        if (num_str == "0") {
            cout << "0\n";
            continue;
        }

        // 10진수 -> n진수
        if (b_from == 10) {
            if (b_to == 2) { decimalToBinaryForInteger(stoi(num_str)); cout << '\n'; }
            if (b_to == 8) { cout << oct << stoi(num_str) << dec << '\n'; }
            if (b_to == 16) { cout << uppercase << hex << stoi(num_str) << nouppercase << dec << '\n'; }
        }
 
        int decimalNumber;
        // 2진수 -> n진수
        if (b_from == 2) {
            decimalNumber = stoi(num_str, nullptr, 2);
            if (b_to == 8) { cout << oct << decimalNumber << dec << '\n'; }
            if (b_to == 16) { cout << uppercase << hex << decimalNumber << nouppercase << dec << '\n'; }
            if (b_to == 10) cout << decimalNumber << '\n';
        }
 
        // 8진수 -> n진수
        if (b_from == 8) {
            decimalNumber = stoi(num_str, nullptr, 8);
            if (b_to == 2) { decimalToBinaryForInteger(decimalNumber); cout << '\n'; }
            if (b_to == 10) cout << decimalNumber << '\n';
            if (b_to == 16) { cout << uppercase << hex << decimalNumber << nouppercase << dec << '\n'; }
        }
 
        // 16진수 -> n진수
        if (b_from == 16) {
            decimalNumber = stoi(num_str, nullptr, 16);
            if (b_to == 2) { decimalToBinaryForInteger(decimalNumber); cout << '\n'; }
            if (b_to == 10) cout << decimalNumber << '\n';
            if (b_to == 8) { cout << oct << decimalNumber << dec << '\n'; }
        }
    }
}