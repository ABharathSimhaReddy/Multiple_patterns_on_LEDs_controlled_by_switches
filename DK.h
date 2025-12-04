#ifndef XC_DK_H               // Prevent multiple inclusion of this header file
#define XC_DK_H               // Define the header guard

#define LEVEL           0     // Detection mode: continuous key level reading
#define STATE_CHANGE    1     // Detection mode: detects press/release events

#define KEY_PORT        PORTC // Digital keypad is connected to PORTC

#define SWITCH1         0x0E  // Pattern when Switch 1 is pressed (active low)
#define SWITCH2         0x0D  // Pattern when Switch 2 is pressed (active low)
#define SWITCH3         0x0B  // Pattern when Switch 3 is pressed (active low)
#define SWITCH4         0x07  // Pattern when Switch 4 is pressed (active low)
#define ALL_RELEASED    0x0F  // Pattern when all switches are released

#define INPUT_PINS     0x0F   // Mask to read lower 4 input pins of PORTC

unsigned char read_digital_keypad(unsigned char detection_type); // Function to read keypad input
void init_digital_keypad(void);                                  // Function to initialize keypad pins

#endif                        // End of header guard
