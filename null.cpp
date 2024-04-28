#include <iostream>

using namespace std;

int main(){

    cout <<"Enter row and column size of your table \n";
    
    cout <<"row size: "<< endl;
    int row; 
        cin >> row;

     cout <<"Column size : "<< endl;
     int column; 
        cin >> column;

    while(row> 3 || column > 3){
        cout <<"The dimension can not exceed three. Retry \n";
        cout <<"Row size: "<< endl;
        cin >> row;

        cout <<"Column size : "<< endl;
        cin >> column;

    }
    

    cout<<endl;

    double** table = new double*[row];
    
    for(int p =0; p<row; p++){

        table[p] = new double[column];
    }

    for(int i = 0; i < row; i++){
            for(int j =0; j < column; j++){
                table[i][j] = rand() % 50;
            }
    }

    for(int i = 0; i < row; i++){
            for(int j = 0; j < column; j++){
                cout << table[i][j] << "  ";

            }
            cout<< endl;
            
    for(int g = 0; g< row; g++){
        delete[] table[g];
    }   
    delete[] table;    
   
    }
    return 0;
}