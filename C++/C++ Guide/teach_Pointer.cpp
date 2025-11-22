#include <iostream>
using namespace std;


void swapWrong(int x, int y) {
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}

void swap1(int* pX, int* pY);
void swap2(int& pX, int& pY);

void test(const int& ex);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    int c;
    int* pA;
    // int *pA;             also work
    // int* pA, pB;         only pA is pointer; pB is a variable
    // int *pA, *pB;        both pA and pB are pointer
    // cout << pA;          cannot bc pA is not pointing anything
    a = 5;
    pA = &a;                // pA -> a
    cout << a << '\n';
    cout << pA << '\n';
    cout << *pA << '\n';    // the value of (address of pA)
    
    a = 10;
    
    cout << a << '\n';
    cout << pA << '\n';
    cout << *pA << '\n';

    *pA = 5;                // also affect 'a'
    
    cout << a << '\n';
    cout << pA << '\n';
    cout << *pA << '\n';

    pA = &c;                // can change the address of pointer

    // ----------------------------------------------

    int num1 = 2;
    int num2 = 3;
    swapWrong(num1,num2);                   // 가인수 | 실인수
    cout << num1 << ' ' << num2 << '\n';

    num1 = 2;
    num2 = 3;
    swap1(&num1,&num2);
    cout << num1 << ' ' << num2 << '\n';
    
    // -----------------------------------------------
    
    int b;
    int& rB = b;            // reference
    b = 50;
    cout << b << ' ' << rB << '\n';
    cout << &b << ' ' << &rB << '\n';
    rB =30;
    cout << b << ' ' << rB << '\n';
    cout << &b << ' ' << &rB << '\n';
    /*
    int c;
    int& rC;
    rC = c;                 // cannot seperate declaration and initialization
    */

    // ----------------------------------------------

    num1 = 2;
    num2 = 3;
    swap2(num1,num2);
    cout << num1 << ' ' << num2 << '\n';


    return 0;
}

void swap1(int* x, int* y) {
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}
void swap2(int& x, int& y) {
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}
void test(const int& ex) {
    // ex = 5;          // cannot change
    return;
}