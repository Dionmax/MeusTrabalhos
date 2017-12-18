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

void encerrar_programa(bool &programa_executando)
{
	encerramento_escrito();
	programa_executando = false;
}

void menu(Usuarios *usuario, int &quantidade_usuarios)
{
	bool programa_executando = true;

	apresentacao_escrito();
	menu_opcoes();

	quebra_de_linha();

	do
	{
		menu_login_criar();
		switch (selecionar_escolha(3))
		{
		case 1:
			char nome[100];
			solicitar_nome_login_escrito();
			cin.getline(nome, 100);
			if (buscar_usuario_login(usuario, quantidade_usuarios, nome) != NAO_ACHADO)
				cout << "aaaaaa" << endl;
				break;
		case 2:
			usuario[quantidade_usuarios - 1] = criar_novo_usuario(usuario, quantidade_usuarios);
			break;
		case 3:
			encerrar_programa(programa_executando);
		default:
			break;
		}

		//escreve_informações_usuarios_escrito(usuario, quantidade_usuarios - 1);

	} while (programa_executando);
}

void teste()
{
	Usuarios *um, *dois;

	um = new Usuarios[2];
	dois = new Usuarios[2];

	//um[0].nome_login = "Dion";

}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	Usuarios *usuario;

	int quantidade_usuarios = 0;

	usuario = new Usuarios[quantidade_usuarios];

	menu(usuario, quantidade_usuarios);

	//teste();

	cin.get();
	return 0;
}
