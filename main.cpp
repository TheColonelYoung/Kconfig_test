#define _CONCAT(x,n) x##n
#define CONCAT(x,n) _CONCAT(x,n)

#include <iostream>

#include "config.h"

using namespace std;

class Device{
    public:
        string UART_1 = "UART 1";
        string UART_2 = "UART 2";
        string UART_3 = "UART 3";
};

int main(){
    Device device;

    #ifdef CONFIG_USE_FPU
        cout << "FPU is enabled" << endl;
    #endif

    #ifdef CONFIG_USE_DSP
        cout << "DSP is enabled" << endl;
    #endif

    #ifdef CONFIG_USE_DMA
        cout << "DMA is enabled" << endl;
    #endif



    #ifdef CONFIG_DEBUG_UART
        cout << "For debug is used " << device.CONCAT(UART_,CONFIG_DEBUG_UART) << " at speed " << CONFIG_DEBUG_UART_SPEED << " baud" << endl;
    #endif
    return 0;
}

