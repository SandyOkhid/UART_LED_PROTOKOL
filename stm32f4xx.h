/**
  ******************************************************************************
  * @file    stm32f4xx.h
  * @author  MCD Application Team
  * @version V1.2.0RC2 - edited by Keil
  * @date    20-February-2013
  * @brief   CMSIS Cortex-M4 Device Peripheral Access Layer Header File. 
  *          This file contains all the peripheral register's definitions, bits 
  *          definitions and memory mapping for STM32F4xx devices.            
  *            
  *          The file is the unique include file that the application programmer
  *          is using in the C source code, usually in main.c. This file contains:
  *           - Configuration section that allows to select:
  *              - The device used in the target application
  *              - To use or not the peripheral’s drivers in application code(i.e. 
  *                code will be based on direct access to peripheral’s registers 
  *                rather than drivers API), this option is controlled by 
  *                "#define USE_STDPERIPH_DRIVER"
  *              - To change few application-specific parameters such as the HSE 
  *                crystal frequency
  *           - Data structures and the address mapping for all peripherals
  *           - Peripheral's registers declarations and bits definition
  *           - Macros to access peripheral’s registers hardware
