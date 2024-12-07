#include <iostream>
#include "dominios.hpp"
#include "entidades.hpp"

using namespace std;
// usuario deve criar uma conta
// apos autenticado
// viajante tem acesso ao criar, ler, atualizar, e excluir viagem, crud destino, crud atividade, crud, hospedagem
// atualizacao de um registro nao possibila atuaLIZAR dado q identifi a o registtro PK

//consultar custo de viagem
//listar viagesn asccoiadas ao viajante
//listar destinos associados ao viagem
//listar ativ acc ao destino
//listar hspe acc ao destino
//ao apresentar listagem -> aprestnar codigo en nome de cada registro integrante da listagem

//nao pode ser excluido registro se existir trregistro acco a ele
//data de ativ deeve estar no intervalo def pelas datas de iniioc e termino do dest accosiado
//

using namespace std;

void testarDominios() {
    try {
        Avaliacao avaliacao(4);
        cout << "Avaliacao valida: " << static_cast<int>(avaliacao.nota) << endl;
        Codigo codigo("AB1234");
        cout << "Codigo valido: " << codigo.codigo << endl;
        Data data(15, 8, 2024);
        cout << "Data valida: " << (int)data.DD << "/" << (int)data.MM << "/" << (int)data.AA << endl; 
        Dinheiro dinheiro(150000.50); //erro?
        cout << "Dinheiro valido: R$ " << dinheiro.valor << endl;
        Duracao duracao(120);
        cout << "Duracao valida: " << duracao.tempo << " minutos" << endl;
        Horario horario(14, 30);
        cout << "Horario valido: " << (int)horario.HH << ":" << (int)horario.MM << endl; 
        Nome nome("Joao Silva");
        cout << "Nome valido: " << nome.nome << endl;
        Senha senha(13579);
        cout << "Senha valida: " << senha.senha << endl; 


        Avaliacao a(50);
        Codigo c("AB123!");
        Data d(32, 8, 2024);
        Data d2(30, 1, 2004);
        Dinheiro din(210000);
        Duracao dur(390);
        Horario hor(45, 90);
        Nome no("X ae A-12");
        Senha sen(34567);
        Senha senhaConta0(54321); //senhas invalidas
        Senha senhaConta1(01234);  
        Senha senhaConta2(76543); 
        Senha senhaConta3(11111); 
        Senha senhaConta4(324244); 

    } catch (...) {
        cout << "Erro durante a validacao de dominios." << endl;
    }
}

void testarEntidades() {
    try {
        // Criando dados para os testes
        Nome nomeConta("Maria Clara");
        Senha senhaConta(54367);
        Codigo codigoConta("C12345");
        Conta conta(nomeConta, senhaConta, codigoConta);

        cout << "Conta criada: Nome: " << conta.getNome().nome
             << ", Senha: " << conta.getSenha().senha
             << ", Codigo: " << conta.getCodigo().codigo << endl;

        Codigo codigoViagem("V12345");
        Nome nomeViagem("Viagem ao Rio");
        Avaliacao avaliacaoViagem(5);
        Viagem viagem(codigoViagem, nomeViagem, avaliacaoViagem);

        cout << "Viagem criada: Codigo: " << viagem.getCodigo().codigo
             << ", Nome: " << viagem.getNome().nome
             << ", Avaliacao: " << static_cast<int>(viagem.getAvaliacao().nota) << endl;

        Codigo codigoAtividade("AT9876");
        Nome nomeAtividade("Passeio de barco");
        Data dataAtividade(20, 8, 2024);
        Horario horarioAtividade(10, 0);
        Duracao duracaoAtividade(180);
        Dinheiro precoAtividade(250.50);
        Avaliacao avaliacaoAtividade(4);
        Atividade atividade(codigoAtividade, nomeAtividade, dataAtividade, horarioAtividade, duracaoAtividade, precoAtividade, avaliacaoAtividade);

        cout << "Atividade criada: Codigo: " << atividade.getCodigo().codigo
             << ", Nome: " << atividade.getNome().nome
             << ", Data: " << (int)atividade.getData().DD << "/" << (int)atividade.getData().MM << "/" << (int)atividade.getData().AA
             << ", Horario: " << (int)atividade.getHorario().HH << ":" << (int)atividade.getHorario().MM
             << ", Duracao: " << atividade.getDuracao().tempo << " minutos"
             << ", Preco: R$ " << atividade.getPreco().valor
             << ", Avaliacao: " << static_cast<int>(atividade.getAvaliacao().nota) << endl;

        Codigo codigoDestino("D45678");
        Nome nomeDestino("Sao Paulo");
        Data dataInicioDestino(15, 8, 2024);
        Data dataTerminoDestino(20, 8, 2024);
        Avaliacao avaliacaoDestino(4);
        Destino destino(codigoDestino, nomeDestino, dataInicioDestino, dataTerminoDestino, avaliacaoDestino);

        cout << "Destino criado: Codigo: " << destino.getCodigo().codigo
             << ", Nome: " << destino.getNome().nome
             << ", Data Inicio: " << (int)destino.getDataDeInicio().DD << "/" << (int)destino.getDataDeInicio().MM << "/" << (int)destino.getDataDeInicio().AA
             << ", Data Termino: " << (int)destino.getDataDeTermino().DD << "/" << (int)destino.getDataDeTermino().MM << "/" << (int)destino.getDataDeTermino().AA
             << ", Avaliacao: " << static_cast<int>(destino.getAvaliacao().nota) << endl;

        Codigo codigoHospedagem("H32145");
        Nome nomeHospedagem("Hotel Paradise");
        Dinheiro diariaHospedagem(300.00);
        Avaliacao avaliacaoHospedagem(5);
        Hospedagem hospedagem(codigoHospedagem, nomeHospedagem, diariaHospedagem, avaliacaoHospedagem);

        cout << "Hospedagem criada: Codigo: " << hospedagem.getCodigo().codigo
             << ", Nome: " << hospedagem.getNome().nome
             << ", Diaria: R$ " << hospedagem.getDiaria().valor
             << ", Avaliacao: " << static_cast<int>(hospedagem.getAvaliacao().nota) << endl;

    } catch (...) {
        cout << "Erro desconhecido durante a criacao de entidades." << endl;
    }
}


int main() {
    cout << "=== Testando Dominios ===" << endl;
    testarDominios();

    cout << "\n=== Testando Entidades ===" << endl;
    testarEntidades();

    return 0;
}