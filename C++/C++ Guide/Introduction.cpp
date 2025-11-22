#include <iostream>
#include <algorithm>
// cstdlib = c standard library, algorithm = 알고리즘 (Library), sort 등 포함
// io = input output, iostream = input output stream (Library), cin cout 쓰고 싶을시 include 해야함

using namespace std;
// 원래는 std::cout, std::cin 이렇게 써야하는데 std::를 안써도 되게 해줌
// 대형 프로젝트는 namespace 안쓰는게 좋음, 충돌 일어날 수도 있음

void print();
void print(std::string s);
template <class T>
T mint(T x, T y);
// 함수 호출 역시 밖에서

int main(){
    cin.tie(NULL);
    // cin과 cout의 묶음을 해제
    // 속도 향상에 도움됨

    ios::sync_with_stdio(false);
    // C++ 표준 입출력과 C 표준 입출력의 동기화를 해제
    // 속도 향상에 도움됨

    cout << "Hello World" << "\n";
    // endl = 줄바꿈 + 버퍼 비우기, \n = 줄바꿈
    // endl은 버퍼 비우기 때문에 속도 느려짐, \n 추천
    // 시간이 10배에서 20배 정도 차이가 날 수 있음
    
    int A[] = {1, 2, 3, 4, 5};
    sort(A, A + 5);
    sort(A, A+5, greater<int>());
    // sort(시작점, 끝점)
    // greater<int>() = 내림차순 정렬

    cout << "String" << 5 << ' ' << 3.14 << "\n";
    // cout에서 다양한 type 프린트 가능
    // ' '로 space 직접 넣어 주어야 함.

    /*
    여러줄 주석은 이렇게!

    \ooo -> 8진수 (ooo를 바꾸면 8진수로 나옴)
    \xhh -> 16진수 (hh를 바꾸면 16진수로 나옴)

    "String은 큰 따옴표로 감싸기"
    "Char (한 byte chracter)는 한 따옴표로 감싸기"
    */

    cout << 10 << '\n';
    // 일반 10

    cout << 010 << '\n';
    // 0을 앞에 붙이면 8진수 출력

    cout << 0x10 << '\n';
    // 0x를 붙이면 16진수 출력

    int a;
    // declaration -> 변수의 값을 넣진 않지만 type으로 메모리 할당
    // 한 번 더 delcaration 할 수 없음

    a = 3.14;
    // int type에 double을 넣어도 되나 오류가 뜸
    // 소수점 아래는 버려짐 (3.14 -> 3)
    // declaration과 동시에 값을 넣을 수도 있음 (int a = 3.14;)

    double b;
    // double은 소수형
    
    char c;
    // char은 문자형 (한 글자)

    string d;
    // string은 문자열형 (여러 글자)
    // Java와 다르게 string은 기본형이 아님, include 필요
    
    bool f;
    // bool은 true/false (1/0)
    // true, false 모두 소문자로 출력됨

    long g;
    // long은 int보다 큰 정수형
    
    const double pi = 3.14;
    // const = constant (상수)
    // 상수는 값이 변하지 않음, 재할당 불가

    int num = 1;
    num ++;
    // ++ = 1 증가
    num --; 
    // -- = 1 감소

    int x = 0;
        while (cnt <= 10) {
            if (cnt == 6)
                break;
            cnt++;
        }
    
    y = ++x;
    cout << y << '\n';
    // 2가 출력됨, x가 먼저 1 증가하고 y에 할당됨

    num <<= 2;
    num >>= 2;
    // <<= = num = num << 2 (num을 2비트 왼쪽으로 시프트)
    // >>= = num = num >> 2 (num을 2비트 오른쪽으로 시프트)

    double newDnum = 3.14;
    cout << (int)newDnum << '\n';
    // (type) = type casting (형 변환)
    // double -> int로 형 변환, 소수점 아래 버림

    int num1 = 5;
    int num2 = 4;
    double div = num1 / num2;
    cout << div << '\n';
    // 정수 / 정수 = 정수 (소수점 아래 버림)
    // 1.0이 출력됨
    // 1.0을 double로 casting 했기에

    if (5 > 3){
        cout << "5 is greater than 3" << '\n';
    }
    else if (5 == 3){ // 파이썬과 다르게 elif를 elseif라 작성
        cout << "5 is equal to 3" << '\n';
    }
    else {
        cout << "5 is less than 3" << '\n';
    }

    if (false)
        cout << "False!" << '\n';
        cout << "hello" << '\n';
    // if, else 뒤에 중괄호({})를 안쓰면 바로 다음 한 줄만 if, else에 속함

    int res;
    cin >> res;
    switch (res++) // switch문은 case마다 break;를 넣어줘야 함
    {
    case 1:
        cout << 1;
        break;
    case 2:
        cout << 2;
        break;
    }

    // and -> &&
    // or -> ||
    // not -> !

    }
    // 삼항 연산자 (조건) ? 참일 때 : 거짓일 때

    for (int i = 0; i < 5; i++){ // i는 로컬변수, global 변수 i와 다름
        cout << i << ' ';
    }
    // for (초기값; 조건; 증감식)

    int cnt = 0;
    while (cnt <= 10) {
        if (cnt == 6)
            break;
    }
        cnt++;
    // while (조건) {실행문}
    // break = 반복문 탈출

    int fordo = 0;
    do {
        cout << fordo;
        fordo++;
    } while (fordo < 5);   
    // do {실행문} while (조건);
    // 무조건 한 번은 실행 후 조건 검사

    print("string");
    // 함수 호출

    mint (3, 5);
    mint (3.14, 2.72);

    double recur(double a = 0) {
        if (a > 10) return a;
        return recur(a + 1);
    }

    inline int min(int x, int y) {
        if (x<y) return x;
        else return y;
    }
    // inline = 인라인 함수 (컴파일러에게 함수 코드를 호출 지점에 삽입하도록 요청)
    // 인라인 함수는 코드가 짧을 때 사용, 함수 호출 오버헤드 줄임
    // 코드가 길면 오히려 성능 저하


    int n;
    cin >> n;
    cout << n << '\n';
    int arr[n]{ // 길이 지정 필요
        int temp;
        cout << "Enter number: ";
        cin >> temp;
        arr[i] = temp;
    }

    int adress = 3;
    cout << adress << '\n';
    cout <<&adress << '\n';
    // & = 주소 연산자 (address operator)
    // 16진수로 저장



    return 0;
    // main 함수의 return type은 int, 0을 반환해야 함
}

void print() {
    cout << "Function" << '\n';
}

void print(string s)
{
    cout << s << '\n';
}
// 함수 정의 (main 함수 밖에서)

template <class T>
T mint(T x, T y) {
    if (x<y) return x;
    else return y;
}
// template = 템플릿 (일종의 매크로)
// 함수의 type을 미리 정하지 않고 호출 시에 결정