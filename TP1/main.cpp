#include <iostream>
#include "dominios.hpp"
#include "entidades.hpp"
#include "testes.hpp"

using namespace std;

int main() {
    TUAvaliacao testeAvaliacao;

    switch (testeAvaliacao.run()) {
        case TUAvaliacao::SUCESSO:
            cout << "SUCESSO" << endl;
            break;

        case TUAvaliacao::FALHA:
            cout << "FALHA" << endl;
            break;
    }

    return 0;
}
