/* 
 * File:   Pulses.h
 * Author: C0485763
 *
 * Created on 3 de Agosto de 2017, 17:27
 */

#ifndef PULSES_H
#define	PULSES_H

#include "UT.h"

volatile int dig_1;
volatile uint32_t freqPulses;

#ifdef	__cplusplus
extern "C" {
#endif

void setup_pulsos(void);
uint32_t le_pulsos(void);



#ifdef	__cplusplus
}
#endif

#endif	/* PULSES_H */

