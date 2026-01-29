/**
* @author Armando Rodriguez, 5010215907, 1
* @brief A brief description of the program (no more than one or two
* paragraphs).
* @note I pledge my word of honor that I have complied with UNLV's
* Academic Integrity Policy while completing this assignment.
* @note A brief description of the expected input to the program.
* @note A brief description of the expected outout to the program.
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <fstream>
// Global constant variables
const int LABEL_COUNT = 100; // Default number of labels
const int OPCODE_COUNT = 18; // Default number of opcodes
const int MAX_CHARS = 5; // Maximum number of characters
const int STACK_SIZE = 1000; // Maximum capacity of array
// list of opcodes needed for interpretation
const std::string OPCODE_LIST = "const get put ld st add sub mul div cmp jpos jz jjl jle jg jge halt";
// <--
// YOUR CODE GOES HERE





// -->


// Helper functions

/** Returns the number of spaced needed for padding..
* @param str the string that needs padding.
* @param len the maximum number of characters.
* @return the number of spaces needed.
*/
int padding(std::string str, int len) {
    int n = static_cast<int>(str.length());
    return len + abs(len - n);
}
/** Dumps the name and numerical value that each instrcution represents.
* @param op the array of opcodes.
* @param count the number of opcodes.
* @return void.
*/
void dumpOpcodes(Opcode opcodes[], int count) {//Opcode struct? name opcodes and is a ist
    std::cout << "Opcodes" << std::endl;
    int pad = 0;
    for(int i = 0; i < count; ++i) {
        pad = padding(opcodes[i].name, MAX_CHARS);
        std::cout << "> " << opcodes[i].name << std::string(pad, ' ') <<
    opcodes[i].code << std::endl;
    }
}
/** Dumps the name of a label and its corresponding location in memory.
* @param sym an array of symbols.
* @param count the number of symbols in the array.
* @return void.
*/
void dumpSymbols(Symbol labels[], int count){//
    std::cout << "Symbols" << std::endl;
    int pad = 0;
    for(int i = 0; i < count; ++i) {
        pad = padding(labels[i].name, MAX_CHARS);
        std::cout << "> " << "[" << labels[i].name << "] = " << labels[i].mem <<
        std::endl;
    }
}
/** Dumpds the address of each instruction and label.
* @param memory the array of addresses.
* @param count the number of addresses.
* @return void.
*/
void dumpMemory(int memory[], int count) {
std::cout << "Memory" << std::endl;
std::cout.fill('0');
for (int i = 0; i < count; ++i) {
std::cout << std::setw(8) << memory[i] << std::endl;
}
}
/**
* @brief A brief description of what the function does.
* @param argc The number of command-line arguments.
* @param argv A vector of command-line arguments.
* @return Describe what the function returns.
*/
int main(int argc, char *argv[]) {
// <---
// YOUR CODE GOES HERE
// create the table of opcodes
// parse the list of opcodes
// check command-line arguments
//
//--------------------------------------------
// PASS #1
//
// (1) Removing comments
// (2) Remember labels
// (3) Save instruction/opcode and address
// (4) Write generated code to an output file
//
//
// --------------------------------------------
//
// PASS #2
//
// (1) Read output file
// (2) Replace numeric values and pack them into
//
//
// --------------------------------------------
//
// INTEPRETER
//
// (1) Execute instructions in sequential order
//
std::cout << "Running program..." << std::endl;
int reg = 0; // register variable
// -->
return EXIT_SUCCESS;
}