#include <stdio.h>

int main() {

// Definition of variables
// Variable definition of matrix creation
int lineA, columnA, lineB, columnB;
// Variables for repetition loops 
int i, j, k;

// Entrada de dados
printf("---------------------------- Matrix A ---------------------------------\n");
printf("Enter the number of rows in matrix A: ");
scanf("%i", &lineA);
printf("Enter the number of columns in matrix A: ");
scanf("%i", &columnA);
printf("---------------------------- Matrix B ---------------------------------\n");
printf("Enter the number of rows in matrix B: ");
scanf("%i", &lineB);
printf("Enter the number of columns in matrix B: ");
scanf("%i", &columnB);

printf("-----------------------------------------------------------------------\n"); // Skip line on console

// Matrix creation (matrixA x matrixB = result)
float matrixA[lineA][columnA], matrixB[lineB][columnB], result[lineA][columnB]; 
// Creation of auxiliary variable
float aux = 0;

if (columnA == lineB) {

  // Reading data to add row X and column Y of the created matrices
	for (i = 0; i < lineA; i++) {
		for (j = 0; j < columnA; j++) {
			printf("Enter the value of row% i and column% i of Matrix A: ", i + 1, j + 1);
			scanf("%f", &matrixA[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < lineB; i++) {        
		for (j = 0; j < columnB; j++) {
			printf("Enter the value of row% i and column% i of Matrix B: ", i + 1, j + 1);
			scanf("%f", &matrixB[i][j]);
		}
		printf("\n");
	}

	// Prints the matrices defined in the Data Readers
	printf("---------------------------- Matrix A ---------------------------------\n");

	for (i = 0; i < lineA; i++) {        
		for (j = 0; j < columnA; j++) {
			printf("%2.f", matrixA[i][j]);
		}
		printf("\n"); // Skip line when changing lines in Matrix A
	}

	printf("---------------------------- Matrix B ---------------------------------\n");
	for (i = 0; i < lineB; i++) {
		for (j = 0; j < columnB; j++) {
			printf("%2.f", matrixB[i][j]); 
		}
		printf("\n"); // Skip line when changing lines in Matrix B
	}

	printf("---------------------------- Result ------------------------------------\n");

	// Multiplication of Matrices A x B is a result coming out on the user's screen
	for (i = 0; i < lineA; i++) {
		for (j = 0; j < columnB; j++) {
			
		  result[i][j] = 0;

      // Calculation of A x B -> Adding the multiplication of row values by column values
			for (k = 0; k < lineB; k++) {
				aux +=  matrixA[i][k] * matrixB[k][j];
			} // End for calculation

			result[i][j] = aux; // Auxiliary, in which you stored the values will be replaced in the result matrix.
			aux = 0; // Value reset 
		} // End for columnB
	} // End for lineA
	
  // Printing the result matrix on the user's screen
	for (i = 0; i < lineA; i++) {
		for (j = 0; j < columnB; j++) {
			printf("%2.f", result[i][j]);
		}
		printf("\n"); // Skip the line or change the line in the result matrix
	}
	printf("\n"); // Jump line
} // End if
else {
	printf("\nThe given matrices are not possible to be multiplied.");
} // End else

  return 0;
} // End int main