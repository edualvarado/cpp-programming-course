
// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main() {
    
    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
    cout << "\nHow many small rooms would you like cleaned? ";
    
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;

    cout << "\nHow many large rooms would you like cleaned? ";
    
    int number_of_large_rooms {0};
    cin >> number_of_large_rooms;
    
    const int price_per_small_room {25};
    const int price_per_large_room {35};
    const double sales_tax {0.06};
    const int estimate_expiry {30}; // days

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;
    
    int cost {(price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms)};
    cout << "Cost : $" << cost << endl;
    
    double tax {((price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms)) * sales_tax};
    cout << "Tax: $" << tax << endl;
    
    cout << "===============================" << endl;
    cout << "Total estimate: $" << cost + tax << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
 
    cout << endl;
    return 0;
}

