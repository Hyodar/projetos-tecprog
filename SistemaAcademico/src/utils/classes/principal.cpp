
// Imported modules:

#include <ctime>

#include "principal.h"

// Function declarations:

// ---------------------------------------------------------------------------

Principal::Principal() : simao(), einstein(), newton() {

    simao.init(3, 10, 1976, "Jean Simao");
    einstein.init(14, 3, 1879, "Albert Einstein");
    newton.init(4, 1, 1643, "Isaac Newton");

    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);

    diaAtual = now->tm_mday;
    mesAtual = now->tm_mon;
    anoAtual = now->tm_year + 1900;

    utfpr.setNome("UTFPR");

    simao.setUnivFiliado(&utfpr);
}

// ---------------------------------------------------------------------------

Principal::~Principal() {
    // noop
}

// ---------------------------------------------------------------------------

void Principal::executar() {

    simao.calcIdade(diaAtual, mesAtual, anoAtual);
    einstein.calcIdade(diaAtual, mesAtual, anoAtual);
    newton.calcIdade(diaAtual, mesAtual, anoAtual);
}

