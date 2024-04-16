
#ifndef COMPLEX_COMPLEX_H
#define COMPLEX_COMPLEX_H
#include <iostream>
class complex {
    public:
        //�ʿ��� �����ڸ� �߰��Ͻÿ�!
        complex(){};
        complex(double r):r(r){};
        complex(double r, double i): r(r), i(i) {};
        complex add(const complex& c) { return {r+c.r, i+c.i};};
        friend std::ostream& operator<<(std::ostream& os, const complex& c);
    private:
        double r{0}, i{0};
};
std::ostream& operator<<(std::ostream& os, const complex& c){
    std::cout << c.r << " + " << c.i << "i";
    return os;
}
#endif //COMPLEX_COMPLEX_H