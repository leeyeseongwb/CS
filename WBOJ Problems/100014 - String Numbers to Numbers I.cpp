#include <bits/stdc++.h> 

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    vector<string> numberWords = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    string result = "";

    string userInput;
    cin >> userInput;

    int index = 0;
    
    while (index + 3 <= userInput.length()){
        if (find(numberWords.begin(), numberWords.end(), userInput.substr(index, 3)) != numberWords.end()) {
            result += to_string(find(numberWords.begin(), numberWords.end(), userInput.substr(index, 3)) - numberWords.begin() + 1) + " ";
            index += 3;
        }
        else if (find(numberWords.begin(), numberWords.end(), userInput.substr(index, 4)) != numberWords.end()) {
            result += to_string(find(numberWords.begin(), numberWords.end(), userInput.substr(index, 4)) - numberWords.begin() + 1) + " ";
            index += 4;
        }
        else if (find(numberWords.begin(), numberWords.end(), userInput.substr(index, 5)) != numberWords.end()) {
            result += to_string(find(numberWords.begin(), numberWords.end(), userInput.substr(index, 5)) - numberWords.begin() + 1) + " ";
            index += 5;
        }
        else index++;
    }

    if (result.length() == 0) {
        cout << " " << endl;
        return 0;
    }
    else{
        cout << result << endl;
    }

    return 0;
}