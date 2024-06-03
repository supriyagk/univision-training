#include <stdint.h>

int main(void)
{
    // Declare pointers to memory-mapped registers
    int pclkctrlreg = (int)0x40023800;   // RCC (Reset and Clock Control) register base address
    int pportDmodeReg = (int)0x40020C00; // GPIO Port D mode register base address
    int pportDoutReg = (int)0x40020C14;  // GPIO Port D output data register base address

    // Enable clock for GPIO Port D by setting corresponding RCC register
    *pclkctrlreg |= (1 << 3);  // Set bit 3 to enable clock for GPIO Port D

    // Set pin D15 of Port D as output by setting corresponding mode bits in the GPIO Port D mode register
    *pportDmodeReg &= ~(3 << 30);  // Clear bits 30 and 31
    *pportDmodeReg |= (1 << 30);   // Set bit 30 to configure pin D15 as output

    // Turn on LED connected to pin D15 of Port D by setting corresponding output data bit in the GPIO Port D output data register
    *pportDoutReg |= (1 << 15);  // Set bit 15 to turn on the LED

    // Your code logic here (if any)

    // Infinite loop to keep the LED on (you may add more logic here)
    while (1)
{
        // Your application code here (if any)
}

    return 0;
}
