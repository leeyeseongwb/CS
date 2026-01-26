#include <bits/stdc++.h> 

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> numbers(n);

    int sumOfNumbers = 0;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        numbers[i] = num;
        sumOfNumbers += num;
    }

    double average = (double) sumOfNumbers / n;

    int cnt;
    for (int num : numbers){
        if (num > average) cnt++;
    }

    cout << cnt;

}