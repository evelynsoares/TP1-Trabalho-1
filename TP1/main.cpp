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
        Dinheiro dinheiro(150000.50);
        cout << "Dinheiro valido: R$ " << dinheiro.valor << endl; //erro aqui
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
        Senha senhaConta0(54321); //senha invalida
        Senha senhaConta1(01234); //senha invalida 
        Senha senhaConta2(76543); //senha invalida
        Senha senhaConta3(11111); //senha invalida
        Senha senhaConta4(324244); //senha invalida

    } catch (...) {
        cout << "Erro durante a validacao de dominios." << endl;
    }
}

int main() {
    cout << "=== Testando Dominios ===" << endl;
    testarDominios();

    return 0;
}