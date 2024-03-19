// Matrix , Matrix1 file = data.txt  && Matrix2 file= data1.txt
#include<iostream>
#include<fstream>
using namespace std;

// Sum of all matrix values

double sumofmatrixv(double** matrix, int rows, int col)
{
	double sum = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			sum += matrix[i][j];
		}
	}
	return sum;
}

// Product of all matrix values

double productofmatrixv(double** matrix, int rows, int col)
{
	double product = 1;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			product *= matrix[i][j];
		}
	}
	return product;
}

// Row wise average

double rowwiseaverage(double** matrix, int rows, int col)
{
	double average = 0, sum = 0;
	for (int j = 0; j < col; j++)
	{
		sum += matrix[rows][j];
	}
	average = sum / col;
	return average;
}

// Column wise average

int colwiseaverage(double** matrix, int rows, int col)
{
	double average = 0, sum = 0;
	for (int j = 0; j < rows; j++)
	{
		sum += matrix[j][col];
	}
	average = sum / rows;
	return average;
}

// Average of whole matrix

double averageofmatrix(double** matrix, int rows, int col)
{
	double sum = 0, average = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			sum += matrix[i][j];
		}
	}
	average = sum / (rows * col);
	return average;
}

// Row wise sorting
double* rowwisesorting(double** matrix, int rows, int col, double option)
{
	if (option == 1) {
		for (int i = 0; i < col; i++)
		{
			for (int j = 0; j < col - 1; j++)
			{
				if (matrix[rows][j] > matrix[rows][j + 1])
				{
					double temp = matrix[rows][j];
					matrix[rows][j] = matrix[rows][j + 1];
					matrix[rows][j + 1] = temp;
				}
			}
		}
	}
	else if (option == 2)
	{
		for (int i = 0; i < col; i++)
		{
			for (int j = 0; j < col - 1; j++)
			{
				if (matrix[rows][j] < matrix[rows][j + 1])
				{
					double temp = matrix[rows][j];
					matrix[rows][j] = matrix[rows][j + 1];
					matrix[rows][j + 1] = temp;
				}
			}
		}
	}
	else
		cout << "Enter Correct option(1,2).\n";

	return matrix[rows];
}

// Col wise sorting

double** colwisesort(double** matrix, int rows, int col)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows - 1; j++)
		{
			if (matrix[j][col] > matrix[j + 1][col])
			{
				double temp = matrix[j][col];
				matrix[j][col] = matrix[j + 1][col];
				matrix[j + 1][col] = temp;
			}
		}
	}
	return matrix;
}

// Scalar matrix addition
double** scalarmatrixaddition(double** matrix1, double** matrix2, double a, double b, int rows, int col)
{
	double** result = new double* [rows];
	for (int i = 0; i < rows; i++)
	{
		result[i] = new double[col];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			matrix1[i][j] *= a;
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			matrix2[i][j] *= b;
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			result[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
	// Free the memory for matrix1
	for (int i = 0; i < rows; i++)
	{
		delete[] matrix1[i];
	}
	delete[] matrix1;

	// Free the memory for matrix2
	for (int i = 0; i < rows; i++)
	{
		delete[] matrix2[i];
	}
	delete[] matrix2;

	return result;
}

// Scalar matrix subtraction

double** scalarmatrixsubtraction(double** matrix1, double** matrix2, double a, double b, int rows, int col)
{
	double** result = new double* [rows];
	for (int i = 0; i < rows; i++)
	{
		result[i] = new double[col];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			matrix1[i][j] *= a;
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			matrix2[i][j] *= b;
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			result[i][j] = matrix1[i][j] - matrix2[i][j];
		}
	}
	// Free the memory for matrix1
	for (int i = 0; i < rows; i++)
	{
		delete[] matrix1[i];
	}
	delete[] matrix1;

	// Free the memory for matrix2
	for (int i = 0; i < rows; i++)
	{
		delete[] matrix2[i];
	}
	delete[] matrix2;

	return result;
}

// Scalar matrix multiplication

double** scalarmatrixmultiplication(double** matrix1, double** matrix2, double a, double b, int rows, int col)
{
	double** result = new double* [rows];
	for (int i = 0; i < rows; i++)
	{
		result[i] = new double[col];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			matrix1[i][j] *= a;
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			matrix2[i][j] *= b;
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			result[i][j] = matrix1[i][j] * matrix2[i][j];
		}
	}
	// Free the memory for matrix1
	for (int i = 0; i < rows; i++)
	{
		delete[] matrix1[i];
	}
	delete[] matrix1;

	// Free the memory for matrix2
	for (int i = 0; i < rows; i++)
	{
		delete[] matrix2[i];
	}
	delete[] matrix2;

	return result;
}

