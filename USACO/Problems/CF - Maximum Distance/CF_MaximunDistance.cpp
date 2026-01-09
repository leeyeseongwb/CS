#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream> // string과 stream이 합쳐진 클래스
#include <math.h> // pow() 함수 사용을 위한 헤더

using namespace std;


int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;

    vector<int> x(n), y(n);

    for (int &t : x) { cin >> t; }
	for (int &t : y) { cin >> t; }

    int maxDistance = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j ++) {
            int distance = pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2);
            maxDistance = max(distance, maxDistance);
        }
    }

    cout << maxDistance << endl;
}