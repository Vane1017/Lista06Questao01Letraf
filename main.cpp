#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int CoinCollection(int ii, int jj, std::vector<std::vector<int>>& C){

    if(ii==0 && jj==0){
        return C[ii][jj];
    }

    else if (ii==0){
        return CoinCollection(ii, jj-1, C) + C[ii][jj];
    }

    else if (jj==0){
        return CoinCollection(ii-1, jj, C) + C[ii][jj];
    }

    else{
        return max(CoinCollection(ii, jj-1, C), CoinCollection(ii-1, jj, C)) + C[ii][jj];
    }
}

int main(){

    cout << "Lista 06 - Questao 01 - Letra f" << endl;

    std::vector<std::vector<int>> C({{0, 0, 0, 0, 1, 0},
                                     {0, 1, 0, 1, 0, 0},
                                     {0, 0, 0, 1, 0, 1},
                                     {0, 0, 1, 0, 0, 1},
                                     {1, 0, 0, 0, 1, 0}});

    cout << CoinCollection(C.size()-1, C[0].size()-1, C) << endl;
}

