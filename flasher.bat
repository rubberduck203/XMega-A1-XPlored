Batchisp -device ATXMEGA128A1 -hardware RS232 -port COM3 -baudrate 115200 -operation onfail abort memory flash erase f blankcheck loadbuffer "C:\Users\Christopher\Documents\Atmel Studio\6.2\XMega-A1-XPlored\Blink\Blink\Release\blink.hex" program verify start reset 0

pause