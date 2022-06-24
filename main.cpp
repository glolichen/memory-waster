#include <iostream>

using ull = unsigned long long;

int main() {
    std::cout << "How much memory do you want to waste (in megabytes)? ";
    
    int wasteAmt;
    std::cin >> wasteAmt;

    std::cout << "Wasted   mB";
    for (ull i = 1; i <= wasteAmt * 1024; i++) {
        ull* number = new ull[128];
        if (i % 1024 == 0)
            std::cout << "Wasting " << (i / 1024) << " mB\n";
    }

    std::cout << "\nWasting " << wasteAmt << " mB, Press Ctrl+C to stop" << std::endl;

    while (true);

    return 0;
}