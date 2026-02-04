#include <iostream>
using namespace std;

void hanoi(int n, char from, char to, char helper) {
    if (n == 1) {
        cout << "Move disk 1 from " << from << " to " << to << endl;
        return;
    }

    hanoi(n - 1, from, helper, to);            
    cout << "Move disk " << n << " from " << from << " to " << to << endl; 
}

int main() {
    int n;
    cout << "Enter number of disks here and show what you want: ";
    cin >> n;

    hanoi(n, 'A', 'C', 'B');
    return 0;
}
