class matrix{
    public:
    double **mat;
    int c;
    int r;
    matrix(int row, int col, char type);
    matrix(int n, char type);
    matrix(int n);
    matrix(int n, double a);
    matrix diagonal(int n, double a);
    vector product(vector v);
    vector product(matrix t);
    vector jacobi(vector b);
};
class vector{
    vector zero_vector(int n);
    public:
    double *vec;
    int len;
    vector(int n);
    vector(int n, char type);
    vector(matrix m);
};