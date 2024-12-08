#include <iostream>
#include "dominios.hpp"
#include "entidades.hpp"

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
        Nome nomeConta("Maria Clara");
        Senha senhaConta(54367);
        Codigo codigoConta("C12345");
        Conta conta(&nomeConta, &senhaConta, &codigoConta);

        cout << "Conta criada: Nome: " << conta.getNome().nome
             << ", Senha: " << conta.getSenha().senha
             << ", Codigo: " << conta.getCodigo().codigo << endl;


        Codigo codigoViagem("V12345");
        Nome nomeViagem("Viagem ao Rio");
        Avaliacao avaliacaoViagem(5);
        //CRUDViagem criarViagem(codigoViagem, nomeViagem, avaliacaoViagem);

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
