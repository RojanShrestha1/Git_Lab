#include <iostream>
using namespace std;

void hanoi(int n, char from, char to, char helper) {
    if (n == 1) {
        cout << "Move disk 1 from " << from << " to " << to << "\n";
        return;
    }

    hanoi(n - 1, from, helper, to);
    cout << "Move disk " << n << " from " << from << " to " << to << "\n";
    hanoi(n - 1, helper, to, from);
}

int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    hanoi(n, 'A', 'C', 'B');
    return 0;
}
