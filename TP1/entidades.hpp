#ifndef ENTIDADES_HPP
#define ENTIDADES_HPP

#include <string>
#include "dominios.hpp"

using namespace std;

class Conta {
private:
    Nome nome;
    Senha senha;
    Codigo codigo;

public:
    Conta(const Nome& nome, const Senha& senha, const Codigo& codigo) //parâmetros por referência constante (const Nome&) evita cópias desnecessárias e protege os dados originais
        : nome(nome), senha(senha), codigo(codigo){} //nome, senha e codigo estao sendo inicializados diretamente com os valores recebidos como argumento

    Nome getNome() const { return nome; }
    Senha getSenha() const { return senha; }

    void setNome(const Nome& novoNome) { nome = novoNome; }
    void setSenha(const Senha& novaSenha) { senha = novaSenha; }
};

class Viagem {
};

class Atividade {
};

class Destino {
};

class Hospedagem {
};

#endif // ENTIDADES_HPP
