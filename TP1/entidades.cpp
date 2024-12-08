#include "entidades.hpp"

using namespace std;

// 170102785
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



//nao esat no github----------------------------------------------------------------------------------------------------------
// baseado em atividades
void Gerenciador::criarViagem(Codigo* codigo, Nome* nome, Avaliacao* avaliacao) {
    Viagem* novaViagem = new Viagem(codigo, nome, avaliacao);
    viagens.push_back(novaViagem);
}

void Gerenciador::listarViagens() {
    for (Viagem* viagem : viagens) {
        cout << "Codigo: " << viagem->getCodigo().codigo
             << ", Nome: " << viagem->getNome().nome
             << ", Avaliacao: " << viagem->getAvaliacao().nota << endl;
    }
}

void Gerenciador::atualizarViagem(Codigo* codigo, Nome* novoNome, Avaliacao* novaAvaliacao) {
    for (Viagem* viagem : viagens) {
        if (viagem->getCodigo().codigo == codigo->codigo) {
            viagem->setNome(*novoNome);
            viagem->setAvaliacao(*novaAvaliacao);
        }
    }
}

void Gerenciador::excluirViagem(Codigo* codigo) {
    for (size_t i = 0; i < viagens.size(); ++i) {
        if (viagens[i]->getCodigo().codigo == codigo->codigo) {
            delete viagens[i];
            viagens.erase(viagens.begin() + i);
            break;
        }
    }
}

void Gerenciador::criarDestino(Codigo* codigo, Nome* nome, Data* dataDeInicio, Data* dataDeTermino, Avaliacao* avaliacao) {
    Destino* novoDestino = new Destino(codigo, nome, dataDeInicio, dataDeTermino, avaliacao);
    destinos.push_back(novoDestino);
}

void Gerenciador::listarDestinos() {
    for (Destino* destino : destinos) {
        cout << "Codigo: " << destino->getCodigo().codigo
             << ", Nome: " << destino->getNome().nome
             << ", Data de Inicio: " << destino->getDataDeInicio().DD << "/" << destino->getDataDeInicio().MM << "/" << destino->getDataDeInicio().AA
             << ", Data de Termino: " << destino->getDataDeTermino().DD << "/" << destino->getDataDeTermino().MM << "/" << destino->getDataDeTermino().AA
             << ", Avaliacao: " << destino->getAvaliacao().nota << endl;
    }
}

void Gerenciador::atualizarDestino(Codigo* codigo, Nome* novoNome, Data* novaDataDeInicio, Data* novaDataDeTermino, Avaliacao* novaAvaliacao) {
    for (Destino* destino : destinos) {
        if (destino->getCodigo().codigo == codigo->codigo) {
            destino->setNome(*novoNome);
            destino->setDataDeInicio(*novaDataDeInicio);
            destino->setDataDeTermino(*novaDataDeTermino);
            destino->setAvaliacao(*novaAvaliacao);
        }
    }
}

void Gerenciador::excluirDestino(Codigo* codigo) {
    for (size_t i = 0; i < destinos.size(); ++i) {
        if (destinos[i]->getCodigo().codigo == codigo->codigo) {
            delete destinos[i];
            destinos.erase(destinos.begin() + i);
            break;
        }
    }
}

void Gerenciador::criarHospedagem(Codigo* codigo, Nome* nome, Dinheiro* diaria, Avaliacao* avaliacao) {
    Hospedagem* novaHospedagem = new Hospedagem(nome, codigo, diaria, avaliacao);
    hospedagens.push_back(novaHospedagem);
}

void Gerenciador::listarHospedagens() {
    for (Hospedagem* hospedagem : hospedagens) {
        cout << "Codigo: " << hospedagem->getCodigo().codigo
             << ", Nome: " << hospedagem->getNome().nome
             << ", Diaria: " << hospedagem->getDiaria().valor
             << ", Avaliacao: " << hospedagem->getAvaliacao().nota << endl;
    }
}

void Gerenciador::atualizarHospedagem(Codigo* codigo, Nome* novoNome, Dinheiro* novaDiaria, Avaliacao* novaAvaliacao) {
    for (Hospedagem* hospedagem : hospedagens) {
        if (hospedagem->getCodigo().codigo == codigo->codigo) {
            hospedagem->setNome(*novoNome);
            hospedagem->setDiaria(*novaDiaria);
            hospedagem->setAvaliacao(*novaAvaliacao);
        }
    }
}

void Gerenciador::excluirHospedagem(Codigo* codigo) {
    for (size_t i = 0; i < hospedagens.size(); ++i) {
        if (hospedagens[i]->getCodigo().codigo == codigo->codigo) {
            delete hospedagens[i];
            hospedagens.erase(hospedagens.begin() + i);
            break;
        }
    }
}
