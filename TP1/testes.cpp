#include "testes.hpp"
/*
void TUCodigo::testarCenarioValorValido(){
    try{
        Codigo codigo(VALOR_VALIDO);
        if(codigo.codigo != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCodigo::testerCenarioValorInvalido(){
    try{
        Codigo codigo(VALOR_INVALIDO);
        Codigo codigo2(VALOR_INVALIDO2);
        Codigo codigo3(VALOR_INVALIDO3);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if(codigo.codigo == VALOR_INVALIDO)
        estado = FALHA;
        if(codigo2.codigo == VALOR_INVALIDO2)
        estado = FALHA;
        if(codigo3.codigo == VALOR_INVALIDO3)
        estado = FALHA;
    }
}

int TUCodigo::run(){
    testarCenarioValorValido();
    testerCenarioValorInvalido();
    return estado;
}
*/
void TUCodigo::setUp() {
    codigo = new Codigo(VALOR_VALIDO);  
    estado = SUCESSO;
}

void TUCodigo::tearDown() {
    delete codigo;  
}

void TUCodigo::testarCenarioValorValido() {
    try {
        codigo->setCodigo(VALOR_VALIDO);  
        cout << "Cenario de codigo valido: " << codigo->getCodigo() << endl;
        if (codigo->getCodigo() != VALOR_VALIDO) {
            estado = FALHA;
        }
    }
    catch (invalid_argument &excecao) {
        estado = FALHA; 
    }
}
void TUCodigo::testerCenarioValorInvalido() {
    try {
        codigo->setCodigo(VALOR_INVALIDO); 
        cout << "Cenario de codigo invalido: " << codigo->getCodigo() << endl;
        estado = FALHA; 
    }
    catch (invalid_argument &excecao) {
        
    }

    try {
        codigo->setCodigo(VALOR_INVALIDO2);  
        cout << "Cenario de codigo invalido: " << codigo->getCodigo() << endl;
        estado = FALHA;
    }
    catch (invalid_argument &excecao) {
    }

    try {
        codigo->setCodigo(VALOR_INVALIDO3);  
        cout << "Cenario de codigo invalido: " << codigo->getCodigo() << endl;
        estado = FALHA;
    }
    catch (invalid_argument &excecao) {
    }
}

int TUCodigo::run() {
    setUp();
    testarCenarioValorValido();
    testerCenarioValorInvalido();
    tearDown();
    return estado;
}

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
        cout << "Cenario de nota valida: " << avaliacao->getNota() << endl;
        if (avaliacao->getNota() != VALOR_VALIDO) {
            estado = FALHA;
        }
    }
    catch (invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUAvaliacao::testerCenarioValorInvalido() {
    try {
        avaliacao->setNota(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch (invalid_argument &excecao) {
    }

    try {
        avaliacao->setNota(VALOR_INVALIDO2);
        estado = FALHA;
    }
    catch (invalid_argument &excecao) {
    }

    try {
        avaliacao->setNota(VALOR_INVALIDO3);
        estado = FALHA;
    }
    catch (invalid_argument &excecao) {
    }
}

int TUAvaliacao::run() {
    setUp();
    testarCenarioValorValido();
    testerCenarioValorInvalido();
    tearDown();
    return estado;
}
