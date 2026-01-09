#include <iostream>
#include <fstream> // 파일 입출력을 위한 헤더 파일
#include <string>  // 문자열을 사용하기 위한 헤더 파일
#include <vector>  // 벡터(동적 배열)를 사용하기 위한 헤더 파일
#include <algorithm> // min, max 함수를 사용하기 위한 헤더 파일

using namespace std;

const int numBucket = 3;
const int totalOperation = 100;

int main(){
    freopen("mixmilk.in", "r", stdin);

    vector<int> amount(numBucket);
    vector<int> capacity(numBucket);

    for (int i = 0; i < numBucket; i++) {
        scanf("%d %d", &capacity[i], &amount[i]);
    }

    for (int i = 0; i < totalOperation; i++) {
        int bucket1 = i % numBucket;
        int bucket2 = (i + 1) % numBucket;

        int amountPour = min(amount[bucket1], capacity[bucket2] - amount[bucket2]);
        amount[bucket1] -= amountPour;
        amount[bucket2] += amountPour;
    }

    freopen("mixmilk.out", "w", stdout);
    for (int i = 0; i < numBucket; i++) {
        printf("%d\n", amount[i]);
    }
}