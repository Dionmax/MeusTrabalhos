// TrabalhoPokemonV2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <time.h>

#include "Atributos.h"
#include "Mapa.h"
#include "SuporteEscrita.h"
#include "Acoes.h"

using namespace std;

void andamento_jogo()
{
	Personagem Jogador,
		oponente[NUMERO_OPONENTES];

	Jogador.linha[0] = 7;
	Jogador.coluna[0] = 7;

	Pokemon monstros_jogo[NUMEROS_MONSTROS];

	gerar_mapa();

	atribuir_mostros(monstros_jogo);

	sortiar_monstros(Jogador, oponente, monstros_jogo);

	pokemons_sortiados(Jogador, oponente);

	system("cls");

	mostrar_status_monstros(monstros_jogo);

	system("cls");

	mapa[Jogador.linha[0]][Jogador.coluna[0]] = JOGADOR;

	gerar_oponentes(oponente);

	gerar_objetos();

	while (true)
	{
		escrever_mapa();

		movimentar_jogador(Jogador.linha[0], Jogador.coluna[0],Jogador);

		movimentar_oponentes(oponente, Jogador.linha[0], Jogador.coluna[0]);

		verificar_possivel_batalha(Jogador,oponente);

		system("cls");
	}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	srand(time(0));

	andamento_jogo();

	cin.get();
	cin.get();
	return 0;
}

