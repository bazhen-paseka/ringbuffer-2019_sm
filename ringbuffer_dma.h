/**
* \version 1.0
* \author techmaker.ua
* \date 2020
*************************************************************************************
* \copyright	TechMaker
* \copyright	techmaker.ua
* \copyright	https://techmaker.ua/
*************************************************************************************
*/

#ifndef RINGBUFFER_DMA_H_INCLUDED
#define RINGBUFFER_DMA_H_INCLUDED

/*
**************************************************************************
*								INCLUDE FILES
**************************************************************************
*/
	#include <stdint.h>
	#include "main.h"
/*
**************************************************************************
*								   DATA TYPES
**************************************************************************
*/
	typedef struct {
		uint8_t				*data		;
		uint32_t			 size		;
		DMA_HandleTypeDef	*hdma		;
		uint8_t const 		*tail_ptr	;
	} 		RingBuffer_DMA 				;

/*
**************************************************************************
*                              FUNCTION PROTOTYPES
**************************************************************************
*/
	void RingBuffer_DMA_Init(	RingBuffer_DMA		*buffer	,
								DMA_HandleTypeDef	*hdma	,
								uint8_t 			*data	,
								uint32_t 			 size	) ;

	uint8_t RingBuffer_DMA_GetByte( RingBuffer_DMA	*buffer ) ;
	uint32_t RingBuffer_DMA_Count(	RingBuffer_DMA	*buffer	) ;

#endif /* RINGBUFFER_H_INCLUDED */
