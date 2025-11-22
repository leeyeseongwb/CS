#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <algorithm>
#include <stdexcept>    // for out_of_range
#include <cstdlib>      // for malloc, calloc, realloc, free
using namespace std;

typedef unsigned long int Count;
// typedef : unsigned long int -> Count

int globalVar;
int test = 0;
int a = 0;

void var();
int* pointer();

void strToInt();
void caseForChar();
void aboutStrIpt();
void pointerForTwoDemArr();
void pointerArr();
void aboutVector();
void aboutStack();
void dynamicAllocation();
void enumType();
void escape();
void malloc();

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    /*
    int localVar;
    int test = 1;
    cout << test << '\n';
    
    test++;
    cout << test << '\n';
    
    ::test++;
    cout << ::test << '\n';

    for (int i = 0; i < 5; i ++) {
        var();
        }

    int* pRes = pointer();

    Count num = 1;                  // same as "unsigned long int num = 1;"
    */
    
    aboutVector();

    return 0;
}

void var() {
    int b = 0;                      // from this function till the end of this function (create & delete)
    static int c = 0;               // local value but remains (from the start of the code and the end of the code)

    cout << "variables: " << a << ' ' << b << ' ' << c << '\n';

    a++;
    b++;
    c++;
}

// int* pointer() {
//     int p = 10;
//     int* pP = &p;
//     return pP;
// }
// 틀린 이유: 지역변수 p의 주소를 반환하는 것인데, 함수가 끝나면 p는 사라지기 때문에 잘못된 주소를 반환하게 된다.
// 해결방법: p를 static으로 선언하여 함수가 끝나도 사라지지 않도록 한다.

int* pointer() {
    static int p = 10;
    int* pP = &p;
    return pP;
    // 올바른 이유: 지역변수 p를 static으로 선언하여 함수가 끝나도 사라지지 않도록 하였기 때문에 올바른 주소를 반환하게 된다.
}


void strToInt() {
    char a = '1';
    cout << (int)a << '\n';
    // char to int : ASCII code가 출력됨
}

void caseForChar() {
    char swtest = 'A';
    switch (swtest) {
    case 'A':
        cout << "hi" << '\n';
        break;
    
    default:
        break;
    }
}

void aboutStrIpt() {
    string s1;
    cout << "input a sentence";
    getline(cin,s1);        // one line input | cin -> space = end
    cout << s1 << '\n';
}

void aboutVector() {
    vector<int> v;
    int tmp = 3;
    v.push_back(tmp); // add element to the end
    cout << v[0] << '\n';
    cout << v.at(0) << '\n'; //0번째 값의 값을 반환, 범위 체크
    cout << v.size() << '\n'; // size of vector 
    v[0] = 1;
    
    vector<int> v1;
    // Declares vector with given size
    // and fills it with a value
    vector<int> v2(3, 5);  // 5를 3개 생성

    for (int x : v2) { // for-each loop
        cout << x << ' ';
    }
    cout << '\n';

    // Initializes vector using initializer list
    vector<int> v3 = {1, 2, 3};

    for (int x : v3) {
        cout << x << ' ';
    }
    v3.insert(v3.begin() + 1, 4); // inserting 4 at 1st index
    //.begin()은 첫번째 원소, .end()는 마지막 원소의 다음 위치
    //.begin() + n : n번째 원소, 없을 경우 에러
    // 뒤에서 부터 n번째 원소 : .end() - n
    cout << v3.size() << '\n';

    v3.pop_back();
    // pop_back() : delete the last element

    v3.erase(find(v3.begin(), v3.end(), 4));
    // find()는 찾는 원소의 위치를 반환
    // erase()는 해당 위치의 원소를 삭제

    cout << v3.empty() << '\n';
    // empty() : return true if vector is empty (0, 1)

    vector<vector<int>> twoDemensionVector;
    vector<vector<int>> matrix(3,vector<int>(4,0));
    // 0이 4개 있는 vector를 3개 생성
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << '\n';
    }
}

void aboutStack() {
    stack<int> s;
    s.push(5);
    s.push(3);
    cout << s.top() << ' ';
    cout << s.size() << ' ';
    s.pop();
    cout << s.top() << ' ';
    stack<int> t;
    t.push(1);
    t.push(2);
    s.swap(t);
    cout << s.top() << ' ';
    cout << t.top() << ' ';
}

