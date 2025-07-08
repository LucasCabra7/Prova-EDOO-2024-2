#include <iomanip>
#include "Alimentos.h"
#include "Fruta.h"
#include "Verduras.h"
#include "Legumes.h"
#include <iostream>
#include <vector>
#include <memory>

using namespace std;


int main() {

    vector<unique_ptr<Alimentos>> alimentos;

    int qtd_alimentos;
    string tipo_alimento;
    string nome_produto;
    float valor_preco;
    int valor_quantidade;

    cout << "--- Seja bem vindo a Mercearia! ---" << endl;
    cout << "Quantos produtos voce deseja adicionar ao carrinho: " << endl;
    cin >> qtd_alimentos;

    for (int i = 0; i < qtd_alimentos; i++) {
        cout << "--- Item " << i + 1 << " da cestinha ---" << endl;
        cout << "Digite o tipo do Alimento: ";
        cin >> tipo_alimento;
        cout << "Digite o nome do Produto: ";
        cin >> nome_produto;
        cout << "Digite o preco do Produto: ";
        cin >> valor_preco;
        cout << "Digite a quantidade que deseja: ";
        cin >> valor_quantidade;

        if (tipo_alimento == "Fruta") {
            alimentos.push_back(make_unique<Fruta>(tipo_alimento, valor_preco, valor_quantidade, nome_produto));
        }else if (tipo_alimento == "Verdura") {
            alimentos.push_back(make_unique<Verduras>(tipo_alimento, valor_preco, valor_quantidade, nome_produto));
        }else if (tipo_alimento == "Legume") {
            alimentos.push_back(make_unique<Legumes>(tipo_alimento, valor_preco, valor_quantidade, nome_produto));
        } else {
            cout << "Alimento invalido!" << endl;
        };
    }

    for (const auto &alimento : alimentos) {
        cout << fixed << setprecision(2); // Duas casas decimais.
        cout << "Valor total do estoque de " << alimento->getTipoAlimento() << ":" <<endl;
        cout << alimento->getNomeProduto() << ": " << "R$" <<  alimento->calcularValorEstoque() << endl;
        cout << "Desconto: " << "R$" << alimento->calcularDesconto() << endl;
        cout << "Total: " << "R$" << alimento->calcularTotal() << endl;
    };

    return 0;
}