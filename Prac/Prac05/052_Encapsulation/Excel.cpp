#include "Excel.h"
// #include "Cell.cpp"
#include <iostream>

Excel::Excel(std::vector<std::vector<Cell>> data) : data(data) {}; // 생성자 정의

double Excel::average(int fromRow, int fromCol, int toRow, int toCol) const {

    CELL_TYPE type = data[fromRow][fromCol].getType();
    double sum = 0;
    
    switch (type) {

        case INT:
        for (int i = fromRow; i <= toRow ; i++ ){
        sum = sum + data[i][fromCol].getIntVal();
        }
        return sum/3;

        case DOUBLE:
        for (int i = fromRow; i <= toRow ; i++ ){
        sum = sum + data[i][fromCol].getDoubleVal();
        }
        return sum/3;
        

        default :
        std::cout << "NO.." << std::endl;
        ; 

    }
            

}
    

