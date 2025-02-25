#include <iostream>

int main() {
for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) {
        continue; // Pula a impressão para valores pares
    }
    std::cout << "i: " << i << std::endl;
}

    return 0;
}
