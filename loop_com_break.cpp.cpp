#include <iostream>

int main() {
for (int i = 0; i < 10; i++) {
    if (i == 5) {
        break; // Encerra o loop quando i é 5
    }
    std::cout << "i: " << i << std::endl;
}


    return 0;
}