// Scalar matrix division

double** scalarmatrixdivision(double** matrix1, double** matrix2, double a, double b, int rows, int col)
{
	double** result = new double* [rows];
	for (int i = 0; i < rows; i++)
	{
		result[i] = new double[col];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			matrix1[i][j] *= a;
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			matrix2[i][j] *= b;
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			result[i][j] = matrix1[i][j] / matrix2[i][j];
		}
	}
	// Free the memory for matrix1
	for (int i = 0; i < rows; i++)
	{
		delete[] matrix1[i];
	}
	delete[] matrix1;

	// Free the memory for matrix2
	for (int i = 0; i < rows; i++)
	{
		delete[] matrix2[i];
	}
	delete[] matrix2;

	return result;
}

// Addition of two matrices

double** additionoftwomatrices(double** matrix1, double** matrix2, int rows, int col)
{
	double** result = new double* [rows];
	for (int i = 0; i < rows; i++)
	{
		result[i] = new double[col];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			result[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
	// Free the memory for matrix1
	for (int i = 0; i < rows; i++)
	{
		delete[] matrix1[i];
	}
	delete[] matrix1;

	// Free the memory for matrix2
	for (int i = 0; i < rows; i++)
	{
		delete[] matrix2[i];
	}
	delete[] matrix2;

	return result;
}

//  Subtraction of two matrices

double** subtractionoftwomatrices(double** matrix1, double** matrix2, int rows, int col)
{
	double** result = new double* [rows];
	for (int i = 0; i < rows; i++)
	{
		result[i] = new double[col];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			result[i][j] = matrix1[i][j] - matrix2[i][j];
		}
	}
	// Free the memory for matrix1
	for (int i = 0; i < rows; i++)
	{
		delete[] matrix1[i];
	}
	delete[] matrix1;

	// Free the memory for matrix2
	for (int i = 0; i < rows; i++)
	{
		delete[] matrix2[i];
	}
	delete[] matrix2;

	return result;
}

// Multiplication of two matrices

double** multiplicationoftwomatrices(double** matrix1, double** matrix2, int rows, int col)
{
	double** result = new double* [rows];
	for (int i = 0; i < rows; i++)
	{
		result[i] = new double[col];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			result[i][j] = matrix1[i][j] * matrix2[i][j];
		}
	}
	// Free the memory for matrix1
	for (int i = 0; i < rows; i++)
	{
		delete[] matrix1[i];
	}
	delete[] matrix1;

	// Free the memory for matrix2
	for (int i = 0; i < rows; i++)
	{
		delete[] matrix2[i];
	}
	delete[] matrix2;

	return result;
}

// Matrix Inverse

double** matrixinverse(double** matrix, int rows, int col)
{
	double** inverse = new double* [rows];
	for (int i = 0; i < rows; i++)
	{
		inverse[i] = new double[col];
	}
	int rc = col - 1, rr = rows - 1;
	for (int i = 0; i < rows; i++)
	{
		rc = col - 1;
		for (int j = 0; j < col; j++)
		{
			inverse[rr][rc] = matrix[i][j];
			rc--;
		}
		rr--;
	}
	for (int i = 0; i < rows; i++)
	{
		delete[]matrix[i];
	}
	delete[]matrix;
	return inverse;
}

// Transpose matrix

double** trasnposeofmatrix(double** matrix, int rows, int col)
{
	double** transpose = new double* [col];
	for (int i = 0; i < col; i++)
	{
		transpose[i] = new double[rows];
	}
	//double tc, tr;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			transpose[j][i] = matrix[i][j];
		}
	}
	for (int i = 0; i < rows; i++)
	{
		delete[]matrix[i];
	}
	delete[]matrix;
	return transpose;
}

// Display Matrix

void display(double** matrix, int rows, int col)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

// Display matrix on file

void displayf(ofstream& fout, double** matrix, int rows, int col)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < col; j++)
		{
			fout << matrix[i][j] << " ";
		}
		fout << endl;
	}
}

// Input Matrix

void input(double** matrix, int rows, int col)
{
	for (int i = 0; i < rows; i++)
	{
		cout << "Row " << i << ":\n";
		for (int j = 0; j < col; j++)
		{
			cin >> matrix[i][j];
		}
	}
}
// Delete matrix

