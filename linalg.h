class matrix{
    public:
    double **mat;
    int c;
    int r;
    matrix(int row, int col, char type);
    matrix(int n, char type);
    matrix(int n);
    vector product(vector v);
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