
#include "data.h"

Data::Data(int dia, int mes, int ano) {
    this->init(dia, mes, ano);
}

// ---------------------------------------------------------------------------

Data::Data() {
    this->init();
}

// ---------------------------------------------------------------------------

Data::~Data() {
    // noop
}

// ---------------------------------------------------------------------------

int Data::getDia() {
    return this->dia;
}

// ---------------------------------------------------------------------------

void Data::setDia(int dia) {
    this->dia = dia;
}

// ---------------------------------------------------------------------------

int Data::getMes() {
    return this->mes;
}

// ---------------------------------------------------------------------------

void Data::setMes(int mes) {
    this->mes = mes;
}

// ---------------------------------------------------------------------------

int Data::getAno() {
    return this->ano;
}

// ---------------------------------------------------------------------------

void Data::setAno(int ano) {
    this->ano = ano;
}
