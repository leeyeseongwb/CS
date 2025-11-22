#include <iostream>
#include <algorithm>
#include <cstring> // string functions

using namespace std;

int main(){
    //type arrayName [length of array];
    //type arrayName [length of array] = {_, _, _, _};
    
    int test[5];
    test[0] = 0;
    test[1] = 1;
    test[2] = 2;
    test[3] = 3;
    test[4] = 4;

    int example[5] = {1,2,3,4,5};
    int able[] = {1,2,3};
    // 배열 크기를 지정하지 않고도 initialize 가능

    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i<2; i++) {
        cout << "Enter the elements: ";
        cin >> test[i];
    }
    sort (test, test+n);

    int twoDAray[2][3]; // 3크기의 리스트가 두개가 있음
    for (int i =0; i <2; i++){
        for (int j = 0; j<3; j++){
            cout << "Enter the elements (3크기의 리스트 2개): ";
            cin >> twoDAray[i][j];
        }
    }
    cout << twoDAray[1][2] << '\n';

    for (int i: example){
        cout << i << ' ';
    }
    cout << '\n';

    cout << example << '\n'; // 배열의 이름은 배열의 첫번째 원소의 주소를 가리킴
    cout << &example[0] << '\n';
    cout << &example[1] << '\n';
    cout << *example << '\n'; // *example == example[0]

    // pointer arithmetic
    cout << *(example + 1) << '\n';  // example + 1 == &example[1]
    cout << *(example + 1) << '\n';  // example + 1 == &example[1]

    char str[6] = {"H", "e", "l", "l", "o", '\0'}; // \0 : null character
    char hi[6] = "Hello"; // 자동으로 null character가 들어감
    // []안의 숫자는 문자열의 길이 + 1 (null character)
    /* Error
    char test[6];
    test = "Hello"; // 배열은 상수이기 때문에 이렇게 할당 불가
    */
    cout << str << '\n';

    cout << hi << '\n'; // print string
    const char* pS = hi;
    cout << pS << '\n';
    cout << *pS << '\n';
    pS = "CS!";
    cout << pS << '\n';
    char sen[100];
    cin >> sen; // space or enter키 전까지 입력받음
    cout << sen << '\n';
    for (int i = 0; str[1] != '\0'; i++){
        cout << str[i] << '*';
    }
    cout << '\n';
    cout << strlen(str) << '\n'; // string length
    strcat(str, " World"); // string concatenate
    cout << str << '\n';
    strcpy(hi, "12345"); // string copy, fits in hi[6] including null terminator
    cout << hi << '\n';
    cout << str << ' ' << hi << '\n';
    

    return 0;
}


double getAvg(int* pT) {
    double sum = 0;
    for (int i = 0; i<5; i++){
        sum += *(pT + i);
    }
    return sum/5;
}