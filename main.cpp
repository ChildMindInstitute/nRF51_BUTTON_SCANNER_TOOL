//InteruptIn is pulled high by default
//A lead to ground can be used to identify pins which are not attached to buttons, just as if you were closing a switch 

#include "mbed.h"
#include "nrf51.h"
#include "nrf51_bitfields.h"
#include "BLE.h"
#include "UARTService.h"    //Serial over USB

#define UART_TX         p18
#define UART_RX         p17

#define PIN_00  p0
#define PIN_01  p1
#define PIN_02  p2
#define PIN_03  p3
#define PIN_04  p4
#define PIN_05  p5
//#define PIN_06  p6  vibration motor
#define PIN_07  p7
#define PIN_08  p8
#define PIN_09  p9  
#define PIN_10  p10  
#define PIN_11  p11
#define PIN_12  p12
#define PIN_13  p13
#define PIN_14  p14
#define PIN_15  p15
#define PIN_16  p16
//#define PIN_17  p17  serial out
//#define PIN_18  p18
#define PIN_19  p19  
#define PIN_20  p20
#define PIN_21  p21  
#define PIN_22  p22  
#define PIN_23  p23  
#define PIN_24  p24 
#define PIN_25  p25
#define PIN_26  p26
#define PIN_27  p27
#define PIN_28  p28
#define PIN_29  p29
#define PIN_30  p30

Serial pc(UART_TX, UART_RX);

#define LOG(...)    { pc.printf(__VA_ARGS__); }

InterruptIn pin_00(PIN_00);
InterruptIn pin_01(PIN_01);
InterruptIn pin_02(PIN_02);
InterruptIn pin_03(PIN_03);
InterruptIn pin_04(PIN_04);
//InterruptIn pin_05(PIN_05);
//InterruptIn pin_06(PIN_06);
InterruptIn pin_07(PIN_07);
/*InterruptIn pin_08(PIN_08);
InterruptIn pin_09(PIN_09);
InterruptIn pin_10(PIN_10);
InterruptIn pin_11(PIN_11);
InterruptIn pin_12(PIN_12);
InterruptIn pin_13(PIN_13);
InterruptIn pin_14(PIN_14);
InterruptIn pin_15(PIN_15);
InterruptIn pin_16(PIN_16);
//InterruptIn pin_17(PIN_17);
//InterruptIn pin_18(PIN_18);
InterruptIn pin_19(PIN_19);
InterruptIn pin_20(PIN_20);
InterruptIn pin_21(PIN_21);
InterruptIn pin_22(PIN_22);
InterruptIn pin_23(PIN_23);
InterruptIn pin_24(PIN_24);
InterruptIn pin_25(PIN_25);
InterruptIn pin_26(PIN_26);
InterruptIn pin_27(PIN_27);
InterruptIn pin_28(PIN_28);
InterruptIn pin_29(PIN_29);
InterruptIn pin_30(PIN_30);
*/

void detect00(){ LOG("Pin 0\n");  }
void detect01(){ LOG("Pin 1\n");  }
void detect02(){ LOG("Pin 2\n");  }
void detect03(){ LOG("Pin 3\n");  }
void detect04(){ LOG("Pin 4\n");  }
void detect05(){ LOG("Pin 5\n");  }
void detect06(){ LOG("Pin 6\n");  }
void detect07(){ LOG("Pin 7\n");  }
void detect08(){ LOG("Pin 8\n");  }
void detect09(){ LOG("Pin 9\n");  }
void detect10(){ LOG("Pin 10\n");  }
void detect11(){ LOG("Pin 11\n");  }
void detect12(){ LOG("Pin 12\n");  }
void detect13(){ LOG("Pin 13\n");  }
void detect14(){ LOG("Pin 14\n");  }
void detect15(){ LOG("Pin 15\n");  }
void detect16(){ LOG("Pin 16\n");  }
void detect17(){ LOG("Pin 17\n");  }
void detect18(){ LOG("Pin 18\n");  }
void detect19(){ LOG("Pin 19\n");  }
void detect20(){ LOG("Pin 20\n");  }
void detect21(){ LOG("Pin 21\n");  }
void detect22(){ LOG("Pin 22\n");  }
void detect23(){ LOG("Pin 23\n");  }
void detect24(){ LOG("Pin 24\n");  }
void detect25(){ LOG("Pin 25\n");  }
void detect26(){ LOG("Pin 26\n");  }
void detect27(){ LOG("Pin 27\n");  }
void detect28(){ LOG("Pin 28\n");  }
void detect29(){ LOG("Pin 29\n");  }
void detect30(){ LOG("Pin 30\n");  }


int main() {
            
    pc.baud(115200);
    
    wait(1); 
    
    printf("\n\r********* Starting Main *********\n\r");     
            
    pin_00.fall(detect00); 
    pin_01.fall(detect01); 
    pin_02.fall(detect02); 
    pin_03.fall(detect03); 
    pin_04.fall(detect04); 
//    pin_05.fall(detect05); 
//   pin_06.fall(detect06); //vibrate
    pin_07.fall(detect07); 
/*    pin_08.fall(detect08); 
    pin_09.fall(detect09); 
    pin_10.fall(detect10); 
    pin_11.fall(detect11); 
    pin_12.fall(detect12); 
    pin_13.fall(detect13);             
    pin_14.fall(detect14); 
    pin_15.fall(detect15); 
    pin_16.fall(detect16);
 //   pin_17.fall(detect17); //Serial
 //   pin_18.fall(detect18);
    pin_19.fall(detect19); 
    pin_20.fall(detect20); 
    pin_21.fall(detect21); 
    pin_22.fall(detect22); 
    pin_23.fall(detect23); 
    pin_24.fall(detect05); 
    pin_25.fall(detect05); 
    pin_26.fall(detect05);   
    pin_27.fall(detect05); 
    pin_28.fall(detect05); 
    pin_29.fall(detect05); 
    pin_30.fall(detect05); */
        
    LOG("Starting loop...\n");  
        
    while(1) {
    
        wait(.2);
        
    }
}
