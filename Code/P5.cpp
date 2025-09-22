#include <iostream>
using namespace std;

int main() {
    double fixedCosts, pricePerUnit, costPerUnit, breakEven;

    cout << "Enter fixed costs: ";
    cin >> fixedCosts;
    cout << "Enter price per unit: ";
    cin >> pricePerUnit;
    cout << "Enter cost per unit: ";
    cin >> costPerUnit;

    if (pricePerUnit > costPerUnit) {
        breakEven = fixedCosts / (pricePerUnit - costPerUnit);
        cout << "Break even point: " << breakEven << " units" << endl;
    } else {
        cout << "Error: Price per unit must be greater than cost per unit." << endl;
    }

    return 0;
}
