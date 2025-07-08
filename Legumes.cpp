//
// Created by lucas on 08/07/2025.
//

#include "Legumes.h"
#include "Alimentos.h"
#include <iostream>

using namespace std;

// Definir construtor Legumes:
Legumes::Legumes(
    const string &tipo_alimento,
    const float &preco,
    const int &quantidade,
    const string &nomeProduto) : Alimentos(tipo_alimento, preco, quantidade, nomeProduto)
{
};

// Definir o metodo Puramente Virtual para Legumes:
double Legumes::calcularValorEstoque() {
    double total = getPreco() * getQuantidade();
    return total;
};

double Legumes::calcularDesconto() {
    double desconto = 0.00f;
    return desconto;
};

double Legumes::calcularTotal() {
    double totalComDesconto = calcularValorEstoque();
    return totalComDesconto;
};