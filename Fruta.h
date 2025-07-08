//
// Created by lucas on 08/07/2025.
//

#ifndef FRUTA_H
#define FRUTA_H

#include "Alimentos.h"
#include <string>

using std::string;

class Fruta : public Alimentos {

public:
    Fruta(const string &tipo_alimento, const float &preco, const int &quantidade, const string &nomeProduto);

    // Metodo puramente virtual:
    double calcularValorEstoque();
    double calcularDesconto();
    double calcularTotal();

};



#endif
