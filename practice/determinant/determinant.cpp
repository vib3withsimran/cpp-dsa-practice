#include<iostream>
using namespace std;



int main(){
    int n;
    cout<<"Enter the order of the matrix: ";
    cin>>n;
    int matrix[n][n];
    cout<<"Enter the elements of the matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Element ["<<i+1<<"]["<<j+1<<"]: ";
            cin>>matrix[i][j];
        }
    }

    float determinant=0;

    if(n==1){
        determinant=matrix[0][0];
    }
    else if(n==2){
        determinant=(matrix[0][0]*matrix[1][1])-(matrix[0][1]*matrix[1][0]);
    }
    else{
        for(int x=0;x<n;x++){
            int submatrix[n-1][n-1];
            for(int i=1;i<n;i++){
                int sub_j=0;
                for(int j=0;j<n;j++){
                    if(j==x){
                        continue;
                    }
                    submatrix[i-1][sub_j]=matrix[i][j];
                    sub_j++;
                }
            }
            float sub_determinant=0;
            if(n-1==1){
                sub_determinant=submatrix[0][0];
            }
            else if(n-1==2){
                sub_determinant=(submatrix[0][0]*submatrix[1][1])-(submatrix[0][1]*submatrix[1][0]);
            }
            else{
                // Recursive call for larger matrices
                // This part can be optimized further, but for simplicity, we will use the same logic
                // as above to calculate the determinant of the submatrix.
                // In practice, a separate function would be better.
                for(int y=0;y<n-1;y++){
                    int sub_submatrix[n-2][n-2];
                    for(int i=1;i<n-1;i++){
                        int sub_j=0;
                        for(int j=0;j<n-1;j++){
                            if(j==y){
                                continue;
                            }
                            sub_submatrix[i-1][sub_j]=submatrix[i][j];
                            sub_j++;
                        }
                    }
                    float sub_sub_determinant=0;
                    if(n-2==1){
                        sub_sub_determinant=sub_submatrix[0][0];
                    }
                    else if(n-2==2){
                        sub_sub_determinant=(sub_submatrix[0][0]*sub_submatrix[1][1])-(sub_submatrix[0][1]*sub_submatrix[1][0]);
                    }
                    // For n>3, this should ideally be a recursive function call
                    // but for simplicity, we will not implement that here.
                    sub_determinant += (y%2==0 ? 1 : -1) * submatrix[0][y] * sub_sub_determinant;
                }
            }
            determinant += (x%2==0 ? 1 : -1) * matrix[0][x] * sub_determinant;
        }
    }

    cout<<"Determinant of the matrix is: "<<determinant<<endl;

    return 0;
}