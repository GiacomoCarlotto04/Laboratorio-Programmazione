class MyVector {
    public:
        // Costruttore
        MyVector(int n);

        // Get e set
        double safe_get(int i);
        void safe_set(int i, double x);

        // Overload operatori
//        MyVector operator[](MyVector v);
//        MyVector operator[](const MyVector& v);

        // Distruttore
        ~MyVector();

    private:
        int n;
        double *p;
};