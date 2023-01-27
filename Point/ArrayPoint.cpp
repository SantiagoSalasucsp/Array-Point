#include "ArrayPoint.h"

ArrayPoint::ArrayPoint(int tam) {
    data = new int[tam];
    this->tam = tam;
}

ArrayPoint::ArrayPoint(const ArrayPoint &o) {
    data = new int[o.tam];
    this->tam = o.tam;
    for(int i = 0; i < tam; ++i)
        data[i] = o.data[i];
}

ArrayPoint::~ArrayPoint() {
    delete[] data;
}

void ArrayPoint::setData(int index, int val) {
    if (index >= tam){
        throw std::out_of_range ("el indice se pasa del limite");
    }
    data[index] = val;
}

int ArrayPoint::getData(int index) const {
    if (index<0 || index>=tam)
        throw  std::out_of_range ( "El indice no es el correcto" );
    return data[index];
}

int ArrayPoint::getSize() const {
    return tam;
}

void ArrayPoint::print() const {
    std::cout << "[ ";
    for(int i = 0; i < tam; i++)
        std::cout << data[i] << " ";
    std::cout << "]" << std::endl;
}