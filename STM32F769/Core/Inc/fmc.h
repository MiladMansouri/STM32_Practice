/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * File Name          : FMC.h
 * Description        : This file provides code for the configuration
 *                      of the FMC peripheral.
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */
/* USER CODE END Header */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __FMC_H
#define __FMC_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

extern SDRAM_HandleTypeDef hsdram1;

/* USER CODE BEGIN Private defines */
#define   SDRAM_OK         						((uint8_t)0x00)
#define   SDRAM_ERROR      						((uint8_t)0x01)
#define SDRAM_DEVICE_ADDR  						((uint32_t)0xC0000000)
#define SDRAM_DEVICE_SIZE  						((uint32_t)0x1000000)  /* SDRAM device size in MBytes */
#define SDRAM_MEMORY_WIDTH               		FMC_SDRAM_MEM_BUS_WIDTH_32
#define SDCLOCK_PERIOD                   		FMC_SDRAM_CLOCK_PERIOD_2
#define REFRESH_COUNT                    		((uint32_t)0x0603)   /* SDRAM refresh counter (100Mhz SD clock) */
#define SDRAM_TIMEOUT                    		((uint32_t)0xFFFF)
#define __DMAx_CLK_ENABLE                 		__HAL_RCC_DMA2_CLK_ENABLE
#define __DMAx_CLK_DISABLE                		__HAL_RCC_DMA2_CLK_DISABLE
#define SDRAM_DMAx_CHANNEL                		DMA_CHANNEL_0
#define SDRAM_DMAx_STREAM                 		DMA2_Stream0  
#define SDRAM_DMAx_IRQn                   		DMA2_Stream0_IRQn
#define BSP_SDRAM_DMA_IRQHandler          		DMA2_Stream0_IRQHandler  
#define SDRAM_MODEREG_BURST_LENGTH_1             ((uint16_t)0x0000)
#define SDRAM_MODEREG_BURST_LENGTH_2             ((uint16_t)0x0001)
#define SDRAM_MODEREG_BURST_LENGTH_4             ((uint16_t)0x0002)
#define SDRAM_MODEREG_BURST_LENGTH_8             ((uint16_t)0x0004)
#define SDRAM_MODEREG_BURST_TYPE_SEQUENTIAL      ((uint16_t)0x0000)
#define SDRAM_MODEREG_BURST_TYPE_INTERLEAVED     ((uint16_t)0x0008)
#define SDRAM_MODEREG_CAS_LATENCY_2              ((uint16_t)0x0020)
#define SDRAM_MODEREG_CAS_LATENCY_3              ((uint16_t)0x0030)
#define SDRAM_MODEREG_OPERATING_MODE_STANDARD    ((uint16_t)0x0000)
#define SDRAM_MODEREG_WRITEBURST_MODE_PROGRAMMED ((uint16_t)0x0000) 
#define SDRAM_MODEREG_WRITEBURST_MODE_SINGLE     ((uint16_t)0x0200) 
/* USER CODE END Private defines */

void MX_FMC_Init(void);
void HAL_SDRAM_MspInit(SDRAM_HandleTypeDef* hsdram);
void HAL_SDRAM_MspDeInit(SDRAM_HandleTypeDef* hsdram);

/* USER CODE BEGIN Prototypes */

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif
#endif /*__FMC_H */

/**
  * @}
  */

/**
  * @}
  */
