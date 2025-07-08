//
// Created by lucas on 08/07/2025.
//

#include "Verduras.h"
#include "Alimentos.h"
#include <iostream>

using namespace std;

// Definir o construtor:
Verduras::Verduras(
    const string &tipo_alimento,
    const float &preco,
    const int &quantidade,
    const string &nomeProduto) : Alimentos(tipo_alimento, preco, quantidade, nomeProduto)
{

};

// Definir o metodo puramente virtual para Verdura:
double Verduras::calcularValorEstoque() {
    double total = getPreco() * getQuantidade();
    return total;
};

double Verduras::calcularDesconto() {
    double desconto = calcularValorEstoque() * 0.05f;
    return desconto;
};

double Verduras::calcularTotal() {
    double totalComDesconto = calcularValorEstoque() - calcularDesconto();
    return totalComDesconto;
};
