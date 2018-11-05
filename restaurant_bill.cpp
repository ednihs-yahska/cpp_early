#include <iostream>
using namespace std;

int main() {
    double bill = 44.50; //dollars
    double tax = 6.75; //percent
    double net_bill = bill + bill*(tax/100);
    double tip = 15; //percent
    double totalAmountPaid = net_bill + net_bill*(tip/100);

    cout <<" ************ Restaurant Bill ***************** "<< endl; 
    cout <<" Bill  -------------------------------- "<< bill << endl;
    cout <<" Tax   -------------------------------- "<< tax << endl;
    cout <<" Tip   -------------------------------- "<< net_bill << endl;
    cout <<" Total -------------------------------- "<< totalAmountPaid << endl;

    return 0;
}
