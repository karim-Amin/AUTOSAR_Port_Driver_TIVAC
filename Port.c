 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port.c
 *
 * Description: Source file for TM4C123GH6PM Microcontroller - Port Driver
 *
 * Author: Karim Mohamed Amin
 ******************************************************************************/

#include "Port.h"
#include "Port_REG.h"

/* check as it is optional feature */
#if (PORT_DEV_ERROR_DETECT == STD_ON)

#include "Det.h"
/* AUTOSAR Version checking between Det and Port Modules */
#if ((DET_AR_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 || (DET_AR_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 || (DET_AR_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Port.h does not match the expected version"
#endif

#endif
/******************************************************************************
 *                      Private Global variable                               *
******************************************************************************/

STATIC uint8 Port_Status = PORT_NOT_INITIALIZED;

/******************************************************************************
 *                      API Service Definitions                               *
******************************************************************************/

/************************************************************************************
* Service Name: Port_Init
* Sync/Async: Synchronous
* Reentrancy: Non-reentrant
* Parameters (in): ConfigPtr - Pointer to post-build configuration struct
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: initilaze the port driver module
************************************************************************************/
void Port_Init(const Port_ConfigType *ConfigPtr )
{
  
}
   
   
   