#include <iostream>
#include <algorithm>

using namespace std;

// ------------------ Swap -----------------
void swapWrong(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    // 값이 바뀌지 않음
}

void swapRight(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    // 값이 바뀜
    // 포인터를 사용하여 주소에 접근, 값을 바꿈
}
// ----------------------------------------

// ------------------ Swap Using Reference ------------------
void swapReference(int& x, int& y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}
// ----------------------------------------------------------

int main(){
    int adress = 3;
    cout << adress << '\n';
    cout <<&adress << '\n'; 
    // & = 주소 연산자 (address operator)
    // &변수명 = 주소값
    // 16진수로 저장

    int* pA;
    // int *pA; 도 가능
    // int* pA, pB; -> pB는 int형 변수
    // int *pA, *pB; -> pB도 int형 포인터 변수
    // cout << pA << '\n'; // 가르키는 주소가 없기에 쓰레기 값 출력

    pA = &adress;
    cout << pA << '\n';
    // 포인터 변수 선언, 주소 저장
    
    cout << *pA << '\n';    
    // 포인터 변수의 주소에 저장된 값 출력

    // ----------------- Swap -----------------
    int a = 3;
    int b = 5;
    cout << "Swap 원래 변수 값: " << a << ' ' << b << '\n';

    swapWrong(a, b);
    cout << "swapWrong 실행 이후 변수 값: " << a << ' ' << b << '\n';

    swapRight(&a, &b);
    cout << "swapRight 실행 이후 변수 값: " << a << ' ' << b << '\n';

    swapReference(a,b);
    cout << "swapReference 실행 이후 변수 값: " << a << ' ' << b << '\n';
    // ----------------------------------------

    // ----------------- Reference -----------------
    int a1;
    int& rA = a1;

    /*
    int c;
    int& rC;
    rC = c;
    -> declaration과 initialization은 seperate 될 수 없음
    */
   // -----------------------------------------------
}