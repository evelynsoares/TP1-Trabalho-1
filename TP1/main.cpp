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

        //vao aparecer na execp em dominios.hpp
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

        Codigo codigoAtividade1("A03021");
        Nome nomeAtividade1("Passeio Turistico");
        Data dataAtividade1(23, 7, 2024);
        Horario horarioAtividade1(9, 0);
        Duracao duracaoAtividade1(50);
        Dinheiro precoAtividade1(150.00);
        Avaliacao avaliacaoAtividade1(4);

        Codigo codigoAtividade2("B04022");
        Nome nomeAtividade2("Caminhada na Montanha");
        Data dataAtividade2(25, 8, 2024);
        Horario horarioAtividade2(14, 30);
        Duracao duracaoAtividade2(120);
        Dinheiro precoAtividade2(250.00);
        Avaliacao avaliacaoAtividade2(5);

        Gerenciador gerenciador;

        gerenciador.criarAtividade(&codigoAtividade1, &nomeAtividade1, &dataAtividade1, &horarioAtividade1,
                                   &duracaoAtividade1, &precoAtividade1, &avaliacaoAtividade1);
        gerenciador.criarAtividade(&codigoAtividade2, &nomeAtividade2, &dataAtividade2, &horarioAtividade2,
                                   &duracaoAtividade2, &precoAtividade2, &avaliacaoAtividade2);

        cout << "Atividades cadastradas:" << endl;
        gerenciador.listarAtividades();
        //Atualizacao na atividade 2
        Nome novoNome("Passeio na Praia");
        Data novaData(25, 12, 2024);
        Horario novoHorario(15, 40);
        Duracao novaDuracao(60);
        Dinheiro novoPreco(200.00);
        Avaliacao novaAvaliacao(5);

        gerenciador.atualizarAtividade(&codigoAtividade2, &novoNome, &novaData, &novoHorario,
                                       &novaDuracao, &novoPreco, &novaAvaliacao);

        cout << "Atividades apos a atualizacao:" << endl;
        gerenciador.listarAtividades();

        // excluindo atividade1
        gerenciador.excluirAtividade(&codigoAtividade1);

        cout << "Atividades apos a exclusao:" << endl;
        gerenciador.listarAtividades();


    } catch (...) {
        cout << "Erro durante a validacao de entidades." << endl;
    }
}


int main() {
    cout << "=== Testando Dominios ===" << endl;
    testarDominios();

    cout << "\n=== Testando Entidades ===" << endl;
    testarEntidades();

    return 0;
}
