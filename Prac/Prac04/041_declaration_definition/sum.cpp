// #include "data.cpp"
// #include "reader.cpp"

extern std::vector<int> vec;
extern int total;

void sum(){
    for (int i:vec){ // i는 index가 아니라 원소값 그 자체
        total = total + i ;
    }
}