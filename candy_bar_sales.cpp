#include <iostream>

using namespace std;

int main(){
    int soldCandy, candyPrice, earnings;

    cout << "Enter the numbers of candy bar sold " << "\n";
    cin >> soldCandy;

    cout << "Enter price for each candy " << "\n";
    cin  >> candyPrice;

    earnings = soldCandy*candyPrice;

    cout << "You have earned $" << earnings << endl;

    return 0;
}