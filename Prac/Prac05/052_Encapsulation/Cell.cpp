#include "Cell.h"

Cell::Cell() {} ;
Cell::Cell(std::string val) : stringVal(val) { type = CELL_TYPE::STRING; }
Cell::Cell(int val) : intVal(val) { type = CELL_TYPE::INT; }
Cell::Cell(double val) : doubleVal(val) { type = CELL_TYPE::DOUBLE; }

CELL_TYPE Cell::getType() const {
    return type ;
}

std::string Cell::getStringVal() const {
    return stringVal;
}

int Cell::getIntVal() const {
    return intVal;
}

double Cell::getDoubleVal() const {
    return doubleVal;
}


