/*
 * File:   semaforo.c
 * Author: 21192694
 *
 * Created on 4 de Fevereiro de 2021, 17:13
 */


#include <xc.h>
#include "config.h"
#include "delay.h"

void semaforo_init  ( void )
{
    TRISDbits.TRISD7 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD5 = 0;
    TRISDbits.TRISD1 = 1;
    TRISDbits.TRISD2 = 0;
    TRISDbits.TRISD3 = 0;
    PORTD = 0;
}

void vermelho ( int t )
{
    PORTDbits.RD7 = 1;
    PORTDbits.RD6 = 0;
    PORTDbits.RD5 = 0;
    delay( t );
}

void amarelo ( int t )
{
    PORTDbits.RD6 = 1;
    PORTDbits.RD5 = 0;
    PORTDbits.RD7 = 0;
    delay( t );
}

void verde ( int t )
{
    PORTDbits.RD5 = 1;
    PORTDbits.RD6 = 0;
    PORTDbits.RD7 = 0;
    delay( t );
}

int btPedestre ( void )
{
    return (PORTDbits.RD1);
}

void verde_ped ( void )
{
    PORTDbits.RD3 = 0;
    PORTDbits.RD2 = 1;
}

void vermelho_ped ( void )
{
    PORTDbits.RD2 = 0;
    PORTDbits.RD3 = 1;
}