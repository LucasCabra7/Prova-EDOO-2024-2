//
// Created by lucas on 08/07/2025.
//

#ifndef ALIMENTOS_H
#define ALIMENTOS_H

#include <string>
using std::string;


class Alimentos {

private:
    string tipoAlimento;
    float preco;
    int quantidade;
    string nomeProduto;

public:
    // Construtor:
    Alimentos(const string &tipoAlimento, const float &preco, const int &quantidade, const string &nomeProduto);

    // Getters:
    string getTipoAlimento();
    float getPreco();
    int getQuantidade();
    string getNomeProduto();

    // Setters:
    void setTipoAlimento(const string &t);
    void setPreco(const float &p);
    void setQuantidade(const int &q);
    void setNomeProduto(const string &n);

    // Metodo puramente virtual:
    virtual double calcularValorEstoque() = 0;
    virtual double calcularDesconto() =0;
    virtual double calcularTotal() =0;
};



#endif
