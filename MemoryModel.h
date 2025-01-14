#ifndef MEMORYMODEL_H
#define MEMORYMODEL_H

#include <vector>
#include <iostream>

class MemoryModel {
private:
    std::vector<int> memory;
    size_t size;

public:
    MemoryModel(size_t memSize);
    void write(size_t address, int data);
    int read(size_t address);
    void displayMemory() const;
};

#endif // MEMORYMODEL_H
