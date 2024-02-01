#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    // declaring integers
    int bill;
    int discount;
    bool firstIteration = true;

    cout << "\n\t**************************************************************\n";
    cout << "\t\t    D i s c o u n t  &  T a x   C a l c u l a t o r\n";
    cout << "\t**************************************************************\n";

    do {
        cout << "Enter the Amount $";

        // asking user to put in the amount
        if (!(cin >> bill)) {
            string temp;
            cin.clear();
            cin >> temp;
            if (temp == "stop") {
                break;
            }
        }

        cout << "Enter the Discount(%) ";

        // asking user to put in discount percent
        if (!(cin >> discount)) {
            string temp;
            cin.clear();
            cin >> temp;
            if (temp == "stop") {
                break;
            }
        }

        int newPrice = round(bill - (bill * discount / 100));

        cout << "\nYour discounted price is $" << newPrice << endl;
        cout << "Your Total Bill is $" << round(newPrice * 8.875) / 100 + newPrice << endl;

        // Prompt for continuation
        cout << "\nDo you want to continue? (yes/no) ";
        string continueResponse;
        cin >> continueResponse;

        // Add space before the next iteration
        cout << endl;

        if (continueResponse == "no") {
            cout << "\n\t**************************************************************\n";
            cout << "\t\t               T H A N K  Y O U\n";
            cout << "\t**************************************************************\n";
            break;
        }

        // Set firstIteration to false after the first iteration
        firstIteration = false;

    } while (true);

    return 0;
}

