#include <bits/stdc++.h> 

using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////
// 2,10 진수간의 상호변환
//////////////////////////////////////////////////////////////////////////////////////////

// 정수 부분 10진수 -> 2진수 변환
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

// 소수 부분 10진수 -> 2진수 변환
void decimalToBinaryForFraction(double n, int cnt){
    while (n!=0 && cnt < 10) { // 소수점 아래 10자리까지만 출력

        n *= 2;

        if (n >= 1){
            cout << 1;
            n -= 1;
        }
        else{
            cout << 0;
        }

        cnt++;
    }
}

// 2진수 -> 10진수
int binaryToDecimal(string binaryStr) {
    int decimalValue = 0;
    int base = 1; // 2의 0제곱

    for (int i = binaryStr.length() - 1; i >= 0; i--) {
        if (binaryStr[i] == '1') {
            decimalValue += base;
        }
        base *= 2; // 다음 자리수로 이동 (2의 제곱 증가)
    }

    return decimalValue;
}

//////////////////////////////////////////////////////////////////////////////////////////
// 8,10 진수간의 상호변환
//////////////////////////////////////////////////////////////////////////////////////////

// 10진수 -> 8진수 / 16진수
// 8진수 출력 형식은 %o (소문자 o) 만 사용 가능
/*
#include <cstdio>

int main() {

  // 10진수 156을 8진수로 출력
  printf("%o", 156); // 234

  // 10진수 156을 16진수로 출력 
  printf("%X", 156); // 9C (대문자)
  printf("%x", 156); // 9c (소문자)
}
*/

// 8진수 -> 10진수
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


//////////////////////////////////////////////////////////////////////////////////////////
// 2, 16 진수간의 상호변환
//////////////////////////////////////////////////////////////////////////////////////////

// 2진수 -> 16진수
string binaryToHexadecimal(string binaryStr) {
    string hexStr = "";
    int decimalValue = 0;
    int base = 1; // 2의 0제곱

    // 4자리씩 끊어서 16진수로 변환
    for (int i = binaryStr.length() - 1; i >= 0; i -= 4) {
        decimalValue = 0;
        base = 1;

        for (int j = 0; j < 4; j++) {
            if (i - j >= 0 && binaryStr[i - j] == '1') {
                decimalValue += base;
            }
            base *= 2;
        }

        if (decimalValue < 10) {
            hexStr = char(decimalValue + '0') + hexStr;
        } else {
            hexStr = char(decimalValue - 10 + 'A') + hexStr; // 대문자 A-F
        }
    }

    return hexStr;
}

// 16진수 -> 2진수
string hexadecimalToBinary(string hexStr) {
    string binaryStr = "";

    for (char ch : hexStr) {
        int decimalValue;

        if (ch >= '0' && ch <= '9') {
            decimalValue = ch - '0';
        } else if (ch >= 'A' && ch <= 'F') {
            decimalValue = ch - 'A' + 10;
        } else if (ch >= 'a' && ch <= 'f') {
            decimalValue = ch - 'a' + 10;
        } else {
            continue; // 유효하지 않은 문자 무시
        }

        for (int i = 3; i >= 0; i--) {
            binaryStr += ((decimalValue & (1 << i)) ? '1' : '0');
        }
    }

    return binaryStr;
}

//////////////////////////////////////////////////////////////////////////////////////////
// 2, 8 진수간의 상호변환
//////////////////////////////////////////////////////////////////////////////////////////

// 2진수 -> 8진수
string binaryToOctal(string binaryStr) {
    string octalStr = "";
    int decimalValue = 0;
    int base = 1; // 2의 0제곱

    // 3자리씩 끊어서 8진수로 변환
    for (int i = binaryStr.length() - 1; i >= 0; i -= 3) {
        decimalValue = 0;
        base = 1;

        for (int j = 0; j < 3; j++) {
            if (i - j >= 0 && binaryStr[i - j] == '1') {
                decimalValue += base;
            }
            base *= 2;
        }

        octalStr = char(decimalValue + '0') + octalStr;
    }

    return octalStr;
}

// 8진수 -> 2진수
string octalToBinary(string octalStr) {
    string binaryStr = "";

    for (char ch : octalStr) {
        int decimalValue = ch - '0'; // 문자형 숫자를 정수형 숫자로 변환

        for (int i = 2; i >= 0; i--) {
            binaryStr += ((decimalValue & (1 << i)) ? '1' : '0');
        }
    }

    return binaryStr;
}