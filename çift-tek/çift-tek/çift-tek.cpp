#include <iostream>
using namespace std;


int main()
{
    // Perdor nje integer numer
    // Dhe beje qe programi ta detektoje ate numer se a eshte çift apo tek

    int numri;

    cout << "Shenoni numrin: ";
    cin >> numri;

    if (numri % 2 == 0) {
        cout << "Numri " <<  numri << ": eshte qift.";
    }
    else {
        cout << "Numri " << numri << ": eshte tek.";
    }
}
