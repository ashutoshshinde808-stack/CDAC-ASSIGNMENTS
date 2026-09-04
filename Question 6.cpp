#include <iostream>
using namespace std;

int main()
{
    int statusReg  = 0b10110001;   // Read-only from firmware side
    int controlReg = 0b00000000;   // Firmware writes here
    int dataReg    = 0b11001010;   // For reassignment demo


    // ------------------------------------------------
    // regPtr1 : Pointer to const int
    // ------------------------------------------------
    const int* regPtr1 = &statusReg;

    cout << "Status Register: " << *regPtr1 << endl;

    // *regPtr1 = 100;
    // ERROR: cannot modify value through const pointer

    // regPtr1 = &controlReg;
    // VALID actually: pointer CAN be repointed
    // because regPtr1 itself is not const


    // ------------------------------------------------
    // regPtr2 : Const pointer to int
    // ------------------------------------------------
    int* const regPtr2 = &controlReg;

    *regPtr2 = 100;

    cout << "Control Register: " << *regPtr2 << endl;

    // regPtr2 = &dataReg;
    // ERROR: cannot change the address stored in const pointer


    // ------------------------------------------------
    // regPtr3 : Const pointer to const int
    // ------------------------------------------------
    const int* const regPtr3 = &statusReg;

    cout << "Status Register through regPtr3: "
         << *regPtr3 << endl;

    // *regPtr3 = 200;
    // ERROR: cannot modify value because pointed data is const

    // regPtr3 = &dataReg;
    // ERROR: cannot change address because pointer is const


    return 0;
}