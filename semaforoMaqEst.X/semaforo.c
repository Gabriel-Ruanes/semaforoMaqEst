/*
 * File:   semaforo.c
 * Author: Gabriel Ruanes Melquiades
 *
 * Created on 4 de Fevereiro de 2021, 17:13
 */


#include <xc.h>
#include "config.h"

#define     VERMELHO        PORTDbits.RD7 
#define     AMARELO         PORTDbits.RD6
#define     VERDE           PORTDbits.RD5 

#define     BOTAO           PORTDbits.RD1

#define     VERDE_PED       PORTDbits.RD2
#define     VERMELHO_PED    PORTDbits.RD3

void semaforo_init  ( void )
{
    TRISDbits.TRISD7 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD5 = 0;
    TRISDbits.TRISD1 = 1;
    TRISDbits.TRISD2 = 0;
    TRISDbits.TRISD3 = 0;
    PORTDbits.RD1 = 0;
    PORTDbits.RD2 = 0;
    PORTDbits.RD3 = 0;
    PORTDbits.RD5 = 0;
    PORTDbits.RD6 = 0;
    PORTDbits.RD7 = 0;
}

void vermelho ( int x )
{
    VERMELHO = x;
}

void amarelo ( int x )
{
    AMARELO = x;
}

void verde ( int x )
{
    VERDE = x;
}

int btPedestre ( void )
{
    return (BOTAO);
}

void verde_ped ( int x )
{
    VERDE_PED = x;
}

void vermelho_ped ( int x )
{
    VERMELHO_PED = x;
}