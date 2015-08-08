# XMega-A1-XPlored

My intro into the embedded world with [Atmel's XMega Xplained evaluation board.](http://www.atmel.com/tools/XMEGA-A1XPLAINED.aspx?tab=overview)

The goals of this project are three-fold. 

1. Learn some C. 
2. Get down to the metal and learn about embedded programming. 
3. Discover what kind of future projects are possible. 

## Building and Programming

I'm using Atmel Studio and the AVR-GCC compiler that comes with it to develop and build this project. I'm sure it's possible to use the compiler on its own, however I don't know how to do that as of now. 

The ATxMegaA is programmable via USART over a usb connection. This requires the [FLIP tool][flip], available for free from Atmel. The `flasher.bat` file can be used to program the board. You'll need to modify the filepath to the `Blink.hex` file and the COM port your device is plugged into. [Instructions for programming the ATxMegaA1 Xplained board with the FLIP tool can be found in the Getting Started Guide][getting-started] under Chapter 5. 

[flip]: http://www.atmel.com/tools/FLIP.aspx
[getting-started]: http://www.atmel.com/images/doc8372.pdf

## Architecture

The LEDs are hooked into PORTE in the hardware, but should not be accessed directly through PORTE, but thought the LEDPORT macro. The timer for the Light Runner "marquee" is the first TimerCounter (TC0) on PORTC.

|Port|Pin|Peripheral|Desc
|----|---|----------|----------------------------
|C   |0  |Timer     | Controls the Led blink rate
|E   |0  |Led0      |
|E   |1  |Led1      |
|E   |2  |Led2      |
|E   |3  |Led3      |
|E   |4  |Led4      |
|E   |5  |Led5      |
|E   |6  |Led6      |
|E   |7  |Led7      |

## Resources

- [AVR-LibC API documentation](http://www.nongnu.org/avr-libc/user-manual/index.html)
- [Atmel ATxMegaA1 Xplained documentation](http://www.atmel.com/tools/XMEGA-A1XPLAINED.aspx?tab=documents)
- [Atmel ATxMega128A1 documentation](http://www.atmel.com/devices/ATXMEGA128A1.aspx?tab=documents)
