#include <iostream>
#include <cstdlib>
#include <ctime>
#include "randfuncs.h"

using namespace std;

int main()
{
    srand(time(0));

    cout << "Coin flip: " << flipCoin() << endl;
    cout << "6-sided die: " << rollD6() << endl;
    cout << "10-sided die: " << rollD10() << endl;

    return 0;
}