void pointerArr() {
    int a = 0;
    int* pA = &a;
    int b = 0;
    int* pB = &b;
    int* arr[] = {pA, pB};

    cout << arr[1];
}

void pointerForTwoDemArr() {
    int arr[2][3] = {{1,2,3},{4,5,6}};
    int* pT = arr[0];
    cout << *(*arr) << '\n';
    cout << *(pT) << '\n';
    cout << *(pT + 1) << '\n';
    // 
}

void dynamicAllocation() {
    // 동적 할당

    // pointer = new Type;
    // 프로그래머가 원하는 시점에 메모리를 할당하고 원하는 시점에 삭제할 수 있음

    int* pT; // 한 줄로 초기화도 가능
    pT = new int; // [새로운 메모리 생성]
    // new : 메모리를 할당하고 그 주소를 반환함
    // 따라서 주소를 사용해서 메모리에 접근해야 함
    *pT = 50;
    // delete : 메모리 삭제
    // delete 포인터이름;
    delete pT; // [메모리 삭제]
    // => 지역 변수는 함수가 실행되는 동안만 존재 | 전역 변수는 프로그램 시작부터 끝까지 존재 - 메모리 많이 사용
    // => 동적 할당은 메모리 사용량을 줄여줌

    // 배열 동적 할당
    // 포인터이름 = new 타입[크기];
    // delete[] 포인터이름;
    int* pArray;
    int n;
    cin >> n;
    pArray = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> pArray[i];
    }
    cout << pArray[0] << '\n';
}

void enumType() {
    // Enumerated Data Type
    // enum Name { test1, test2, test3 };
    enum Week {SUN, MON, TUE, WED, THU, FRI, SAT};  // made a new type (such as Int, String ...) that stores 식별자
    Week w;
    w = SUN;  // can subsitutde the value with the set ones;
    switch (w) {
        case SUN : cout << 's' << '\n'; break;
        case MON : cout << 'm' << '\n'; break;
        case TUE : cout << 't' << '\n'; break;
        default: cout << "what?" << '\n'; break;
    }
}

void escape() {
    int x = 7;
    try {
        if (x % 2 != 0) {
            throw -1; // throw an exception
        }
    }
    catch (int e) {
        cout << "Exception Caught: " << e << '\n';
    }

    int arr[1] = {1};
    try {
        cout << arr[5] << '\n';
    }
    catch (out_of_range e) {
        cout << e.what() << '\n'; // prints the exception message
    }

    try {
        int choice;
        cout << "Enter 1 for invalid argument, "
            << "2 for out of range: ";
        cin >> choice;

        if (choice == 1) {
            throw invalid_argument("Invalid argument");
        }
        else if (choice == 2) {
            throw out_of_range("Out of range");
        }
        else {
            throw "Unknown error";
        }

    }
    // executed when exception is of type invalid_argument
    catch (invalid_argument e) {
        cout << "Caught exception: " << e.what() << endl;
    }
    // executed when exception is of type out_of_range
    catch (out_of_range e) {
        cout << "Caught exception: " << e.what() << endl;
    }
    // executed when no matching catch is found
    catch (...) { // ... : catch all types of exceptions
        cout << "Caught an unknown exception." << endl;
    }
}

void malloc() {
    
    // malloc: allocate a single block of contiguous memory on the heap at runtime.
    // The memory allocated by malloc() is uninitialized, meaning it contains garbage values.
    int *ptr = (int *)malloc(20);
    // int *ptr = (int *)malloc(sizeof(int) * 5); // this is better
    // int 하나에 4byte, 5개 할당 -> 20byte
    
    if (ptr == NULL) cout << "false";
    // 메모리가 꽉차서 만들지 못할 경우에는 NULL 반환
    
    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
        // assign values
    }
    for (int i = 0; i < 5; i++) {
        cout << ptr[i] << ' ';
    }

    // realloc : change its size
    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    
    
    // calloc: initializes the allocated memory to zero
    int *ptc = (int *)calloc(5,sizeof(int));

    if (ptc == NULL) cout << "false"; // returns NULL if no memory available
    
    for (int i = 0; i < 5; i++) {
        cout << ptr[i] << ' ';
    }

    // delete from memory
    free(ptr);
    free(ptc);
}
