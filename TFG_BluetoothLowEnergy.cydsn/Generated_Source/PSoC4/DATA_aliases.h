/*******************************************************************************
* File Name: DATA.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_DATA_ALIASES_H) /* Pins DATA_ALIASES_H */
#define CY_PINS_DATA_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define DATA_0			(DATA__0__PC)
#define DATA_0_PS		(DATA__0__PS)
#define DATA_0_PC		(DATA__0__PC)
#define DATA_0_DR		(DATA__0__DR)
#define DATA_0_SHIFT	(DATA__0__SHIFT)
#define DATA_0_INTR	((uint16)((uint16)0x0003u << (DATA__0__SHIFT*2u)))

#define DATA_INTR_ALL	 ((uint16)(DATA_0_INTR))


#endif /* End Pins DATA_ALIASES_H */


/* [] END OF FILE */
