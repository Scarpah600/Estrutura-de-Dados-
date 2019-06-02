#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <sstream>
#include <istream>



using namespace std;

struct agenda{
	string nome;
	string telefone;
	int idade;
};

struct lista{
	int info;
	struct lista* ant;
	struct lista* prox;
	agenda*itemAgenda = new  agenda;
};

typedef struct lista Lista;


Lista * iniciliza(void){
	return NULL;
}

Lista* andando(Lista* i, int v){
	//Lista * novo = new Lista;
	i->info = v;
	i->prox = i;
	i->ant = NULL;

	if (i != NULL)
		i->ant = i;
	return NULL;
}
Lista * insere1(Lista *i, string nomeRef, int idadeRef, string telRef){
	
	agenda *ag = new agenda;
	Lista *novo = new Lista;
	novo->itemAgenda = ag;
	novo->itemAgenda->nome = nomeRef;
	novo->itemAgenda->idade = idadeRef;
	novo->itemAgenda->telefone = telRef;
	novo->prox = i;
	return novo;

}

Lista *remover(Lista *i, string nome){
	Lista *ant = NULL;
	lista *p = i;

	while (p != NULL && p->itemAgenda->nome != nome){
		ant = p;
		p = p->prox;
	}
	if (p == NULL)
		return i;
	if (ant == NULL){
		i = p->prox;
	}
	else{
		ant->prox = p->prox;
	}

	delete p;

	return i;
}


void inserirdados(Lista *i)
{
	
	string nome;
    string telefone;
	int idade = 0;

	cout << "Digite seu nome:";
	cin.ignore();
	//getline(cin,nome);
	getline(cin, i->itemAgenda->nome);
	cout << "Digite sua idade:";
	//cin >> idade;
	cin >> i->itemAgenda->idade;
	cout << "Digite seu telefone:";
	cin.ignore();
	getline(cin, i->itemAgenda->telefone);
	
	i = insere1(i,i->itemAgenda->nome, i->itemAgenda->idade, i->itemAgenda->telefone);


}

void imprimir(Lista *i){

	Lista *p;
	
	for (p = i; p != NULL; p = p->prox)
		if (p != NULL){
			cout << "Nome: " << i->itemAgenda->nome << "\n" << "Idade:" << i->itemAgenda->idade << "\n" << "Telefone:" << i->itemAgenda->telefone << "\n";
		}
		else{
			cout << "Lista Vazia";
		}
		system("pause");
	

}
