#include <iostream>
using namespace std;

int main() {
    double mealTotal, tip, totalWithTip;

    cout << "Enter meal total: ";
    cin >> mealTotal;

    tip = mealTotal * 0.15;
    totalWithTip = mealTotal + tip;

    cout << "Meal total: " << mealTotal << endl;
    cout << "Tip (15%): " << tip << endl;
    cout << "Total with tip: " << totalWithTip << endl;

    return 0;
}
