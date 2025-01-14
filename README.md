# Memory Model Verification in C++

## Project Overview
This C++ project simulates a memory model where users can perform operations like reading, writing, and displaying memory. The program allows the user to interact with a simple memory array, verify the correctness of memory operations, and display the current memory state in a structured format.

## Features
- **Dynamic Memory Size**: Allows the user to define the size of the memory array.
- **Write Operation**: Write data to a specific address in memory.
- **Read Operation**: Retrieve and display data from a specific memory address.
- **Memory Display**: Print the current state of the entire memory array.
- **Input Validation**: Ensures that the user inputs valid addresses and data.

## Getting Started

### Prerequisites
- A C++ compiler (e.g., GCC, Clang, MSVC)
- Visual Studio Code (or any IDE of your choice)

### Installation
1. Clone the repository or download the project files.
2. Open the project in Visual Studio Code or any C++ compatible editor.
3. Ensure that you have a C++ compiler set up.
4. Build and run the project.

### Compilation & Execution
To compile and run the project, follow these steps:

1. Open a terminal or command prompt.
2. Navigate to the project directory.
3. Use the following command to compile the code:
   ```
   g++ -o memory_model main.cpp MemoryModel.cpp
   ```
4. To run the program:
   ```
   ./memory_model
   ```

## Usage

1. **Write Data**: Write a value to a specific address.
2. **Read Data**: Read and display the value stored at a specific address.
3. **Display Memory**: View the entire memory array with addresses and corresponding data.
4. **Exit**: Exit the program.

### Example Output
```
Enter memory size: 5

--- Memory Model Menu ---
1. Write Data
2. Read Data
3. Display Memory
4. Exit
Enter your choice: 1
Enter address to write: 2
Enter data to write: 42

--- Memory Model Menu ---
1. Write Data
2. Read Data
3. Display Memory
4. Exit
Enter your choice: 3

[MEMORY DUMP]
Current Memory State:
Address 0: 0
Address 1: 0
Address 2: 42
Address 3: 0
Address 4: 0
--------------------------------------
```

## Contributing
Feel free to fork the project, contribute with bug fixes, or suggest new features. For any contributions, please follow these steps:
1. Fork the repository.
2. Create a new branch for your changes.
3. Make changes and test them thoroughly.
4. Submit a pull request.
