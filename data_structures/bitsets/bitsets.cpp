#include <iostream>
#include <bitset>

void printBitset(std::bitset<8> &myBitset){
    for (size_t i = 0; i < myBitset.size(); ++i) {
        std::cout << myBitset[i];
    }
    std::cout << std::endl;
}

int main() {

    std::bitset<8> bits1;  // Default initialization (all bits are 0)
    std::bitset<8> bits2(42);  // Initialize from an unsigned long (binary: 00101010)
    std::bitset<8> bits3("10101010");  // Initialize from a string

    printBitset(bits2);
    
    std::cout << "bits1: " << bits1 << std::endl;
    std::cout << "bits2: " << bits2 << std::endl;
    std::cout << "bits3: " << bits3 << std::endl;

    bits1.set(0);  // Set bit at position 0
    bits1.flip(1);  // Flip bit at position 1
    bits1.reset(2);  // Reset bit at position 2

    std::cout << "Modified bits1: " << bits1 << std::endl;

    std::bitset<8> bits_and = bits1 & bits2;
    std::bitset<8> bits_or = bits1 | bits2;
    std::bitset<8> bits_xor = bits1 ^ bits2;

    std::cout << "AND: " << bits_and << std::endl;
    std::cout << "OR: " << bits_or << std::endl;
    std::cout << "XOR: " << bits_xor << std::endl;

    return 0;
}