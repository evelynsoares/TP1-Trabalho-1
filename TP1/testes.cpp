#include "testes.hpp"

using namespace std;

void TUAvaliacao::setUp() {
    avaliacao = new Avaliacao(VALOR_VALIDO);
    estado = SUCESSO;
}

void TUAvaliacao::tearDown() {
    delete avaliacao;
}
void TUAvaliacao::testarCenarioValorValido() {
    try {
        avaliacao->setNota(VALOR_VALIDO);
        cout << avaliacao->getNota() << endl;
        if (avaliacao->getNota() != VALOR_VALIDO) {
            estado = FALHA;
        }
    } catch (invalid_argument&) {
        estado = FALHA;
    }
}

void TUAvaliacao::testerCenarioValorInvalido() {
    try {
        avaliacao->setNota(VALOR_INVALIDO);
        cout << avaliacao->getNota() << endl;
        estado = FALHA;
    } catch (invalid_argument&) {
        // Sucesso
    }
}

int TUAvaliacao::run() {
    setUp();
    testarCenarioValorValido();
    testerCenarioValorInvalido();
    tearDown();
    return estado;
}

