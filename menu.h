#include "agend1.h"



void menu(){

	cout << "1 - Cadastrar na Agenda\n";
	cout << "2 - Lista a Agenda\n";
	cout << "3 - Remover da Agenda\n";
	cout << "4 - Sair\n";
	cout << "\n\n";	 
}


void mostraOpcao()
{
	int opcao;
	Lista *i = new Lista;

	cout << "Digite a opcao deseja:";
	cin >> opcao;

	do{

		switch (opcao){
		case 1:
			inserirdados(i);
			break;
		case 2:
			imprimir(i);
			break;
		case 3:
			cout << "Remover Contatos na Agenda";
			break;
		case 4:
			cout << "Sair";
		default:
			break;
		}

		system("cls");
		menu();

		cout << "Digite a opcao deseja:";
		cin >> opcao;

	} while (opcao != 4);


}