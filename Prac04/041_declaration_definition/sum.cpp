// #include "data.cpp"
// #include "reader.cpp"

extern std::vector<int> vec;
extern int total;

void sum(){
    for (int i:vec){ // i�� index�� �ƴ϶� ���Ұ� �� ��ü
        total = total + i ;
    }
}