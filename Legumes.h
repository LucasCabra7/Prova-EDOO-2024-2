//
// Created by lucas on 08/07/2025.
//

#ifndef LEGUMES_H
#define LEGUMES_H

#include "Alimentos.h"
#include <string>

using std::string;

class Legumes : public Alimentos {

public:
    // Construtor:
    Legumes(const string &tipo_alimento, const float &preco, const int &quantidade, const string &nomeProduto);

    // Metodo Puramente Virtual:
    double calcularValorEstoque();
    double calcularDesconto();
    double calcularTotal();
};


#endif