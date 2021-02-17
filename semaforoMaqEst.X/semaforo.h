#ifndef SEMAFORO_H
#define SEMAFORO_H

void semaforo_init  ( void );
void vermelho ( int t );
void amarelo ( int t );
void verde ( int t );
int btPedestre ( void );
void verde_ped ( void );
void vermelho_ped ( void );

#endif