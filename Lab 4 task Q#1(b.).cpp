#include <iostream>

int main() {
    // Initial ticket cost
    double ticketCost = 1200;

    // Apply 25% discount
    double discountedCost = ticketCost - (ticketCost * 0.25);

    // Add 8% service charges
    double costWithService = discountedCost + (discountedCost * 0.08);

    // Add Rs. 50 online booking fee
    double finalCost = costWithService + 50;

    std::cout << "Final amount after policy changes: " << finalCost << " PKR" << std::endl;

    return 0;
}
