#include "testes.hpp"





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


void TUAvaliacao::testarCenarioValorValido(){
    try{
        avaliacao.nota = VALOR_VALIDO;
        cout << "Cenario de nota valida: " << avaliacao.nota <<endl;
        if(avaliacao.nota != VALOR_VALIDO)
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUAvaliacao::testerCenarioValorInvalido(){
    try{
        cout << "Cenario de nota invalida: " << avaliacao.nota <<endl;
        avaliacao.nota = VALOR_INVALIDO;
        cout << "Cenario de nota invalida: " << avaliacao.nota <<endl;
        avaliacao.nota = VALOR_INVALIDO2;
        cout << "Cenario de nota invalida: " << avaliacao.nota <<endl;
        avaliacao.nota = VALOR_INVALIDO3;
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if(avaliacao.nota == VALOR_INVALIDO)
        estado = FALHA;
        if(avaliacao.nota == VALOR_INVALIDO2)
        estado = FALHA;
        if(avaliacao.nota == VALOR_INVALIDO3)
        estado = FALHA;
    }
}

int TUAvaliacao::run(){
    setUp();
    testarCenarioValorValido();
    testerCenarioValorInvalido();
    tearDown();
    return estado;
}
