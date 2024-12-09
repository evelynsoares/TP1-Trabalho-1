#ifndef ENTIDADES_HPP_INCLUDED
#define ENTIDADES_HPP_INCLUDED

#include "dominios.hpp"

using namespace std;

///
///  A Classe Conta refere-se a conta de um possível usuário
/// Ela possui Nome, Senha e Código
/// @see Nome
/// @see Senha
/// @see Codigo
/// @author 170102785
/// 
class Conta {
private:
    Nome* nome;
    Senha* senha;
    Codigo* codigo;

public:
    Conta(Nome* nome, Senha* senha, Codigo* codigo){
        this->nome = nome;this->senha = senha;this->codigo = codigo;}

    Nome getNome() const { return *nome; }
    Senha getSenha() const { return *senha; }
    Codigo getCodigo() const { return *codigo;}

    void setNome(const Nome& novoNome) { *nome = novoNome; }
    void setSenha(const Senha& novaSenha) { *senha = novaSenha; }
    void setCodigo(const Codigo& novoCodigo) { *codigo = novoCodigo;}
};

///
/// A classe viagem refere-se a viagens dentro do sistema
/// ela possui código, nome e avaliação
///
class Viagem {
private:
    Codigo* codigo;
    Nome* nome;
    Avaliacao* avaliacao;

public:
    Viagem(Codigo* codigo, Nome* nome, Avaliacao* avaliacao){
        this->codigo = codigo; this->nome = nome; this->avaliacao=avaliacao;}

    Codigo getCodigo() const { return *codigo;}
    Nome getNome() const { return *nome; }
    Avaliacao getAvaliacao() const { return *avaliacao; }

    void setCodigo(const Codigo& novoCodigo) { *codigo = novoCodigo;}
    void setNome(const Nome& novoNome) { *nome = novoNome; }
    void setAvaliacao(const Avaliacao& novaAvaliacao) { *avaliacao = novaAvaliacao; }

};

///
///
///
class Atividade {
private:
    Codigo*codigo;
    Nome* nome;
    Data* data;
    Horario* horario;
    Duracao* duracao;
    Dinheiro* preco;
    Avaliacao* avaliacao;

public:
    Atividade(Codigo* codigo, Nome* nome, Data* data, Horario* horario, Duracao* duracao, Dinheiro* preco, Avaliacao* avaliacao){
        this->codigo = codigo; this->nome = nome; this->data = data; this->horario = horario; this->duracao = duracao; this->preco = preco; this->avaliacao = avaliacao;}

    Codigo getCodigo() const { return *codigo;}
    Nome getNome() const { return *nome; }
    Data getData() const { return *data; }
    Horario getHorario() const { return *horario; }
    Duracao getDuracao() const { return *duracao; }
    Dinheiro getPreco() const { return *preco; }
    Avaliacao getAvaliacao() const { return *avaliacao; }

    void setCodigo(const Codigo& novoCodigo) { *codigo = novoCodigo;}
    void setNome(const Nome& novoNome) { *nome = novoNome;}
    void setData(const Data& novaData) { *data = novaData;}
    void setHorario(const Horario& novoHorario) { *horario = novoHorario; }
    void setDuracao(const Duracao& novaDuracao) { *duracao = novaDuracao; }
    void setPreco(const Dinheiro& novoPreco) { *preco = novoPreco; }
    void setAvaliacao(const Avaliacao& novaAvaliacao)  { *avaliacao = novaAvaliacao; }
};

///
/// Destino refere-se
///
class Destino {
private:
    Codigo* codigo;
    Nome* nome;
    Data* dataDeInicio;
    Data* dataDeTermino;
    Avaliacao* avaliacao;
public:
    Destino(Codigo* codigo, Nome* nome, Data* dataDeInicio, Data* dataDeTermino, Avaliacao* avaliacao){
        this->codigo = codigo; this->nome = nome; this->dataDeInicio = dataDeInicio; this->dataDeTermino = dataDeTermino; this->avaliacao = avaliacao;}

    Codigo getCodigo() const { return *codigo;}
    Nome getNome() const { return *nome; }
    Data getDataDeInicio() const { return *dataDeInicio; }
    Data getDataDeTermino() const { return *dataDeTermino;}
    Avaliacao getAvaliacao() const { return *avaliacao;}

    void setCodigo( const Codigo& novoCodigo) { *codigo = novoCodigo; }
    void setNome( const Nome& novoNome) { *nome = novoNome; }
    void setDataDeInicio( const Data& novaDataDeInicio) { *dataDeInicio = novaDataDeInicio;}
    void setDataDeTermino( const Data& novaDataDeTermino) { *dataDeTermino = novaDataDeTermino;}
    void setAvaliacao ( const Avaliacao& novaAvaliacao ) { *avaliacao = novaAvaliacao;}

};

///
///
///
class Hospedagem {
private:
    Codigo* codigo;
    Nome* nome;
    Dinheiro* diaria;
    Avaliacao* avaliacao;

public:
    Hospedagem(Nome* nome, Codigo* codigo, Dinheiro* diaria, Avaliacao* avaliacao){
        this->nome = nome; this->codigo = codigo; this->diaria = diaria; this->avaliacao = avaliacao;}

    Codigo getCodigo() const { return *codigo;}
    Nome getNome() const { return *nome; }
    Dinheiro getDiaria() const { return *diaria; }
    Avaliacao getAvaliacao() const { return *avaliacao;}

    void setCodigo( const Codigo& novoCodigo) { *codigo = novoCodigo; }
    void setNome( const Nome& novoNome) { *nome = novoNome; }
    void setDiaria( const Dinheiro& novaDiaria) { *diaria = novaDiaria; }
    void setAvaliacao( const Avaliacao& novaAvaliacao) { *avaliacao = novaAvaliacao; }

};

#endif // ENTIDADES_HPP_INCLUDED
