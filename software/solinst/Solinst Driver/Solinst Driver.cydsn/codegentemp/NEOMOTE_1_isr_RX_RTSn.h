/*******************************************************************************
* File Name: NEOMOTE_1_isr_RX_RTSn.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_NEOMOTE_1_isr_RX_RTSn_H)
#define CY_ISR_NEOMOTE_1_isr_RX_RTSn_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void NEOMOTE_1_isr_RX_RTSn_Start(void);
void NEOMOTE_1_isr_RX_RTSn_StartEx(cyisraddress address);
void NEOMOTE_1_isr_RX_RTSn_Stop(void);

CY_ISR_PROTO(NEOMOTE_1_isr_RX_RTSn_Interrupt);

void NEOMOTE_1_isr_RX_RTSn_SetVector(cyisraddress address);
cyisraddress NEOMOTE_1_isr_RX_RTSn_GetVector(void);

void NEOMOTE_1_isr_RX_RTSn_SetPriority(uint8 priority);
uint8 NEOMOTE_1_isr_RX_RTSn_GetPriority(void);

void NEOMOTE_1_isr_RX_RTSn_Enable(void);
uint8 NEOMOTE_1_isr_RX_RTSn_GetState(void);
void NEOMOTE_1_isr_RX_RTSn_Disable(void);

void NEOMOTE_1_isr_RX_RTSn_SetPending(void);
void NEOMOTE_1_isr_RX_RTSn_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the NEOMOTE_1_isr_RX_RTSn ISR. */
#define NEOMOTE_1_isr_RX_RTSn_INTC_VECTOR            ((reg32 *) NEOMOTE_1_isr_RX_RTSn__INTC_VECT)

/* Address of the NEOMOTE_1_isr_RX_RTSn ISR priority. */
#define NEOMOTE_1_isr_RX_RTSn_INTC_PRIOR             ((reg8 *) NEOMOTE_1_isr_RX_RTSn__INTC_PRIOR_REG)

/* Priority of the NEOMOTE_1_isr_RX_RTSn interrupt. */
#define NEOMOTE_1_isr_RX_RTSn_INTC_PRIOR_NUMBER      NEOMOTE_1_isr_RX_RTSn__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable NEOMOTE_1_isr_RX_RTSn interrupt. */
#define NEOMOTE_1_isr_RX_RTSn_INTC_SET_EN            ((reg32 *) NEOMOTE_1_isr_RX_RTSn__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the NEOMOTE_1_isr_RX_RTSn interrupt. */
#define NEOMOTE_1_isr_RX_RTSn_INTC_CLR_EN            ((reg32 *) NEOMOTE_1_isr_RX_RTSn__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the NEOMOTE_1_isr_RX_RTSn interrupt state to pending. */
#define NEOMOTE_1_isr_RX_RTSn_INTC_SET_PD            ((reg32 *) NEOMOTE_1_isr_RX_RTSn__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the NEOMOTE_1_isr_RX_RTSn interrupt. */
#define NEOMOTE_1_isr_RX_RTSn_INTC_CLR_PD            ((reg32 *) NEOMOTE_1_isr_RX_RTSn__INTC_CLR_PD_REG)


#endif /* CY_ISR_NEOMOTE_1_isr_RX_RTSn_H */


/* [] END OF FILE */
