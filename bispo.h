#ifndef BISPO_H
#define BISPO_H

#include <iostream>
#include <string>
#include "peca.h"

class Tabuleiro;

class Bispo:public Peca
{

public:
	//funcao responsavel por verificar se a jogada eh valida
	bool verifica_jogada( int pos_final_i, int pos_final_j, Tabuleiro *tabuleiro);

	std::string retornaString() override {

		if(getCor() == 'P') return "\u265D";
		else return "\u2654";
	}
	virtual QGraphicsItem *createItem(QGraphicsScene *scene) override {
		 if(getCor()=='B')
			  return scene->addPixmap(QPixmap(":/Imagens/w_bishop_png_shadow_256px.png").scaled(80, 80));
		 else
			  return scene->addPixmap(QPixmap(":/Imagens/b_bishop_png_shadow_256px.png").scaled(80, 80));
	}

private:
	int peca_no_caminho(int pos_atual_i, int pos_atual_j, int pos_final_i, int pos_final_j, Tabuleiro *tabuleiro);
};

#endif