void del(double** matrix, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		delete[]matrix[i];
	}
	delete[]matrix;
}

// create rows

void create_rows(double** matrix, int rows, int col)
{
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new double[col];
	}
}

// Find row
int findrows(ifstream& fin)
{
	double r = 0;
	char arr[100];
	while (fin.getline(arr, 100))
	{
		r++;
	}
	return r;
}

// Find col
int findcol(ifstream& fin, int rows)
{
	double c = 0;
	char arr[100]{ '\0' };
	double count = 0, d = 0;
	while (fin.getline(arr, 100))
	{
		count = 0;
		for (int i = 0; arr[i] != '\0'; i++)
		{
			if (arr[i] != ' ' && (arr[i + 1] == ' ' || arr[i + 1] == '\0'))
				count++;
		}
		c = count;
		d++;
	}
	return c;
}

// Copy arr
void copy(double* old_arr, double* new_arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		new_arr[i] = old_arr[i];
	}
}

// Regrow
double* regrow(double* old_arr, int size, int number)
{
	double* new_arr = new double[size + 1];
	copy(old_arr, new_arr, size);
	new_arr[size] = number;
	delete[]old_arr;
	return new_arr;
}

int main()
{
	ifstream fin;
	ifstream file;
	double a, b = 0; //scalar numbers
	cout << "\t\t\t---------------------------------\n";
	cout << "\t\t\t\tMATRIX OPERATION \t";
	cout << "\n\t\t\t---------------------------------\n";

	cout << "\n\nThese are the operations you can perform: \n\n";
	cout << "1.Sum of all matrix values\n2.Product of all matrix values\n3.Row wise average\n4.Column wise average\n5.Average of whole matrix\n6.Row wise sorting\n7.Col wise sorting\n8.Scalar matrix addition\n9.Scalar matrix subtraction\n10.Scalar matrix multiplication\n11.Scalar matrix division\n12.Addition of two matrices\n13.Subtraction of two matrices\n14.Multiplication of two matrices\n15.Matrix Inverse\n16.Transpose matrix\n";

	char end = '\0';

	do {

		double matrix_option = 0;
		cout << "\n\nHow many matrix you want to create: \n1. One\n2. Two\nEnter: ";
		cin >> matrix_option;

		int rows = 0, col = 0, rows_1 = 0, col_1 = 0;
		double matrix_op = 0;

		if (matrix_option == 1)
		{
			cout << "\nTell us the dimensions of your Matrix.\n";
			cout << "Number of rows:\nEnter: ";
			cin >> rows;
			cout << "Number of columns:\nEnter: ";
			cin >> col;
			if (rows < 1 || col < 1)
			{
				cout << "Rows or Col can't be less than 1.Try again.";
				continue;
			}
			double** matrix = new double* [rows];
			cout << "Matrix (named matrix) created successfully.\n";
			double* foc = new double;
			cout << "\nEnter in matrix.\n1.Manually\n2.From file\nEnter: ";
			cin >> *foc;
			if (*foc == 1)
			{
				for (int i = 0; i < rows; i++)
				{
					matrix[i] = new double[col];
				}
				cout << "\nEnter in matrix\n";
				for (int i = 0; i < rows; i++)
				{
					cout << "Row " << i << ":\n";
					for (int j = 0; j < col; j++)
					{
						cin >> matrix[i][j];
					}
				}
			}
			else if (*foc == 2)
			{
				fin.open("data.txt");
				if (!fin.is_open())
				{
					cout << "Error opening file 'data.txt'";
					return 0;
				}
				int filerows = findrows(fin);
				fin.close();
				cout << "\nFile 'data.txt' is open.\n";
				cout << "Enter " << rows << " rows and " << col << " col in each row in a file.\n";
				char startover = 'N';
				while (startover != 'Y')
				{

					cout << "\nHave you entered yet? (Y/N): ";
					cin >> startover;

					if (startover == 'N')
					{
						cout << "Please enter first and then try again.\n";
						continue;
					}
				}
				if (filerows != rows)
				{
					cout << "\nNumber of rows in file does not matched the size given.\n";
					return 0;
				}
				fin.open("data.txt");
				int tcol = findcol(fin, rows);
				if (tcol != col)
				{
					cout << "Number of columns in file does'nt matched the given column size.\n";
					return 0;
				}
				fin.close();

				fin.open("data.txt");
				int size = 1;

				for (int i = 0; i < rows; i++)
				{
					matrix[i] = new double[size];
				}
				int temp;
				for (int i = 0; i < rows; i++)
				{
					fin >> matrix[i][0];
					for (int j = 0; j < tcol - 1; j++)
					{
						fin >> temp;
						matrix[i] = regrow(matrix[i], j + 1, temp);
					}
				}
				display(matrix, rows, tcol);
				fin.close();
				rows = filerows;
				col = tcol;
			}
			else
			{
				cout << "\nEnter between 1 and 2 only.";
				continue;
			}
			cout << "\nWhich operation you want to do?\nEnter: ";
			cin >> matrix_op;
			int outputx = 0;
			cout << "\nOuput on File or console?\n1. Press '1' for file\n2.Any key for console\n";
			cin >> outputx;
			ofstream fout;
			if (outputx == 1)
			{
				char filename[15] = { '\0' };
				cout << "Enter Filename: ";
				cin >> filename;
				fout.open(filename);
			}

			if (matrix_op == 1)
			{
				double* sum = new double;
				*sum = sumofmatrixv(matrix, rows, col);
				if (outputx == 1) {
					fout << "Sum of all matrix values: " << *sum;
				}
				else
					cout << "Sum of all matrix values: " << *sum;

				delete sum;
			}
			else if (matrix_op == 2)
			{
				double* product = new double;
				*product = productofmatrixv(matrix, rows, col);
				if (outputx == 1) {
					fout << "Product of all matrix values: " << *product;
				}
				else
					cout << "Product of all matrix values: " << *product;

				delete product;
			}
			else if (matrix_op == 3)
			{
				double* wrow = new double;
				double* ravg = new double;
				cout << "\nAverage of which row?\nEnter: ";
				cin >> *wrow;
				if (*wrow >= rows)
				{
					cout << "\nRow does not exist.Try again\n";
					continue;
				}
				*ravg = rowwiseaverage(matrix, *wrow, col);
				if (outputx == 1) {
					fout << "Averge of " << *wrow << " row:" << *ravg;
				}
				else
					cout << "Averge of " << *wrow << " row:" << *ravg;

				delete ravg;
				delete wrow;
			}
			else if (matrix_op == 4)
			{
				double* cwavg = new double;
				double* wcavg = new double;
				cout << "\nWhich column?\nEnter: ";
				cin >> *wcavg;
				if (*wcavg >= col)
				{
					cout << "Column does not exist.Try again";
					continue;
				}
				*cwavg = colwiseaverage(matrix, rows, *wcavg);
				if (outputx == 1) {
					fout << "Average of " << *wcavg << " column: " << *cwavg;
				}
				else
					cout << "Average of " << *wcavg << " column: " << *cwavg;

				delete wcavg;
				delete cwavg;
			}
			else if (matrix_op == 5)
			{
				double* avg = new double;
				*avg = averageofmatrix(matrix, rows, col);
				if (outputx == 1) {
					fout << "Average of matrix: " << *avg;
				}
				else
					cout << "Average of matrix: " << *avg;

				delete avg;
			}
			else if (matrix_op == 6)
			{
				double* rws = new double;
				cout << "\nWhich row to sort?\nEnter: ";
				cin >> *rws;
				double option = 0;
				cout << "\n1.Ascending\n2.Descending\nEnter: ";
				cin >> option;
				rowwisesorting(matrix, *rws, col, option);
				if (outputx == 1) {
					displayf(fout, matrix, rows, col);
				}
				else {
					cout << "Output: \n";
					display(matrix, rows, col);
				}
				delete rws;
			}
			else if (matrix_op == 7)
			{
				double* wcs = new double;
				cout << "Which column to sort?\nEnter: ";
				cin >> *wcs;
				colwisesort(matrix, rows, *wcs);
				if (outputx == 1) {
					displayf(fout, matrix, rows, col);
				}
				else {
					cout << "Output: \n";
					display(matrix, rows, col);
				}
				delete wcs;
			}
			else if (matrix_op == 8)
			{
				cout << "\n[ERROR:0x1]::Two matrices needed for this operation.";
				continue;
			}
			else if (matrix_op == 9)
			{
				cout << "\n[ERROR:0x1]::Two matrices needed for this operation.";
				continue;
			}
			else if (matrix_op == 10)
			{
				cout << "\n[ERROR:0x1]::Two matrices needed for this operation.";
				continue;
			}
			else if (matrix_op == 11)
			{
				cout << "\n[ERROR:0x1]::Two matrices needed for this operation.";
				continue;
			}
			else if (matrix_op == 12)
			{
				cout << "\n[ERROR:0x1]::Two matrices needed for this operation.";
				continue;
			}
			else if (matrix_op == 13)
			{
				cout << "\n[ERROR:0x1]::Two matrices needed for this operation.";
				continue;
			}
			else if (matrix_op == 14)
			{
				cout << "\n[ERROR:0x1]::Two matrices needed for this operation.";
				continue;
			}
			else if (matrix_op == 15)
			{
				matrix = matrixinverse(matrix, rows, col);
				if (outputx == 1) {
					displayf(fout, matrix, rows, col);
				}
				else {
					cout << "Ouput: \n";
					display(matrix, rows, col);
				}
			}
			else if (matrix_op == 16)
			{
				matrix = trasnposeofmatrix(matrix, rows, col);
				cout << "Ouput: \n";
				if (outputx == 1) {
					displayf(fout, matrix, rows, col);
				}
				else {
					display(matrix, col, rows);
				}
			}
			else
			{
				cout << "[ERROR:x620]::'Option does not exist'\nProgram ended.";
				return 0;
			}
			fout.close();
			del(matrix, rows);
		}

		else if (matrix_option == 2)
		{
			cout << "\nTell us the dimesnion of Matrix 1.";
			cout << "\nNumber of rows for |Matrix 1|\nEnter: ";
			cin >> rows;
			cout << "Number of colm for |Matrix 1|\nEnter: ";
			cin >> col;
			double** matrix1 = new double* [rows];
			for (int i = 0; i < rows; i++)
			{
				matrix1[i] = new double[col];
			}
			cout << "\nMatrix named |matrix1| created successfully.\n";
			cout << "\nTell us the dimensions of Matrix 2.";
			cout << "\nNumber of rows for |Matrix 2|\nEnter: ";
			cin >> rows_1;
			cout << "Number of colm for |Matrix 2|\nEnter: ";
			cin >> col_1;
			if (rows < 1 || col < 1 || rows_1 < 1 || col_1 < 1)
			{
				cout << "Rows or Col can't be less than 1.Try again.";
				continue;
			}
			else if (rows != rows_1 || col != col_1)
			{
				cout << "\nRows and Col of both matrices needs to be of same size\nto perform operations. TRY AGAIN";
				continue;
			}
			double** matrix2 = new double* [rows_1];
			for (int i = 0; i < rows_1; i++)
			{
				matrix2[i] = new double[col_1];
			}
			cout << "Matrix named |matrix2| created successfully.";
			double* foc = new double;

			cout << "\n\nEnter in matrices.\n1.Console\n2.File\nEnter: ";
			cin >> *foc;

			if (*foc == 1)
			{
				cout << "\nEnter in Matrix 1: \n";
				input(matrix1, rows, col);
				cout << "Enter in Matrix 2: \n";
				input(matrix2, rows, col);
			}
			else if (*foc == 2)
			{
				file.open("data1.txt");
				fin.open("data.txt");
				if (!fin.is_open())
				{
					cout << "Error opening file.'input.txt' or 'data.txt'";
					return 0;
				}
				file.close();
				fin.close();
				cout << "\nFile 'data.txt' and 'data1.txt' is open.\n";
				cout << "Enter " << rows << " rows and " << col << " col in each row in a file.\n";
				char startove = 'N';
				while (startove != 'Y')
				{

					cout << "\nHave you entered in both files yet? (Y/N): ";
					cin >> startove;

					if (startove == 'N')
					{
						cout << "Please enter first and then try again.\n";
						continue;
					}
				}
				int check1 = 0, size = 0, sz = 0;
				file.open("data1.txt");
				fin.open("data.txt");
				while (fin >> check1)
				{
					size++;
				}
				if (size != (rows * col))
				{
					cout << "\n[LOG_ERROR:_]::Enter " << rows << " rows and " << col << " col to data.txt";
					continue;
				}
				while (file >> check1)
				{
					sz++;
				}
				if (sz != (rows_1 * col_1))
				{
					cout << "\n[LOG_ERROR:_]::Enter " << rows_1 << " rows and " << col_1 << " col to data1.txt";
					continue;
				}
				file.close();
				fin.close();

				file.open("data1.txt");
				fin.open("data.txt");
				for (int i = 0; i < rows; i++)
				{
					for (int j = 0; j < col; j++)
					{
						fin >> matrix1[i][j];
						file >> matrix2[i][j];
					}
				}
				fin.close();
				file.close();
			}
			else
			{
				cout << "Enter between 1 and 2 only.";
				continue;
			}
			int outputy = 0;
			cout << "Output on File or Console?\n1.Press '1' for File\n2.Any key for console\nEnter: ";
			cin >> outputy;

			ofstream fou;
			if (outputy == 1)
			{
				char filen[15] = { '\0' };
				cout << "Enter filename: ";
				cin >> filen;
				fou.open(filen);
			}

			double ms = 0;
			cout << "\nEnter matrix operation to perform.\nEnter: ";
			cin >> matrix_op;
			if (matrix_op == 1)
			{
				cout << "Which matrix to send?\nEnter: ";
				cin >> ms;
				if (ms == 1)
				{
					double* sum = new double;
					*sum = sumofmatrixv(matrix1, rows, col);
					if (outputy == 1) {
						fou << "Sum of all matrix values: " << *sum;
					}
					else {
						cout << "Sum of all matrix values: " << *sum;
					}
					delete sum;
				}
				else if (ms == 2)
				{
					double* sum = new double;
					*sum = sumofmatrixv(matrix2, rows, col);
					if (outputy == 1) {
						fou << "Sum of all matrix values: " << *sum;
					}
					else {
						cout << "Sum of all matrix values: " << *sum;
					}
					delete sum;
				}
				else
				{
					cout << "Enter bw 1 and 2 only.";
					continue;
				}
			}
			else if (matrix_op == 2)
			{
				cout << "Which matrix to send?\nEnter: ";
				cin >> ms;
				if (ms == 1)
				{
					double* product = new double;
					*product = productofmatrixv(matrix1, rows, col);
					if (outputy == 1) {
						fou << "Product of all matrix values: " << *product;
					}
					else {
						cout << "Product of all matrix values: " << *product;
					}
					delete product;

				}
				else if (ms == 2)
				{
					double* product = new double;
					*product = productofmatrixv(matrix2, rows, col);
					if (outputy == 1) {
						fou << "Product of all matrix values: " << *product;
					}
					else {
						cout << "Product of all matrix values: " << *product;
					}
					delete product;

				}
				else
				{
					cout << "Enter bw 1 and 2 only.";
					continue;
				}
			}
			else if (matrix_op == 3)
			{
				cout << "Which matrix to send?\nEnter: ";
				cin >> ms;
				if (ms == 1)
				{
					double* wrow = new double;
					double* ravg = new double;
					cout << "\nAverage of which row?\nEnter: ";
					cin >> *wrow;
					if (*wrow >= rows)
					{
						cout << "\nRow does not exist.Try again\n";
						continue;
					}
					*ravg = rowwiseaverage(matrix1, *wrow, col);
					if (outputy == 1) {
						fou << "Averge of " << *wrow << " row:" << *ravg;
					}
					else {
						cout << "Averge of " << *wrow << " row:" << *ravg;
					}
					delete ravg;
					delete wrow;
				}
				else if (ms == 2)
				{
					cout << "==\n";
					double* wrow = new double;
					double* ravg = new double;
					cout << "\nAverage of which row?\nEnter: ";
					cin >> *wrow;
					if (*wrow >= rows)
					{
						cout << "\nRow does not exist.Try again\n";
						continue;
					}
					*ravg = rowwiseaverage(matrix2, *wrow, col);
					if (outputy == 1) {
						fou << "Averge of " << *wrow << " row:" << *ravg;
					}
					else {
						cout << "Averge of " << *wrow << " row:" << *ravg;
					}
					delete ravg;
					delete wrow;
				}
				else
				{
					cout << "Enter bw 1 and 2 only.";
					continue;
				}
			}
			else if (matrix_op == 4)
			{
				cout << "Which matrix to send?\nEnter: ";
				cin >> ms;
				if (ms == 1)
				{
					double* cwavg = new double;
					double* wcavg = new double;
					cout << "\nWhich column?\nEnter: ";
					cin >> *wcavg;
					if (*wcavg >= col)
					{
						cout << "Column does not exist.Try again";
						continue;
					}
					*cwavg = colwiseaverage(matrix1, rows, *wcavg);
					if (outputy == 1) {
						fou << "Average of " << *wcavg << " column: " << *cwavg;
					}
					else {
						cout << "Average of " << *wcavg << " column: " << *cwavg;
					}
					delete wcavg;
					delete cwavg;
				}
				else if (ms == 2)
				{
					double* cwavg = new double;
					double* wcavg = new double;
					cout << "\nWhich column?\nEnter: ";
					cin >> *wcavg;
					if (*wcavg >= col)
					{
						cout << "Column does not exist.Try again";
						continue;
					}
					*cwavg = colwiseaverage(matrix2, rows, *wcavg);
					if (outputy == 1) {
						fou << "Average of " << *wcavg << " column: " << *cwavg;
					}
					else {
						cout << "Average of " << *wcavg << " column: " << *cwavg;
					}
					delete wcavg;
					delete cwavg;
				}
				else
				{
					cout << "Enter bw 1 and 2 only.";
					continue;
				}
			}
			else if (matrix_op == 5)
			{
				cout << "Which matrix to send?\nEnter: ";
				cin >> ms;
				if (ms == 1)
				{
					double* avg = new double;
					*avg = averageofmatrix(matrix1, rows, col);
					if (outputy == 1) {
						fou << "Average of matrix: " << *avg;
					}
					else {
						cout << "Average of matrix: " << *avg;
					}
					delete avg;
				}
				else if (ms == 2)
				{
					double* avg = new double;
					*avg = averageofmatrix(matrix2, rows, col);

					if (outputy == 1) {
						fou << "Average of matrix: " << *avg;
					}
					else {
						cout << "Average of matrix: " << *avg;
					}
					delete avg;
				}
				else
				{
					cout << "Enter bw 1 and 2 only.";
					continue;
				}
			}
			else if (matrix_op == 6)
			{
				cout << "Which matrix to send?\nEnter: ";
				cin >> ms;
				if (ms == 1)
				{
					double* rws = new double;
					cout << "\nWhich row to sort?\nEnter: ";
					cin >> *rws;
					double option = 0;
					cout << "\n1.Ascending\n2.Descending\nEnter: ";
					cin >> option;
					rowwisesorting(matrix1, *rws, col, option);
					if (outputy == 1) {
						displayf(fou, matrix1, rows, col);
					}
					else {
						cout << "Output: \n";
						display(matrix1, rows, col);
					}
					delete rws;
				}
				else if (ms == 2)
				{
					double* rws = new double;
					cout << "\nWhich row to sort?\nEnter: ";
					cin >> *rws;
					double option = 0;
					cout << "\n1.Ascending\n2.Descending\nEnter: ";
					cin >> option;
					rowwisesorting(matrix2, *rws, col, option);
					if (outputy == 1) {
						displayf(fou, matrix2, rows, col);
					}
					else {
						cout << "Output: \n";
						display(matrix2, rows, col);
					}
					delete rws;
				}
				else
				{
					cout << "Enter bw 1 and 2 only.";
					continue;
				}
			}
			else if (matrix_op == 7)
			{
				cout << "Which matrix to send?\nEnter: ";
				cin >> ms;
				if (ms == 1)
				{
					double* wcs = new double;
					cout << "Which column to sort?\nEnter: ";
					cin >> *wcs;
					colwisesort(matrix1, rows, *wcs);
					if (outputy == 1) {
						displayf(fou, matrix1, rows, col);
					}
					else {
						cout << "Output: \n";
						display(matrix1, rows, col);
					}
					delete wcs;
				}
				else if (ms == 2)
				{
					double* wcs = new double;
					cout << "Which column to sort?\nEnter: ";
					cin >> *wcs;
					colwisesort(matrix2, rows, *wcs);
					if (outputy == 1) {
						displayf(fou, matrix2, rows, col);
					}
					else {
						cout << "Output: \n";
						display(matrix2, rows, col);
					}
					delete wcs;
				}
				else
				{
					cout << "Enter bw 1 and 2 only.";
					continue;
				}
			}
			else if (matrix_op == 8)
			{
				cout << "\nEnter scalar number for matrix1.\nEnter: ";
				cin >> a;
				cout << "\nEnter scalar number for matrix2.\nEnter: ";
				cin >> b;

				double** result = new double* [rows];
				create_rows(result, rows, col);

				result = scalarmatrixaddition(matrix1, matrix2, a, b, rows, col);
				if (outputy == 1) {
					displayf(fou, result, rows, col);
				}
				else {
					cout << "Output: \n";
					display(result, rows, col);
				}

				del(result, rows);
			}
			else if (matrix_op == 9)
			{
				cout << "\nEnter scalar number for matrix1.\nEnter: ";
				cin >> a;
				cout << "\nEnter scalar number for matrix2.\nEnter: ";
				cin >> b;

				double** result = new double* [rows];
				create_rows(result, rows, col);

				result = scalarmatrixsubtraction(matrix1, matrix2, a, b, rows, col);
				if (outputy == 1) {
					displayf(fou, result, rows, col);
				}
				else {
					cout << "Output: \n";
					display(result, rows, col);
				}

				del(result, rows);
			}
			else if (matrix_op == 10)
			{
				cout << "\nEnter scalar number for matrix1.\nEnter: ";
				cin >> a;
				cout << "\nEnter scalar number for matrix2.\nEnter: ";
				cin >> b;

				double** result = new double* [rows];
				create_rows(result, rows, col);

				result = scalarmatrixmultiplication(matrix1, matrix2, a, b, rows, col);
				if (outputy == 1) {
					displayf(fou, result, rows, col);
				}
				else {
					cout << "Output: \n";
					display(result, rows, col);
				}

				del(result, rows);
			}
			else if (matrix_op == 11)
			{
				cout << "\nEnter scalar number for matrix1.\nEnter: ";
				cin >> a;
				cout << "\nEnter scalar number for matrix2.\nEnter: ";
				cin >> b;

				double** result = new double* [rows];
				create_rows(result, rows, col);

				result = scalarmatrixdivision(matrix1, matrix2, a, b, rows, col);
				if (outputy == 1) {
					displayf(fou, result, rows, col);
				}
				else {
					cout << "Output: \n";
					display(result, rows, col);
				}
				del(result, rows);
			}
			else if (matrix_op == 12)
			{
				double** result = new double* [rows];
				create_rows(result, rows, col);

				result = additionoftwomatrices(matrix1, matrix2, rows, col);
				if (outputy == 1) {
					displayf(fou, result, rows, col);
				}
				else {
					display(result, rows, col);
				}
				del(result, rows);
			}
			else if (matrix_op == 13)
			{
				double** result = new double* [rows];
				create_rows(result, rows, col);

				result = subtractionoftwomatrices(matrix1, matrix2, rows, col);
				if (outputy == 1) {
					displayf(fou, result, rows, col);
				}
				else {
					display(result, rows, col);
				}
				del(result, rows);
			}
			else if (matrix_op == 14)
			{
				double** result = new double* [rows];
				create_rows(result, rows, col);

				result = multiplicationoftwomatrices(matrix1, matrix2, rows, col);
				if (outputy == 1) {
					displayf(fou, result, rows, col);
				}
				else {
					display(result, rows, col);
				}
				del(result, rows);
			}
			else if (matrix_op == 15)
			{
				cout << "Which matrix to send?\nEnter: ";
				cin >> ms;
				if (ms == 1)
				{
					matrix1 = matrixinverse(matrix1, rows, col);
					if (outputy == 1) {
						displayf(fou, matrix1, rows, col);
					}
					else {
						cout << "Ouput: \n";
						display(matrix1, rows, col);
					}
				}
				else if (ms == 2)
				{
					matrix2 = matrixinverse(matrix2, rows, col);
					if (outputy == 1) {
						displayf(fou, matrix2, rows, col);
					}
					else {
						cout << "Ouput: \n";
						display(matrix2, rows, col);
					}
				}
				else
				{
					cout << "Enter bw 1 and 2 only.";
					continue;
				}
			}
			else if (matrix_op == 16)
			{
				cout << "Which matrix to send?\nEnter: ";
				cin >> ms;
				if (ms == 1)
				{
					matrix1 = trasnposeofmatrix(matrix1, rows, col);
					if (outputy == 1) {
						displayf(fou, matrix1, rows, col);
					}
					else {
						cout << "Ouput: \n";
						display(matrix1, col, rows);
					}
				}
				else if (ms == 2)
				{
					matrix2 = trasnposeofmatrix(matrix2, rows, col);
					if (outputy == 1) {
						displayf(fou, matrix2, rows, col);
					}
					else {
						cout << "Ouput: \n";
						display(matrix2, col, rows);
					}
				}
				else
				{
					cout << "Enter bw 1 and 2 only.";
					continue;
				}
			}
			else
			{
				cout << "[ERROR:x620]::'Option does not exist'\nProgram ended.";
				return 0;
			}
		}
		else {
			cout << "Enter between 1 and 2 only.";
			return 0;
		}

		cout << "\n\nTo exit enter Y.\nEnter: ";
		cin >> end;
	} while (end != 'Y');
	return 0;
}