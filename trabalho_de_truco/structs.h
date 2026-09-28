/*Esse modulo guarda todas as structs utilizadas no jogo*/
#ifndef STRUCTS_H
#define STRUCTS_H

/*Estrtura "cartas" que guarda o naipe, o numero (escrito como carta) e o rank de poder dela*/
typedef struct cartas {
    char naipe;
    char carta;
    int rank;
} cartas;

/*Estrutura "jogador" que guarada o nome, a dupla no qual ele esta associado, um vetor tipo cartas para representar a mao que tem,
quantas vitorias o jogador possui pelo bar e os pontos dele dentro de uma sessão de jogo*/
typedef struct jogador {
    char nome[50];
    int dupla;
    cartas mao[3];
    int vitorias;
    int pontos;
} jogador;

/*Estrutura "mesa" para centralizar informações das rodadas*/
typedef struct mesa {
    jogador jogadores[4];
    int rodada;
    int competidas[4];
} mesa;

#endif