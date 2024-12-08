#include "entidades.hpp"

using namespace std;

//CRUD pra atividades
void Gerenciador::criarAtividade(Codigo* codigo, Nome* nome, Data* data, Horario* horario, Duracao* duracao, Dinheiro* preco, Avaliacao* avaliacao) {
    Atividade* novaAtividade = new Atividade(codigo, nome, data, horario, duracao, preco, avaliacao);
    atividades.push_back(novaAtividade);
}

void Gerenciador::listarAtividades() {
    for (size_t i = 0; i < atividades.size(); ++i) {
        Atividade* atividade = atividades[i];
        cout << "Codigo: " << atividade->getCodigo().codigo
             << ", Nome: " << atividade->getNome().nome
             << ", Data: " << atividade->getData().DD << "/" << atividade->getData().MM << "/" << atividade->getData().AA
             << ", Duracao: " << atividade->getDuracao().tempo
             << ", Horario: " << atividade->getHorario().HH << ":" << atividade->getHorario().MM
             << ", Preco: " << atividade->getPreco().valor
             << ", Avaliacao: " << atividade->getAvaliacao().nota << endl;
    }
}

void Gerenciador::atualizarAtividade(Codigo* codigo, Nome* novoNome, Data* novaData, Horario* novoHorario, Duracao* novaDuracao, Dinheiro* novoPreco, Avaliacao* novaAvaliacao) {
    for (size_t i = 0; i < atividades.size(); ++i) {
        Atividade* atividade = atividades[i];
        if (atividade->getCodigo().codigo == codigo->codigo) {
            atividade->setNome(*novoNome);
            atividade->setData(*novaData);
            atividade->setHorario(*novoHorario);
            atividade->setDuracao(*novaDuracao);
            atividade->setPreco(*novoPreco);
            atividade->setAvaliacao(*novaAvaliacao);
        }
    }
}

void Gerenciador::excluirAtividade(Codigo* codigo) {
    for (size_t i = 0; i < atividades.size(); ++i) {
        if (atividades[i]->getCodigo().codigo == codigo->codigo) {
            delete atividades[i];
            atividades.erase(atividades.begin() + i);
            break;
        }
    }
}

