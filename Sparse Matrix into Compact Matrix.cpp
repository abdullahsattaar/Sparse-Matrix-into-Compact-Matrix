#include<iostream>
using namespace std;


class CompactMatrix
{
	int rows;
	int** mat;
	int cols;
	friend ostream& operator<<(ostream& _cout, const CompactMatrix& obj);


public:

	CompactMatrix()
	{
		rows = 0;
		**mat = 0;
	}
	CompactMatrix(int **smat, int r, int c)
	{
		rows = r;
		cols = c;
		mat = new int*[rows];
		for (int i = 0; i<rows; i++)
		{
			mat[i] = new int[c];
		}
		for (int i = 0; i<rows; i++)
		{
			for (int j = 0; j<c; j++)
			{
				mat[i][j] = smat[i][j];
			}
		}	
	}
	~CompactMatrix()
	{
		delete[]mat;
	}



};
ostream& operator<<(ostream& _cout, const CompactMatrix& obj)
{
	
	cout << "Row Noofeles colindex value  " << endl;
	for (int i = 0; i < obj.rows; i++)
	{
		cout << i << "      ";
		int count = 0;
		for (int k = 0; k<obj.cols; k++)
			{
				if (obj.mat[i][k] != 0)
					count++;
			}
		cout << count << "      ";
	
		for (int k = 0; k<obj.cols; k++)
			{
				if (obj.mat[i][k] != 0)
					cout << k << "        " << obj.mat[i][k]<<"      ";
			}
		
		cout << endl;
	}


	return _cout;
}









void main() {
	const int rows = 3, cols = 7;
	int m1[rows][cols] = { { 3, 0, 0, 1, 0, 0, 0 }, { 0, 0, 9, 0, 0, 0, 0 }, { 7, 12, 9, 0, 8, 2, 8 } };
	int m2[rows][cols] = { { 0, 0, 0, 1, 2, 0, 8 }, { 0, 0, 0, 0, 0, 0, 0 }, { 7, 0, 3, 0, 2, 0, 0 } };
	int *matrix1[rows]; int *matrix2[rows]; //array of pointers same as int**
	for (int i = 0; i < rows; i++) {
		matrix1[i] = m1[i];
		matrix2[i] = m2[i];
	}
	CompactMatrix compactMatrix1(matrix1, rows, cols);
	CompactMatrix compactMatrix2(matrix2, rows, cols);
	cout << compactMatrix1 << endl;
	cout << "\n\n + \n\n";
	cout << compactMatrix2 << endl;
	cout << "\n\n = \n\n";



	system("pause");
}