// TrabalhoRedeSocial.cpp :Defines the entry point for Dionmax the console application.
//

#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <iostream>
#include <istream>

#include "SuporteEscrita.h"
#include "Modelo.h"
#include "Criacao_usuario.h"
#include "Autenticacao_usuario.h"

using namespace std;

void encerrar_programa()
{

}

void menu(Usuarios *usuario, int &quantidade_usuarios)
{
	apresentacao_escrito();
	menu_opcoes();

	quebra_de_linha();

	do
	{
		menu_login_criar();
		switch (selecionar_escolha(3))
		{
		case 1:
			if (buscar_usuario_login(usuario, quantidade_usuarios, solicitar_login()) != NAO_ACHADO)
				cout << "aaaaaaaaaaaaa" << endl;
			else
				cout << "bbbbbbbbb" << endl;
			break;
		case 2:
			criar_novo_usuario(usuario, quantidade_usuarios);
			break;
		case 3:
			encerrar_programa();
		default:
			break;
		}
	} while (true);



}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	Usuarios *usuario;

	int quantidade_usuarios = 0;

	usuario = new Usuarios[quantidade_usuarios];

	menu(usuario, quantidade_usuarios);

	cin.get();
	return 0;
}
