/*
 * I2C_1602LCD.h
 *
 *  Author: Fabian Diga
 */ 


#ifndef I2C_1602LCD_H_
#define I2C_1602LCD_H_

//Initializes the LCD with given slave address
void initLCD(unsigned char);

//Send a command byte in two nibbles
void sendCommand(unsigned char);

//Send a data byte in two nibbles
void sendData(unsigned char);

//Set cursor to row(0,1) and column (0-15)
void setCursor(unsigned char, unsigned char);

//Clear screen
void clearScreen();

//Write string on LCD
void writeString(char*);

//Write single char on LCD
void writeChar(unsigned char);



#endif /* I2C_1602LCD_H_ */