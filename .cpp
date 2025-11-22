#include<vector>

std::vector<std::pair<int, int>> arr;

// 코드 있음

std::sort(arr.begin(), arr.end(),
    [](const std::pair<int, int>& left, const std::pair<int, int>& right) {
        return left.second < right.second;
    }
);