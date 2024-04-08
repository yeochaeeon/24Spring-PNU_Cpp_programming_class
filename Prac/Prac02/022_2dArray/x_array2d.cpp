#include <iostream>
#include <vector>
using namespace std;

int row, col; 

int main()
{

int val[row][col];

  
cin >> row >> col;


for(int i = 0; i < row; i++)                 
{
    for (int j = 0; j < col; j++)
    {
        cin >> val[i][j]; 
    }   
}

vector<int> rowsum(row,0) ;
vector<int> colsum(col,0) ;

//행의 합을 구하는 코드 
for (int i = 0; i < row ; i++){
    for(int j = 0 ; j < col ; j++){
        rowsum[i] = rowsum[i] + val[i][j]; 
    }
}
//열의 합을 구하는 코드

for (int i = 0; i < col; i++){
    for (int j = 0; j < row ; j++){
        colsum[i] = colsum[i] + val[i][j];
    }
}

for (int i = 0 ; i < row ; i++){
    cout << rowsum[i];
    
}
cout << endl;
for (int i = 0 ; i < col ; i++){
    cout << colsum[i];
    
}


return 0;
}