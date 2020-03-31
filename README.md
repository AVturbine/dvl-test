# dvl-test
Firmware for communicating with teledyne dvl

This is an API for communicating between an AVR microcontroller and a Teledyne Explorer DVL. It fetches high-resolution velocity data from a DVL connected over UART1
(in our case, on an ATMega2560 development board, pins 19 and 18 were our rx and tx). Modify initialization commands in `include/dvl/dvl_commands.h` to change the sensor and environment parameters.
Returns velocities roughly 3-4 times a second, with 0.01mm/s resolution (precision, not necessarily accuracy). 

This is an early version of the code I wrote for the AVBotz Marlin submersible, and may contain bugs. Proceed at your own risk!
