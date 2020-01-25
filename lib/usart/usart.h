#ifndef __USART_H
#define __USART_H
#include "stdio.h"	
#include "stm32f4xx_hal_conf.h"
#include "sys.h" 


#define USART_REC_LEN  			200  	//¶¨Òå×î´ó½ÓÊÕ×Ö½ÚÊý 200
#define EN_USART1_RX 			1		//Ê¹ÄÜ£¨1£©/½ûÖ¹£¨0£©´®¿Ú1½ÓÊÕ
	  	
extern uint8_t  USART_RX_BUF[USART_REC_LEN]; //½ÓÊÕ»º³å,×î´óUSART_REC_LEN¸ö×Ö½Ú.Ä©×Ö½ÚÎª»»ÐÐ·û 
extern uint16_t USART_RX_STA;         		//½ÓÊÕ×´Ì¬±ê¼Ç	
void uart_init(uint32_t bound);
#endif



