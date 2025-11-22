#include <iostream>
#include <algorithm>
using namespace std;

void print() {
    cout << "print\n";
}
void print(string s);

int max(int x, int y) {
    if (x>y) return x;
    else if (x<y) return y;
    else return -1;
}
double max(double x, double y) {
    if (x>y) return x;
    else if (x<y) return y;
    else return -1;
}
// double max(int x, int y) {
//     if (x>y) return x;
//     else if (x<y) return y;
//     else return -1;
// }

template <class T>
T mint(T x, T y) {
    if (x<y) return x;
    else return y;
}

void hi() {
    return;
}

double recur(double a=0) {
    if (a >= 2) return a;
    return recur(a+1);
}

inline int min(int x, int y) {if (x<y) return x; else return y;}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cout << "Sentence";                                        // one line
    cout << "Switch Line" << endl;
    cout << "This is better" << '\n';
    cout << "String " << 5 << ' ' << 3.14 << '\n';
    /*

    \n
    \t
    \v
    \\
    \'
    \"
    \ooo
    \xhh

    */

    cout << 10 << '\n';
    cout << 010 << '\n';
    cout << 0x10 << '\n';

    int a;
    int b = 2;

    double c;
    char d;
    string e;
    bool f;
    long g;

    int h,i;
    b = 5;
    // int a = 3; - already declared
    cout << b << '\n';
    a = 3.14; // 3
    cout << a << "\n";

    cin >> d;
    cin >> c >> f;

    const double pi = 3.141592;
    // pi = 3.14 

    int num = 1;
    num = num + 1;
    num += 1;
    num -= 1;
    num *= 1;
    num /= 1;
    num %= 1;
    num++;
    num--;

    int x = 0;
    int y = 0;
    y = x++;
    cout << y << '\n';
    y = 0;
    x = 0;
    y = ++x;
    cout << y << '\n';

    num <<= 2;
    num >>= 2;

    cout << sizeof(a) << '\n';
    cout << sizeof(int) << '\n';
    cout << sizeof(long) << '\n';

    int inum = 3;
    double dnum = inum;
    double newDnum = 3.14;
    int newInum = newDnum;

    inum = (int)newDnum;
    
    int num1 = 5;
    int num2 = 4;
    double div = num1/num2;
    cout << div << '\n';

    double que = (double)(3/4) + 0.25;
    cout << que << '\n';

    double ans = (double)3 / 4 + 0.25;
    cout << ans << '\n';

    if (5>3) {
        cout << "asdf";
        cout << '\n';
    }
    else if (5<3) {
        cout << '\n';
    }
    else if (5 == 3) {
        cout << '\n';
    }
    else {
        cout << '\n';
    }

    if (false) 
        cout << "hi";
        cout << "hello" << '\n';

    int res;
    cin >> res;
    switch (res)
    {
    case 1:
        cout << 1;
        break;
    case 2:
        cout << 2;
        cout << '\n';
        break;
    default:
        break;
    }

    switch (res++) {
        case 2:
            cout << 2;
        case 3:
            cout << 3;
        default:
            break;
    }

    if (true && true)
        cout << "and" << '\n';
    if (true || false)
        cout << "or" << '\n';
    if (!(false))
        cout << "not" << '\n';

    char var = (res == 1) ? 'A' : 'B';  // condition ? (true->result) : (false->result)

    for (int i = 0; i < 10; i++) {
        cout << i;
    }
    cout << '\n';
    for (int j = 0; j < 10; ++j) {
        cout << j;
    }
    cout << '\n';

    int cnt = 0;
    while (cnt <= 10) {          // check condition before run
        if (cnt == 6) {
            break;
        }
        cnt++;
        cout<< "hi" << '\n';
    }

    for (int i=0; i<10;i++) {
        if (i==5) continue;
        cout << i;
    }
    cout << '\n';

    int fordo = 0;

    do {                        // check condition after run
        cout << fordo;
        fordo++;
    } while (fordo<=5);

    print();
    print("asdf");
    int maxnum = max(5,3);
    max(3,7);

}

void print(string s) {
    cout << s << '\n';
}
