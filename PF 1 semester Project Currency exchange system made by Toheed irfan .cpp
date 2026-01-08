#include <iostream>
using namespace std;

int main() {
    int choice;
    double amount, convertedAmount;
    double totalConverted = 0; 
    
cout << "=================================================" << endl;
    cout << " \tCURRENCY EXCHANGE SYSTEM\t \n";
cout << "=================================================" << endl;

    do {
    cout << "\n" << endl;
    cout << "=============================" << endl;
        cout << "Select currency to convert:\n";
    cout << "=============================" << endl;
        
        cout << "1. USD to PKR\n";
        cout << "2. EUR to PKR\n";
        cout << "3. GBP to PKR\n";
        cout << "4. AED to PKR\n";
        cout << "5. JPY to PKR\n";
        cout << "6. SAR to PKR\n";
        cout << "7. CNY to PKR\n";
        cout << "8. Exit\n";
        cout << "\n" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 8) {
            cout << "\nThank you for using the Currency Exchange System!\n";
            cout << "Total amount converted is : Rs " << totalConverted << endl;
            break;
        }

        if (choice < 1 || choice > 8) {
            cout << "Invalid Your choice\n";
            continue;
        }

        cout << "Enter amount to convert: ";
        cin >> amount;

        if (amount <= 0) {
            cout << "Invalid Your amount! Please enter a correct amount.\n";
            continue;
        }

        switch(choice) {
            case 1: // USD
                convertedAmount = amount * 280;
                cout << "$" << amount << " = Rs " << convertedAmount << endl;
                break;

            case 2: // EUR
                convertedAmount = amount * 310;
                cout << "€" << amount << " = Rs " << convertedAmount << endl;
                break;

            case 3: // GBP
                convertedAmount = amount * 360;
                cout << "£" << amount << " = Rs " << convertedAmount << endl;
                break;

            case 4: // AED
                convertedAmount = amount * 76;
                cout << "AED " << amount << " = Rs " << convertedAmount << endl;
                break;

            case 5: // JPY
                convertedAmount = amount * 1.9;
                cout << "JPY " << amount << " = Rs " << convertedAmount << endl;
                break;

            case 6: // SAR
                convertedAmount = amount * 74;
                cout << "SAR " << amount << " = Rs " << convertedAmount << endl;
                break;

            case 7: // CNY
                convertedAmount = amount * 39;
                cout << "CNY " << amount << " = Rs " << convertedAmount << endl;
                break;
        }

        totalConverted += convertedAmount;

        char repeat;
        cout << "Do you want to convert another currency? (Y/N): ";
        cin >> repeat;

        if (repeat == 'N' || repeat == 'n') {
            cout << "\nSession ended.\n";
            cout << "Total amount converted: Rs " << totalConverted << endl;
            break;
        }

    } while (true);

    return 0;
}