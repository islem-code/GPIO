


#ifndef __GIOP_H
#define __GPIO_H

#include <stdint.h>
#include <assert.h> // bibliotheque pr�s d�fini elle entre dans les fonctions et tester les param�tres

void GPIO_Config(uint32_t *GPIOx, uint8_t pin, uint8_t Mode, uint8_t Type);

#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7
#define PIN8 8
#define PIN9 9
#define PIN10 10
#define PIN11 11
#define PIN12 12
#define PIN13 13
#define PIN14 14
#define PIN15 15

#define INPUT                   (uint8_t) 0x0
#define OUTPUT                  (uint8_t) 0x1
#define ALTERNATE               (uint8_t) 0x2 // ALTERNATE: pin n'a pas ni input ni ouput 
#define ANALOG_INPUT            (uint8_t) 0x3
#define OUTPUT_PUSH_PULL        (uint8_t )0
#define OUTPUT_OPEN_DRAIN       (uint8_t) 1 



void  GPIO_Clock_Enable(uint32_t *GPIOx); 

#define GPIOA (uint32_t* )0x40020000
#define GPIOB (uint32_t* )0x40020400
#define GPIOC (uint32_t* )0x40020800
#define GPIOD (uint32_t* )0x40020c00

#endif

