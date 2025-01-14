#include "Testbench.h"
#include <iostream>

void Testbench::runTests() {
    MemoryModel mem(10); // Initialize memory with 10 addresses

    std::cout << "[TEST] Running Memory Model Verification..." << std::endl;

    // Test Case 1: Write and Read
    mem.write(3, 42);
    int data = mem.read(3);
    if (data == 42) {
        std::cout << "[PASS] Test Case 1: Write and Read\n";
    } else {
        std::cout << "[FAIL] Test Case 1: Write and Read\n";
    }

    // Test Case 2: Invalid Write
    mem.write(15, 99); // Out of bounds

    // Test Case 3: Invalid Read
    mem.read(15); // Out of bounds

    // Display Memory State
    mem.displayMemory();
}
