#ifndef SEMAFORO_H
#define SEMAFORO_H

void semaforo_init  ( void );
void vermelho ( int x );
void amarelo ( int x );
void verde ( int x );
int btPedestre ( void );
void verde_ped ( int x );
void vermelho_ped ( int x );

#endif