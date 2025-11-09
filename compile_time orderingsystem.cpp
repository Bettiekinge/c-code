#include <iostream>
using namespace std;

class RestaurantOrder {
public:
    void placeorder(string itemname) {
        cout << "Food item: " << itemname << endl;
    }

    void placeorder(string itemname, int quantity) {
        cout << "Item name: " << itemname << ", Quantity: " << quantity << endl;
    }

    void placeorder(string itemname, int quantity, bool takeout) {
        cout << "Item name: " << itemname 
             << ", Quantity: " << quantity 
             << ", Takeaway: " << (takeout ? "Yes" : "No") << endl;
    }
};

int main() {
    RestaurantOrder obj;
    obj.placeorder("Chapati");
    obj.placeorder("Rice", 2);
    obj.placeorder("Ugali", 2, true);
    return 0;
}
