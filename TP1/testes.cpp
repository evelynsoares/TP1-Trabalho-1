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
        cout<< "argumento invalido";
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
    cout << "argumento invalido";
    }
}

int TUCodigo::run(){
    testarCenarioValorValido();
    testerCenarioValorInvalido();
    return estado;
}


void TUAvaliacao::testarCenarioValorValido(){
    try{
        Avaliacao avaliacao(VALOR_VALIDO);
        avaliacao.nota = VALOR_VALIDO;
        cout << "Cenario de nota valida: " << avaliacao.nota <<endl;
        if(avaliacao.nota != VALOR_VALIDO)
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
        cout << "argumento invalido";
    }
}

void TUAvaliacao::testerCenarioValorInvalido(){
    try{
        Avaliacao avaliacao(VALOR_INVALIDO);
        cout << "Cenario de nota invalida: " << avaliacao.nota <<endl;
        Avaliacao avaliacao2(VALOR_INVALIDO2);
        cout << "Cenario de nota invalida: " << avaliacao2.nota <<endl;
        Avaliacao avaliacao3(VALOR_INVALIDO3);
        cout << "Cenario de nota invalida: " << avaliacao3.nota <<endl;
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        cout << "argumento invalido";
    }
}

int TUAvaliacao::run(){
    testarCenarioValorValido();
    testerCenarioValorInvalido();
    return estado;
}



void TUData::testarCenarioValorValido(){
    try{
        Data data(VALOR_VALIDO[0], VALOR_VALIDO[1], VALOR_VALIDO[2]);
        cout << "Cenario de Data valida: " << data.DD << data.MM << data.AA << endl;
        if(data.DD != VALOR_VALIDO[0] && data.MM != VALOR_VALIDO[1] && data.AA != VALOR_VALIDO[2])
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
        cout << "argumento invalido";
    }
}

void TUData::testerCenarioValorInvalido(){
    try{
        Data data(VALOR_INVALIDO[0], VALOR_INVALIDO[1], VALOR_INVALIDO[2]);
        cout << "Cenario de data invalida: " << data.DD << data.MM << data.AA <<endl;
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        cout << "argumento invalido";
    }
}

int TUData::run(){
    testarCenarioValorValido();
    testerCenarioValorInvalido();
    return estado;
}
