#include <iostream>
#include <string>

const int TAM = 10;
const int DESTROIER = 2;
const int SUBMARINO = 3;
const int CRUZADOR = 3;
const int ENCOURACADO = 4;
const int PORTAAVIAO= 5;

using namespace std;

class Jogador{
public:
	int acertos;
	bool tana_vez;
	string nome;
	char tabuleiro[TAM][TAM];
	char tabuleiro_oponente[TAM][TAM];
	Jogador(){
		tana_vez = false;
		acertos = 0;
		for(int i = 0; i < TAM; i++){
			for(int j = 0; j < TAM; j++){
				tabuleiro[i][j] = '~';
				tabuleiro_oponente[i][j] = '~';
			}
		}
	}
};

void mostraTabulerio(char matriz[TAM][TAM]);

int main(){
	Jogador jogador1;
	mostraTabulerio(jogador1.tabuleiro);
	cout << endl;
	mostraTabulerio(jogador1.tabuleiro_oponente);
return 0;
}

void mostraTabulerio(char matriz[TAM][TAM]){
	for(int i = 0; i < TAM; i++){
		for(int j = 0; j < TAM; j++){
			if( j < TAM - 1) cout << " " << matriz[i][j]; 	
			else cout << " " << matriz[i][j] << endl;
		}
	}
}