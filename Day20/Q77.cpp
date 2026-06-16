//Multiply matrices
#include <iostream>
using namespace std;

void matrixmulti(int mat1[][100], int rows1, int colm1,
                 int mat2[][100], int rows2, int colm2){ //column must be hardcoded
 int c[100][100]={0};

 if(colm1!=rows2){
    cout << "Multiplication not possible";
    return;
 }

    for(int i=0; i<rows1; i++){
        for(int j=0; j<colm2; j++){
            c[i][j]=0;
            for(int k=0; k<colm1; k++){
            c[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }

     for(int i=0; i<rows1; i++){
        for(int j=0; j<colm2; j++){
            cout << c[i][j] << " ";
        }
        cout << "\n";
    } 
 
}

int main(){
    int mat1[100][100];
    int mat2[100][100]; // see we can also took arr[rows][colm] but that
                        // will be at run time which standard cpp don't support
    int rows1, colm1;
    int rows2, colm2;
    cout << "Enter rows and columns for 1st matrix: ";
    cin >> rows1 >> colm1;
    cout << "Enter elements: ";
    for(int i=0; i<rows1; i++){
     for(int j=0; j<colm1; j++){
        cin >> mat1[i][j];
     }
    }

     cout << "Enter rows and columns for 2nd matrix: ";
    cin >> rows2 >> colm2;
    cout << "Enter elements: ";
    for(int i=0; i<rows2; i++){
     for(int j=0; j<colm2; j++){
        cin >> mat2[i][j];
     }
    }

    //2d arrays always pass by reference
    matrixmulti(mat1,rows1,colm1,mat2,rows2,colm2);

    return 0;
}