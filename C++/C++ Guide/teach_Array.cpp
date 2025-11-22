#include <iostream>
#include <string.h>
// #include <algorithm>
using namespace std;

double avg(int t[]);
double getAvg (int* pT);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // type arrayName[length of array];
    // type arrayName[length of array] = {_ _ _ _};

    int test[5];
    test[0] = 0;
    test[1] = 1;
    test[2] = 2;
    test[3] = 3;
    test[4] = 4;
    // test[5] = 5;
    // cout << test[5];

    int example[5] = {1,2,3,4,5};
    int able[] = {1,2,3};           // also works _ size is decided based on value ; need to initialize
    
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i<n; i++) {
        cin >> test[i];
    }
    sort(test,test+n);              // sort(arrayName,arrayName + length of array);

    int twoDArray[2][3];
    for (int i = 0; i<2; i++) {
        for (int j = 0; j<3; j++) {
            cin >> twoDArray[i][j];
        }
    }
    cout << twoDArray[1][2] << '\n';
    
    for (int i: example) {
        cout << i << ' ';
    }
    cout << '\n';

    cout << example << '\n';
    cout << &example[0] << '\n';
    cout << &example[1] << '\n';
    cout << *example << '\n';

    cout << *(example + 2) << '\n';
    cout << *(&example[3] - 2) << '\n';

    int *pE2p = &example[2];
    int *pE3m = &example[3];

    cout << pE3m - pE2p << '\n';            // number of element between the array
    cout << *(++pE2p) << '\n';
    cout << *(--pE3m) << '\n';

    char str[6] = {'H','e','l','l','o','\0'};   // \0: NULL (The end of String) thus require str[len(str)+1]
    char hi[6] = "Hello";
    /* Error
    char test[6];
    test = "Hello";
    */
    cout << hi << '\n';  //print string
    char* pS = hi;
    cout << pS << '\n';
    pS = "CS!";
    cout << pS << '\n';
    char sen[100];
    cin >> sen;
    cout << sen << '\n';    // only the first letter
    for (int i = 0; str[i] != '\0'; i++) {
        cout << str[i] << '*';
    }
    cout << '\n';
    cout << strlen(sen) << '\n';
    strcat(str,pS);                     // combine str1 and str2 and store to str1
    strcpy(hi,"12345");                // change str1 into str2
    cout << str << ' ' << hi << '\n';

    return 0;
}

double avg(int t[]) {
    return 0;
}
double getAvg(int* pT) {
    double sum = 0;
    for (int i =0;i<5;i++) {
        sum += *(pT+i);
    }
    sum += pT[2];
    sum -= pT[2];
    return sum/5;
}