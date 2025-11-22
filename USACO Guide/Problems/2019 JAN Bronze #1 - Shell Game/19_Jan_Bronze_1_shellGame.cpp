#include <iostream>
#include <fstream> // 파일 입출력을 위한 헤더 파일
#include <string>  // 문자열을 사용하기 위한 헤더 파일
#include <vector>  // 벡터(동적 배열)를 사용하기 위한 헤더 파일
#include <algorithm> // min, max 함수를 사용하기 위한 헤더 파일

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    freopen("shell.in", "r", stdin);
    int n;
    scanf("%d", &n);

    // 초기 Vector 구성
    vector<int> shells(3);
    for (int i = 0; i < 3; i++) {
        shells[i] = i;
    }


    vector<int> counter(3);
    for (int i = 0; i < n; i++){
        int a, b, g;
        scanf("%d %d %d", &a, &b, &g);
        a--, b--, g--;
        swap(shells[a], shells[b]);
        counter[shells[g]]++;
    }

    freopen("shell.out", "w", stdout);
	printf("%d\n", std::max({counter[0], counter[1], counter[2]}));

    return 0;
}