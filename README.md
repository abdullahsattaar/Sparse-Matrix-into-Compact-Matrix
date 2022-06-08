# Sparse-Matrix-into-Compact-Matrix
In computer programming, a matrix can be defined
with a 2-dimensional array. Any array with 'm'
columns and 'n' rows represents a n X m matrix.
There may be a situation in which a matrix contains a
greater number of ZERO values than NON-ZERO
values. Such matrix is known as sparse matrix.
We can store these sparse matrices using less
memory, by storing only non-zero entries rather
than storing all entries.
Consider two sparse matrices of Size:3x7.
Sparse Matrix # 1 Sparse Matrix # 2


The above sparse matrices will be stored in compact matrices, shown as below.
Compact
Matrix # 1
Compact
Matrix # 2
Note: You are required to only allocate exact size of memory.
3 0 0 1 0 0 0 0 2
1 0 0 0 0 4 0 8 1
0 0 2 0 0 0 0 5 0
0 6 0 0 0 0 0 0 0
0 0 0 0 0 0 8 0 0
2 2 0 0 0 0 0 0 0
0 0 0 4 8 0 0 0 0
3 0 0 1 0 0 0
0 0 9 0 0 0 0
7 12 9 0 8 2 8
0 0 0 1 2 0 8
0 0 0 0 0 0 0
7 3 0 0 2 0 0
To implement the idea of storing the sparse matrix into a compact matrix, you need to implement the class of
CompactMatrix. CompactMatrix will have two data members, rows (int), mat (int **). You need to implement the
required functionalities:
1. Constructors: Which receives a sparse matrix and stores in mat (int **) in compressed/compact form. (20)
2. << operator (Display): Which displays the matrix in compact form. (10)
3. Destructor. (10)
A sample main program is given to you.
NOTE: While evaluation, the values of these matrices and rows/cols can be changed.
