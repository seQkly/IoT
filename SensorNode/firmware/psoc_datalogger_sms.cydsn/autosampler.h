/*******************************************************************************
* This file is automatically generated by PSoC Creator
* and should not be edited by hand.
*
* This file is necessary for your project to build.
* Please do not delete it.
********************************************************************************
* Copyright 2008-2011, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/
#ifndef AUTOSAMPLER_H
#define AUTOSAMPLER_H
#endif

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

#define AUTOSAMPLER_STATE_OFF       0
#define AUTOSAMPLER_STATE_IDLE      1
#define AUTOSAMPLER_STATE_BUSY      3
#define MAX_BOTTLE_COUNT            24
#define PULSE_COUNT                 20

extern uint8    autosampler_state;
extern uint8    SampleCount;

uint8 autosampler_start();
uint8 autosampler_stop();
uint8 autosampler_power_on();
uint8 autosampler_power_off();
uint8 autosampler_take_sampler(uint8* count);

/* [] END OF FILE */
