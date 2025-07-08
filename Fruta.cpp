//
// Created by lucas on 08/07/2025.
//

#include "Fruta.h"
#include "Alimentos.h"
#include <iostream>

using namespace std;

// Definir o Construtor:
Fruta::Fruta(
    const string &tipoAlimento,
    const float &preco,
    const int &quantidade,
    const string &nomeProduto) : Alimentos(tipoAlimento, preco, quantidade, nomeProduto)
{
};

// Definir o metodo puramente virutal para Fruta:
double Fruta::calcularValorEstoque() {
    double total = getPreco() * getQuantidade();
    return total;
};

double Fruta::calcularDesconto() {
    double desconto = calcularValorEstoque() * 0.1f;
    return desconto;
};

double Fruta::calcularTotal() {
    double totalComDesconto = calcularValorEstoque() - calcularDesconto();
    return totalComDesconto;
};