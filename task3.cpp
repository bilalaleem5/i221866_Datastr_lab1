#include <iostream>



using namespace std;



// Function to input elements into a matrix of size m x n
void inputMatrix(int A[][100], int m, int n) {

    cout << "Enter elements of the matrix:" << endl;

    for (int i = 0; i < m; ++i) {

        for (int j = 0; j < n; ++j) {

            cout << "Enter element at position [" << i << "][" << j << "]: ";

            cin >> A[i][j];

        }

    }

}



// Function to display elements of a matrix of size m x n

void displayMatrix(int A[][100], int m, int n) {

    cout << "Matrix:" << endl;

    for (int i = 0; i < m; ++i) {

        for (int j = 0; j < n; ++j) {

            cout << A[i][j] << " ";

        }

        cout << endl;

    }

}



// Function to calculate the sum of all elements of a matrix of size m x n
int sumOfMatrix(int A[][100], int m, int n) {

    int sum = 0;

    for (int i = 0; i < m; ++i) {

        for (int j = 0; j < n; ++j) {

            sum += A[i][j];

        }

    }

    return sum;

}



// Function to display row-wise sum of a matrix of size m x n

void rowWiseSum(int A[][100], int m, int n) {

    cout << "Row-wise sum of matrix:" << endl;

    for (int i = 0; i < m; ++i) {

        int rowSum = 0;

        for (int j = 0; j < n; ++j) {

            rowSum += A[i][j];

        }

        cout << "Sum of elements in row " << i + 1 << ": " << rowSum << endl;

    }

}



// Function to display column-wise sum of a matrix of size m x n

void columnWiseSum(int A[][100], int m, int n) {

    cout << "Column-wise sum of matrix:" << endl;

    for (int j = 0; j < n; ++j) {

        int colSum = 0;

        for (int i = 0; i < m; ++i) {

            colSum += A[i][j];

        }

        cout << "Sum of elements in column " << j + 1 << ": " << colSum << endl;

    }

}



// Function to create transpose of a matrix of size m x n

void transposeMatrix(int A[][100], int m, int n) {

    int transposed[100][100];

    cout << "Transpose of matrix:" << endl;

    for (int j = 0; j < n; ++j) {

        for (int i = 0; i < m; ++i) {

            transposed[j][i] = A[i][j];

            cout << transposed[j][i] << " ";

        }

        cout << endl;

    }

}



int main() {

    int m, n;

    int A[100][100];


    
    cout << "Enter number of rows for the matrix: ";
    
    cin >> m;
    
    cout << "Enter number of columns for the matrix: ";
    
    cin >> n;


    
    int choice;
    
    do {
    
        cout << "\nMENU:\n";
        
        cout << "1. Input elements into matrix\n";
        
        cout << "2. Display elements of matrix\n";
        
        cout << "3. Sum of all elements of matrix\n";
        cout << "4. Display row-wise sum of matrix\n";
        
        cout << "5. Display column-wise sum of matrix\n";
        
        cout << "6. Create transpose of matrix\n";
        
        cout << "0. Exit\n";
        
        cout << "Enter your choice: ";
        
        cin >> choice;


        
        switch (choice) {
        case 1:
        
            inputMatrix(A, m, n);
            
            break;
        case
        2:
        
            displayMatrix(A, m, n);
            
            break;
        case
        3:
        
            cout << "Sum of all elements of matrix: " << sumOfMatrix(A, m, n) << endl;
            
            break;
        case
        4:
            rowWiseSum(A, m, n);
        
            break;
        case
        5:
        
            columnWiseSum(A, m, n);
            
            break;
        case
        6:
        
            transposeMatrix(A, m, n);
            
            break;
        case
        0:
        
            cout << "Exiting...\n";
            
            break;
        default:
            
        cout << "Invalid choice! Please try again.\n";
        
        }
    } while (choice != 0);


    
    return 0;
}

