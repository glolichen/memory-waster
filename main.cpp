#include <iostream>

using ull = unsigned long long;

int main() {
    std::cout << "How much memory do you want to waste (in megabytes)? ";
    
    int wasteAmt;
    std::cin >> wasteAmt;

    ull size = 131072 * wasteAmt;
    ull *waste = new ull[size];

    std::cout << "Wasting " << wasteAmt << " mB, Press Ctrl+C to stop" << std::endl;

    while (true) for (int i = 0; i < size; i++) waste[i]++;

    return 0;
}
