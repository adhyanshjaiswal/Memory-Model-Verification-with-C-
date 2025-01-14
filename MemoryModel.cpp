#include "MemoryModel.h"

MemoryModel::MemoryModel(size_t memSize) : size(memSize) {
    memory.resize(size, 0); // Initialize memory with zeros
}

void MemoryModel::write(size_t address, int data) {
    if (address < size) {
        memory[address] = data;
        std::cout << "[INFO] Write: Address = " << address << ", Data = " << data << std::endl;
    } else {
        std::cerr << "[ERROR] Write: Invalid Address " << address << std::endl;
    }
}

int MemoryModel::read(size_t address) {
    if (address < size) {
        std::cout << "[INFO] Read: Address = " << address << ", Data = " << memory[address] << std::endl;
        return memory[address];
    } else {
        std::cerr << "[ERROR] Read: Invalid Address " << address << std::endl;
        return -1;
    }
}

// Display current state of memory with address and corresponding data
void MemoryModel::displayMemory() const {
    std::cout << "-----------------------------\n";
    std::cout << "[MEMORY DUMP] \nCurrent Memory State:" << std::endl;
    std::cout << "-----------------------------\n";
    for (size_t i = 0; i < size; ++i) {
        std::cout << "Address " << i << ": " << memory[i] << std::endl;
    }
    std::cout << "-----------------------------" << std::endl;
}
