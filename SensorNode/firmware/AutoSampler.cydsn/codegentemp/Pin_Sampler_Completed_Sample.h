/*******************************************************************************
* File Name: Pin_Sampler_Completed_Sample.h  
* Version 1.90
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Pin_Sampler_Completed_Sample_H) /* Pins Pin_Sampler_Completed_Sample_H */
#define CY_PINS_Pin_Sampler_Completed_Sample_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Pin_Sampler_Completed_Sample_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v1_90 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Pin_Sampler_Completed_Sample__PORT == 15 && ((Pin_Sampler_Completed_Sample__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    Pin_Sampler_Completed_Sample_Write(uint8 value) ;
void    Pin_Sampler_Completed_Sample_SetDriveMode(uint8 mode) ;
uint8   Pin_Sampler_Completed_Sample_ReadDataReg(void) ;
uint8   Pin_Sampler_Completed_Sample_Read(void) ;
uint8   Pin_Sampler_Completed_Sample_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Pin_Sampler_Completed_Sample_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define Pin_Sampler_Completed_Sample_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define Pin_Sampler_Completed_Sample_DM_RES_UP          PIN_DM_RES_UP
#define Pin_Sampler_Completed_Sample_DM_RES_DWN         PIN_DM_RES_DWN
#define Pin_Sampler_Completed_Sample_DM_OD_LO           PIN_DM_OD_LO
#define Pin_Sampler_Completed_Sample_DM_OD_HI           PIN_DM_OD_HI
#define Pin_Sampler_Completed_Sample_DM_STRONG          PIN_DM_STRONG
#define Pin_Sampler_Completed_Sample_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define Pin_Sampler_Completed_Sample_MASK               Pin_Sampler_Completed_Sample__MASK
#define Pin_Sampler_Completed_Sample_SHIFT              Pin_Sampler_Completed_Sample__SHIFT
#define Pin_Sampler_Completed_Sample_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Pin_Sampler_Completed_Sample_PS                     (* (reg8 *) Pin_Sampler_Completed_Sample__PS)
/* Data Register */
#define Pin_Sampler_Completed_Sample_DR                     (* (reg8 *) Pin_Sampler_Completed_Sample__DR)
/* Port Number */
#define Pin_Sampler_Completed_Sample_PRT_NUM                (* (reg8 *) Pin_Sampler_Completed_Sample__PRT) 
/* Connect to Analog Globals */                                                  
#define Pin_Sampler_Completed_Sample_AG                     (* (reg8 *) Pin_Sampler_Completed_Sample__AG)                       
/* Analog MUX bux enable */
#define Pin_Sampler_Completed_Sample_AMUX                   (* (reg8 *) Pin_Sampler_Completed_Sample__AMUX) 
/* Bidirectional Enable */                                                        
#define Pin_Sampler_Completed_Sample_BIE                    (* (reg8 *) Pin_Sampler_Completed_Sample__BIE)
/* Bit-mask for Aliased Register Access */
#define Pin_Sampler_Completed_Sample_BIT_MASK               (* (reg8 *) Pin_Sampler_Completed_Sample__BIT_MASK)
/* Bypass Enable */
#define Pin_Sampler_Completed_Sample_BYP                    (* (reg8 *) Pin_Sampler_Completed_Sample__BYP)
/* Port wide control signals */                                                   
#define Pin_Sampler_Completed_Sample_CTL                    (* (reg8 *) Pin_Sampler_Completed_Sample__CTL)
/* Drive Modes */
#define Pin_Sampler_Completed_Sample_DM0                    (* (reg8 *) Pin_Sampler_Completed_Sample__DM0) 
#define Pin_Sampler_Completed_Sample_DM1                    (* (reg8 *) Pin_Sampler_Completed_Sample__DM1)
#define Pin_Sampler_Completed_Sample_DM2                    (* (reg8 *) Pin_Sampler_Completed_Sample__DM2) 
/* Input Buffer Disable Override */
#define Pin_Sampler_Completed_Sample_INP_DIS                (* (reg8 *) Pin_Sampler_Completed_Sample__INP_DIS)
/* LCD Common or Segment Drive */
#define Pin_Sampler_Completed_Sample_LCD_COM_SEG            (* (reg8 *) Pin_Sampler_Completed_Sample__LCD_COM_SEG)
/* Enable Segment LCD */
#define Pin_Sampler_Completed_Sample_LCD_EN                 (* (reg8 *) Pin_Sampler_Completed_Sample__LCD_EN)
/* Slew Rate Control */
#define Pin_Sampler_Completed_Sample_SLW                    (* (reg8 *) Pin_Sampler_Completed_Sample__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Pin_Sampler_Completed_Sample_PRTDSI__CAPS_SEL       (* (reg8 *) Pin_Sampler_Completed_Sample__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Pin_Sampler_Completed_Sample_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Pin_Sampler_Completed_Sample__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Pin_Sampler_Completed_Sample_PRTDSI__OE_SEL0        (* (reg8 *) Pin_Sampler_Completed_Sample__PRTDSI__OE_SEL0) 
#define Pin_Sampler_Completed_Sample_PRTDSI__OE_SEL1        (* (reg8 *) Pin_Sampler_Completed_Sample__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Pin_Sampler_Completed_Sample_PRTDSI__OUT_SEL0       (* (reg8 *) Pin_Sampler_Completed_Sample__PRTDSI__OUT_SEL0) 
#define Pin_Sampler_Completed_Sample_PRTDSI__OUT_SEL1       (* (reg8 *) Pin_Sampler_Completed_Sample__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Pin_Sampler_Completed_Sample_PRTDSI__SYNC_OUT       (* (reg8 *) Pin_Sampler_Completed_Sample__PRTDSI__SYNC_OUT) 


#if defined(Pin_Sampler_Completed_Sample__INTSTAT)  /* Interrupt Registers */

    #define Pin_Sampler_Completed_Sample_INTSTAT                (* (reg8 *) Pin_Sampler_Completed_Sample__INTSTAT)
    #define Pin_Sampler_Completed_Sample_SNAP                   (* (reg8 *) Pin_Sampler_Completed_Sample__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Pin_Sampler_Completed_Sample_H */


/* [] END OF FILE */
