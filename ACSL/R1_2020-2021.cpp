#include <bits/stdc++.h> 

using namespace std;

int octalToDecimal(string octalStr) {
    int decimalValue = 0;
    int base = 1; // 8의 0제곱

    for (int i = octalStr.length() - 1; i >= 0; i--) {
        int digit = octalStr[i] - '0'; // 문자형 숫자를 정수형 숫자로 변환
        decimalValue += digit * base;
        base *= 8; // 다음 자리수로 이동 (8의 제곱 증가)
    }

    return decimalValue;
}

int decimalToOctal (int n) {
    string octalStr = "";
    while (n > 0) {
        int remainder = n % 8;
        octalStr = to_string(remainder) + octalStr; // 나머지를 문자열 앞에 추가
        n /= 8;
    }
    return stoi(octalStr); // 최종 문자열을 정수로 변환하여 반환
}

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string n, d;
    int r;
    cin >> n >> d >> r;

    int decimalN = octalToDecimal(n);
    int decimalD = octalToDecimal(d);

    vector<int> finalRows;

    for (int i = 0; i < r; i++){
        for (int j = 0; j <= i; j++){

            if (i == r - 1){
                finalRows.push_back(decimalToOctal(decimalN));
            }

            decimalN += decimalD;
        }
    }

    int sum = 0;
    for (int val : finalRows){
        while (val > 0){
            sum += val % 10;
            val /= 10;
        }
    }

    cout << sum << "\n";

    return 0;
}