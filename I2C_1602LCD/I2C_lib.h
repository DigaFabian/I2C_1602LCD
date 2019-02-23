/*
 * I2C_lib.h
 *
 * Created: 18.02.2019 13:26:41
 *  Author: Fabian Diga
 */ 


#ifndef I2C_LIB_H_
#define I2C_LIB_H_

void setupI2C();
void sendStartSequence();
unsigned char sendSlaveAddress(unsigned char);
unsigned char sendByte(unsigned char);
unsigned char readByte();
void sendStopSequence();


//BUS config
#define DELAY_I2C()			_delay_us(10000)
#define F_CPU				16000000UL

//SDA - Data
#define SDA_DDR				DDRD
#define SDA_MASK			2
#define SDA_READ			PIND
#define SDA_WRITE			PORTD

//SDA - Macros
#define SDA_SETUP()			SDA_WRITE &= ~(1<<SDA_MASK)
#define SDA_HIGH_STATE()	SDA_DDR &= ~(1<<SDA_MASK)
#define SDA_LOW_STATE()		SDA_DDR |= (1<<SDA_MASK)

//SCL - Clock
#define SCL_DDR				DDRD
#define SCL_MASK			3
#define SCL_READ			PIND
#define SCL_WRITE			PORTD

//SDA - Macros
#define SCL_SETUP()			SCL_WRITE &= ~(1<<SCL_MASK)
#define SCL_HIGH_STATE()	SCL_DDR &= ~(1<<SCL_MASK)
#define SCL_LOW_STATE()		SCL_DDR |= (1<<SCL_MASK)

#endif /* I2C_LIB_H_ */