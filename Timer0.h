#ifndef _TIMER0_H
#define _TIMER0_H

#include <inttypes.h>

/* Función para inicializar el Timer0 y generar */
/* la temporización de 1 milisegundo. */
void Timer0_Ini ( void );

/* Función para verificar bandera del segundo */
uint8_t Timer0_SecFlag ( void );

/* Inicializa Timer0 y deja activada la interrupción cada milisegundo */
void TimerInit(void):

/* Retorna el conteo actual de milisegundos desde que inició el sistema */
uint32_t millis(void):

/* Función que espera n-milisegundos especificados por el parámetro de entrada */
void delay(uint16_t msWaitTime):

/* Función que registra un apuntador de función, la cual deberá ser invocada al transcurrir los milisegundos dados en msWaitTime. 
   El último parámetro es el número de veces que se autoregistra de nuevo el timer, y el valor 0 seria repetir indefinidamente.
   El propósito del parámetro del callback is para utilizarlo como identificador de la gota y generalizar la función.*/
void TimerRegister(void (*callback)(uint8_t), uint16_t msWaitTime, uint8_t repeatCounter);

#endif /* _TIMER0_H */