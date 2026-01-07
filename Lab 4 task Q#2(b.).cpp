#include <iostream>

int main() {
    int total_classes = 60;
    int attended_classes = 48;
    double required_attendance = 0.75;
    double sixty_percent = 0.60;

    // Calculate required number of classes for 75% attendance
    double required_classes = total_classes * required_attendance;
    bool requirement_met = attended_classes >= required_classes;
    bool attended_more_than_50 = attended_classes > 50;
    bool attended_less_than_60percent = attended_classes < (total_classes * sixty_percent);

    // Output results
    std::cout << "Was the requirement met? " << (requirement_met ? "Yes" : "No") << std::endl;
    std::cout << "Did he attend more than 50 classes? " << (attended_more_than_50 ? "Yes" : "No") << std::endl;
    std::cout << "Did he attend less than 60% of total classes? " << (attended_less_than_60percent ? "Yes" : "No") << std::endl;

    return 0;
}
