/*
 * ADC_pri.h
 *
 *  Created on: Feb 16, 2023
 *      Author: majec
 */

#ifndef ADC_ADC_PRI_H_
#define ADC_ADC_PRI_H_

#define ADMUX_REG    (*((volatile u8*)0x27)) // select (channel + adjust + Vref )
#define ADCSRA_REG	 (*((volatile u8*)0x26))
#define ADCL		 (*((volatile u16*)0x24))
#define ADCH		 (*((volatile u16*)0x25))
#define SFIOR_REG	 (*((volatile u8*)0x50))

// ADMUX_REG bits
#define ADLAR_BIT  	5   // left adjust

// ADCSRA_REG bits
#define ADIE_BIT	3	// interrupt enable
#define ADIF_BIT	4 	// interrupt flag
#define ADATE_BIT	5	// Auto Trigger Enable
#define ADSC_BIT	6 	// ADC Start Conversion
#define ADEN_BIT	7	// ADC Enable

#define ADC_PRESCALER_MASK 	0xF8
#define ADC_CHANNEL_MASK 	0xE0
#define ADC_VREF_MASK		0x3F

#define ADC_VREF_SHIFT		6

#define REFS0				6


#define ADPS0				0
#define ADPS1				1
#define ADPS2				2
#endif /* ADC_ADC_PRI_H_ */
