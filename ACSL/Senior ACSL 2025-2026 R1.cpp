#include <bits/stdc++.h> 

using namespace std;

int hexToDecimal(string str){
    int decimalNumber = stoi(str, nullptr, 16);
    return decimalNumber;
}

vector<string> possiblePositionsAdd(vector<string> possiblePositions, int distanceRow, int distanceCol, int guessRow, int guessCol){
    vector<int> possibleRow;
    if (guessRow - distanceRow >= 0) possibleRow.push_back(guessRow - distanceRow);
    if (guessRow + distanceRow < 256) possibleRow.push_back(guessRow + distanceRow);
    // cout << "DEBUG: possibleRow size = " << possibleRow.size() << "\n";
    
    vector<int> possibleColumn;
    if (guessCol - distanceCol >= 0) possibleColumn.push_back(guessCol - distanceCol);
    if (guessCol + distanceCol < 256) possibleColumn.push_back(guessCol + distanceCol);
    // cout << "DEBUG: possibleColumn size = " << possibleColumn.size() << "\n";

    for (int j = 0; j < possibleRow.size(); j++){
        for (int k = 0; k < possibleColumn.size(); k++){
            possiblePositions.push_back(to_string(possibleRow[j]) + " " + to_string(possibleColumn[k]));
        }
    }
    return possiblePositions;
}

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    vector<string> possiblePositions;

    for (int i = 0; i < 3; i++){
        string guess;
        string distanceValue;
        cin >> guess;
        cin >> distanceValue;

        int guessRow = hexToDecimal(guess.substr(0,2));
        int guessCol = hexToDecimal(guess.substr(2));

        // 앞 두자리가 row, 뒤 두자리가 col일때
        int distanceRow = hexToDecimal(distanceValue.substr(0, 2));
        int distanceCol = hexToDecimal(distanceValue.substr(2));
        possiblePositions = possiblePositionsAdd(possiblePositions, distanceRow, distanceCol, guessRow, guessCol);

        // 앞 두자리가 Col, 뒤 두자리가 Row일때
        distanceRow = hexToDecimal(distanceValue.substr(2));
        distanceCol = hexToDecimal(distanceValue.substr(0, 2));
        possiblePositions = possiblePositionsAdd(possiblePositions, distanceRow, distanceCol, guessRow, guessCol);

        // cout << "DEBUG: possiblePositions size = " << possiblePositions.size() << "\n";
    } 
    
    int positionRow;
    int positionColumn;
    for (int i = 0; i < possiblePositions.size(); i++){
        int cnt = count(possiblePositions.begin(), possiblePositions.end(), possiblePositions[i]);
        if (cnt == 3){
            int spaceIndex = possiblePositions[i].find(' ');
            positionRow = stoi(possiblePositions[i].substr(0, spaceIndex));
            positionColumn = stoi(possiblePositions[i].substr(spaceIndex + 1));
        }
    }
    cout << "(" << setw(2) << setfill('0') << uppercase << hex << positionRow << ",";
    cout << setw(2) << setfill('0') << uppercase << hex << positionColumn << ")";
}