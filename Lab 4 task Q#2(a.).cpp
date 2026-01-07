#include <iostream>
using namespace std;

int main() {
    int requiredStock = 500;
    int currentStock = 420;

    // 1. Is stock sufficient?
    bool isSufficient = (currentStock >= requiredStock);
    cout << "Is stock sufficient? " << (isSufficient ? "True" : "False") << endl;

    // 2. Is stock less than 50% of required level?
    int fiftyPercent = requiredStock / 2;
    bool isLessThanFiftyPercent = (currentStock < fiftyPercent);
    cout << "Is stock less than 50% of required level? " << (isLessThanFiftyPercent ? "True" : "False") << endl;

    // 3. Is stock exactly equal to required stock?
    bool isEqual = (currentStock == requiredStock);
    cout << "Is stock exactly equal to required stock? " << (isEqual ? "True" : "False") << endl;

    // 4. Is the shortage greater than 50 units?
    int shortage = requiredStock - currentStock;
    bool isShortageGreaterThan50 = (shortage > 50);
    cout << "Is the shortage greater than 50 units? " << (isShortageGreaterThan50 ? "True" : "False") << endl;

    return 0;
}
