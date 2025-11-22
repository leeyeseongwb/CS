// Card Game - Find the highest rank

#include <bits/stdc++.h> 

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string numbersStandard = "23456789TJQKA";
    string shapeStandard = "CDHS";

    int n;
    cin >> n;

    int maxNumberIndex = 0;
    int maxShapeIndex = 0;

    for (int i = 0; i < n; i++){
        string card;
        cin >> card;

        char cardShape = card.back();
        string cardNumString = card.substr(0, card.size() - 1);
        if (cardNumString == "10") cardNumString = "T";
        else if (cardNumString == "J") cardNumString = "J";
        else if (cardNumString == "Q") cardNumString = "Q";
        else if (cardNumString == "K") cardNumString = "K";
        else if (cardNumString == "A") cardNumString = "A";

        size_t numIndex = numbersStandard.find(cardNumString);
        size_t shapeIndex = shapeStandard.find(cardShape);
        if (numIndex == string::npos || shapeIndex == string::npos) continue;

        if ((int)numIndex > maxNumberIndex ||
            ((int)numIndex == maxNumberIndex && (int)shapeIndex > maxShapeIndex)) {
            maxNumberIndex = (int)numIndex;
            maxShapeIndex = (int)shapeIndex;
        }
    }

    cout << numbersStandard[maxNumberIndex] << shapeStandard[maxShapeIndex] << "\n";
    return 0;

}