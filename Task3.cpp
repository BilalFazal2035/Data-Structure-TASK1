//#include <iostream>
//using namespace std;
//
//const int MAX_SIZE = 100; // Maximum size for the matrix
//
//// Function to input elements into a matrix
//void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int m, int n) {
//    cout << "Enter elements for the matrix:" << endl;
//    for (int i = 0; i < m; ++i) {
//        for (int j = 0; j < n; ++j) {
//            cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
//            cin >> matrix[i][j];
//        }
//    }
//}
//
//// Function to display elements of a matrix
//void displayMatrix(const int matrix[MAX_SIZE][MAX_SIZE], int m, int n) {
//    cout << "Matrix elements:" << endl;
//    for (int i = 0; i < m; ++i) {
//        for (int j = 0; j < n; ++j) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << std::endl;
//    }
//}
//
//// Function to calculate the sum of all elements in a matrix
//int sumOfMatrix(const int matrix[MAX_SIZE][MAX_SIZE], int m, int n) {
//    int sum = 0;
//    for (int i = 0; i < m; ++i) {
//        for (int j = 0; j < n; ++j) {
//            sum += matrix[i][j];
//        }
//    }
//    return sum;
//}
//
//// Function to display row-wise sum of a matrix
//void rowWiseSum(const int matrix[MAX_SIZE][MAX_SIZE], int m, int n) {
//    cout << "Row-wise sum of the matrix:" << endl;
//    for (int i = 0; i < m; ++i) {
//        int rowSum = 0;
//        for (int j = 0; j < n; ++j) {
//            rowSum += matrix[i][j];
//        }
//        cout << rowSum << " ";
//    }
//    cout << endl;
//}
//
//// Function to display column-wise sum of a matrix
//void columnWiseSum(const int matrix[MAX_SIZE][MAX_SIZE], int m, int n) {
//    cout << "Column-wise sum of the matrix:" << std::endl;
//    for (int j = 0; j < n; ++j) {
//        int columnSum = 0;
//        for (int i = 0; i < m; ++i) {
//            columnSum += matrix[i][j];
//        }
//        cout << columnSum << " ";
//    }
//    cout << endl;
//}
//
//// Function to create transpose of a matrix
//void transposeMatrix(const int matrix[MAX_SIZE][MAX_SIZE], int m, int n, int transpose[MAX_SIZE][MAX_SIZE]) {
//    for (int i = 0; i < m; ++i) {
//        for (int j = 0; j < n; ++j) {
//            transpose[j][i] = matrix[i][j];
//        }
//    }
//}
//
//int main() {
//    int m, n;
//    cout << "Enter the number of rows (m): ";
//    cin >> m;
//    cout << "Enter the number of columns (n): ";
//    cin >> n;
//
//    if (m > MAX_SIZE || n > MAX_SIZE) {
//        cout << "Matrix size exceeds the maximum allowed size.\n";
//        return 1;
//    }
//
//    // Declare arrays to represent the matrix
//    int matrix[MAX_SIZE][MAX_SIZE];
//    int transpose[MAX_SIZE][MAX_SIZE];
//
//    int choice;
//    do {
//        // Display menu
//        cout << "\nMenu:\n";
//        cout << "1. Input Matrix\n";
//        cout << "2. Display Matrix\n";
//        cout << "3. Sum of Matrix\n";
//        cout << "4. Row-wise Sum\n";
//        cout << "5. Column-wise Sum\n";
//        cout << "6. Transpose Matrix\n";
//        cout << "0. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            inputMatrix(matrix, m, n);
//            break;
//        case 2:
//            displayMatrix(matrix, m, n);
//            break;
//        case 3:
//            std::cout << "Sum of Matrix: " << sumOfMatrix(matrix, m, n) << endl;
//            break;
//        case 4:
//            rowWiseSum(matrix, m, n);
//            break;
//        case 5:
//            columnWiseSum(matrix, m, n);
//            break;
//        case 6:
//            transposeMatrix(matrix, m, n, transpose);
//            std::cout << "Transpose of Matrix:" << endl;
//            displayMatrix(transpose, n, m);
//            break;
//        case 0:
//            cout << "Exiting the program.\n";
//            break;
//        default:
//            cout << "Invalid choice. Please enter a valid option.\n";
//        }
//    } while (choice != 0);
//
//    return 0;
//}