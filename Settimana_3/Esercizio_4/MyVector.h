class MyVector {
    public:
        // Costruttore
        MyVector(int n);

        // Get e set
        double& safe_get(int i);
        double safe_get(int i) const;
        void safe_set(int i, double x);

        // Distruttore
        ~MyVector();

        // Overload operatori
        double& operator[](int i);
        double operator[](int i) const;

    private:
        int n;
        double *p;
};
