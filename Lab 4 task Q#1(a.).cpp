
#include <iostream>

using namespace std;

int main() {

    // Define prices and quantities
        int burgersPrice = 350;
            int numBurgers = 2;
                int drinkPrice = 120;
        int friesPrice = 150;

    // 1. Calculate total bill
        int totalBill = (burgersPrice * numBurgers) + drinkPrice + friesPrice;

    // 2. Calculate 7% sales tax
        double salesTax = totalBill * 0.07;

    // 3. Calculate final amount after adding tax
        double finalAmount = totalBill + salesTax;

    // 4. Calculate average cost per item
        int totalItems = numBurgers + 1 + 1; // 2 burgers + 1 drink + 1 fries
        double avgCostPerItem = finalAmount / totalItems;

    // Display results
           cout << "Total bill: " << totalBill << std::endl;
           cout << "7% sales tax: " << salesTax << std::endl;
            
            
            
           cout << "Final amount after adding tax: " << finalAmount << std::endl;
           cout << "Average cost per item: " << avgCostPerItem << std::endl;

    return 0;
}



    