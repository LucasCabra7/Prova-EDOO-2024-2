//
// Created by lucas on 08/07/2025.
//

#include "Alimentos.h"
#include <iostream>

using namespace std;

// Definição do Construtor:
Alimentos::Alimentos(const string &tipoAlimento, const float &preco, const int &quantidade, const string &nomeProduto) {

    this->tipoAlimento = tipoAlimento;
    this->preco = preco;
    this->quantidade = quantidade;
    this->nomeProduto = nomeProduto;
};

// Definição dos Getters:
string Alimentos::getTipoAlimento() { return tipoAlimento; }
float Alimentos::getPreco() { return preco; }
int Alimentos::getQuantidade() { return quantidade; }
string Alimentos::getNomeProduto() { return nomeProduto; }

// Definição dos Setters:
void Alimentos::setTipoAlimento(const string &t) { tipoAlimento = t; }
void Alimentos::setPreco(const float &p) { preco = p; }
void Alimentos::setQuantidade(const int &q) { quantidade = q; }
void Alimentos::setNomeProduto(const string &n) { nomeProduto = n; }

