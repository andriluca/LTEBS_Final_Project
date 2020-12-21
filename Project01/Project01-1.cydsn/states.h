/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include "cytypes.h"
#include "define.h"
#include "interrupt.h"

#ifndef __STATES_H
    #define __STATES_H
    #include "project.h"
    
    _Bool onTemperature();
    _Bool onWatermark();
    _Bool onWriteEEPROM();
    _Bool onReadEEPROM();
    _Bool onEEPROMReset();

    void doTemperature();
    void doWatermark();
    void doWriteEEPROM();
    void doReadEEPROM();
    void doEEPROMReset();


    void init();
#endif


/* [] END OF FILE */
