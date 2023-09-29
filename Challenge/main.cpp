/* 
    Frank Carpet Cleaning service
    Charge 
     $25 per small room
     $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days
    
    Prompt the user for the number of rooms they would like cleaned
    and provide an estimate such as:
    
Estimate for carpet cleaning service:
Number of small rooms: 3
Numebr of large roms: 1
price per small room: $25
price per large room: $35
Cost: $110
Tax: $6.6

============================================================================

Total estimate: $116.6 
This estimate is valid for 30 day

*/
#include <iostream>

using namespace std;

int main()
{
   
    cout << "Franks Carpet Cleaning services" << endl;
    
    int small_rooms {0};
    cout << "\nHow many small rooms would you like cleaned? ";
    cin >> small_rooms;
    
    int large_rooms {0};
    cout << "\nHow many small rooms would you like cleaned? ";
    cin >> large_rooms;
    
    const double price_for_small_room {25};
    const double price_for_large_room {35};
    const double sales_tax {0.06};
   
    
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;
    
    cout << "Price per small room: " << price_for_small_room << endl;
    cout << "Price per large room: " << price_for_large_room << endl;
    
    cout << "Cost: $" << (price_for_small_room * small_rooms) + (price_for_large_room * large_rooms) << endl;
    cout << "Tax: $" << (price_for_small_room * small_rooms * sales_tax) + (price_for_large_room * large_rooms * sales_tax) << endl;
    cout << "=======================================" << endl;
    
    cout << "Total estimate: $" << (price_for_small_room * small_rooms) + (price_for_small_room * small_rooms * sales_tax) +
                                   (price_for_large_room * large_rooms) + (price_for_large_room * large_rooms * sales_tax) << endl;
    
     
     
return 0;    
}