#include <iostream>
using namespace std;

int main() {
    int fixedMoney;
    int makeMoney;
    int productPrice;

    cin >> fixedMoney >> makeMoney >> productPrice;
    if (productPrice - makeMoney <= 0) {
        cout << -1 << endl;
        return 0;
    }

    cout << (fixedMoney / (productPrice - makeMoney) + 1) << endl;
    return 0;
}