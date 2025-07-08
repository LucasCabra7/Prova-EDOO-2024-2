//
// Created by lucas on 08/07/2025.
//

#ifndef VERDURAS_H
#define VERDURAS_H

#include "Alimentos.h"
#include <string>

using std::string;

class Verduras : public Alimentos {

public:
    // Construtor:
    Verduras(const string &tipo_alimento, const float &preco, const int &quantidade, const string &nomeProduto);

    // Metodo puramente virtual:
    double calcularValorEstoque();
    double calcularDesconto();
    double calcularTotal();
};

#endif