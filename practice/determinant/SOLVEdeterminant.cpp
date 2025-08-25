#include<iostream>
using namespace std;

const int MAX = 10; // maximum matrix size

int submatrixCal(int matrix[MAX][MAX], int m){
    if(m==1){
        return matrix[0][0];
    }
    if(m==2){
        return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    }
    int determinant = 0;
    int submatrix[MAX][MAX];
    for(int x=0; x<m; x++){
        int subi = 0;
        for(int i=1; i<m; i++){
            int subj = 0;
            for(int j=0; j<m; j++){
                if(j == x) continue;
                submatrix[subi][subj] = matrix[i][j];
                subj++;
            }
            subi++;
        }
        int sub_determinant = submatrixCal(submatrix, m-1);
        determinant += (x%2==0 ? 1 : -1) * matrix[0][x] * sub_determinant;
    }
    return determinant;
}

int main(){
    int n;
    cout<<"Enter the order of the matrix: ";
    cin>>n;
    int matrix[MAX][MAX];
    cout<<"Enter the elements of the matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Element ["<<i+1<<"]["<<j+1<<"]: ";
            cin>>matrix[i][j];
        }
    }
    int determinant = submatrixCal(matrix, n);
    cout << "Determinant: " << determinant << endl;
    return 0;
}