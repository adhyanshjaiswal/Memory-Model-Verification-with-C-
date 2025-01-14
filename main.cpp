#include "MemoryModel.h"
#include <iostream>
#include <limits> // For numeric_limits

void clearInputBuffer() {
    std::cin.clear(); // Clear any errors
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
}

int main() {
    size_t memorySize;

    // Get the memory size from the user
    std::cout << "\n***************************\n";
    std::cout << "Enter memory size: ";
    
    while (!(std::cin >> memorySize) || memorySize <= 0) {
        std::cerr << "[ERROR] Please enter a valid positive number for memory size.\n";
        clearInputBuffer();
        std::cout << "Enter memory size: ";
    }

    MemoryModel mem(memorySize);
    int choice;

    // Interactive menu
    do {
        std::cout << "-----------------------------";
        std::cout << "\n---- Memory Model Menu ----\n";
        std::cout << "-----------------------------\n";
        std::cout << "1. Write Data\n";
        std::cout << "2. Read Data\n";
        std::cout << "3. Display Memory\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";

        while (!(std::cin >> choice) || choice < 1 || choice > 4) {
            std::cerr << "[ERROR] Invalid choice. Please select a valid option.\n";
            clearInputBuffer();
            std::cout << "Enter your choice: ";
        }

        switch (choice) {
            case 1: {
                size_t address;
                int data;

                std::cout << "-----------------------------\n";
                std::cout << "Enter address to write: ";
                while (!(std::cin >> address)) {
                    std::cerr << "[ERROR] Invalid address. Please enter a positive number.\n";
                    clearInputBuffer();
                    std::cout << "Enter address to write: ";
                }

                std::cout << "Enter data to write: ";
                while (!(std::cin >> data)) {
                    std::cerr << "[ERROR] Invalid data. Please enter a valid integer.\n";
                    clearInputBuffer();
                    std::cout << "Enter data to write: ";
                }

                mem.write(address, data);
                break;
            }

            case 2: {
                size_t address;

                std::cout << "-----------------------------\n";
                std::cout << "Enter address to read: ";
                while (!(std::cin >> address)) {
                    std::cerr << "[ERROR] Invalid address. Please enter a positive number.\n";
                    clearInputBuffer();
                    std::cout << "Enter address to read: ";
                }

                mem.read(address);
                break;
            }

            case 3:
                mem.displayMemory();
                break;

            case 4:
            std::cout << "-----------------------------\n";
                std::cout << "Exiting the program. Goodbye!\n";
                std::cout << "-----------------------------\n";
                break;
        }
    } while (choice != 4);

    return 0;
}
