#include <bits/stdc++.h> 

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<string> userInput; 

    for (int i = 0; i < n; i++){
        string input;
        cin >> input;

        if (count(userInput.begin(), userInput.end(), input) == 0){
            userInput.push_back(input);
        }
    }

    sort(userInput.begin(), userInput.end());
    sort (userInput.begin(), userInput.end(), [](const string &a, const string &b) { // Lambda function for sorting by length
        return a.length() < b.length(); // Compare lengths
    });

    for (const auto& word : userInput) {
        std::cout << word << "\n";
    }
}