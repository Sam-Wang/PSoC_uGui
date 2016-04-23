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
#include <project.h>

#include "..\..\..\PSoC_uGui_Library\ugui.h"
#include "..\..\..\PSoC_uGui_Drivers\ugui_st7735.h"

int main()
{
    //CyGlobalIntEnable; /* Enable global interrupts. */

    /* *** Initialize display and related hardware. * ***/
    Display_Init();
    
    UG_FillScreen(C_WHITE);

    UG_DrawFrame(0, 0, 127, 159, C_GREEN);
    UG_DrawFrame(1, 1, 126, 158, C_RED);
    UG_DrawFrame(2, 2, 125, 157, C_BLUE);
    UG_FillFrame(4, 50, 123, 155, C_AQUA_MARINE);

    UG_FontSelect(&FONT_10X16);
    UG_SetBackcolor(C_BLACK);
    UG_SetForecolor(C_YELLOW);
    UG_PutString(5, 5 , "uGui");
        
    UG_FontSelect(&FONT_10X16);
    UG_SetBackcolor(C_BLACK);
    UG_SetForecolor(C_YELLOW);
    UG_PutString(5, 18, "PSoC 4");
    
    UG_DrawCircle(26, 72, 10, C_RED);
    UG_DrawFrame(49, 62, 69, 82, C_BLUE);
    UG_DrawRoundFrame(82, 62, 102, 82, 5, C_BLUE);

    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
