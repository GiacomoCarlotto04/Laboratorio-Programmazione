class MyVector {
    public:
        // Costruttore
        MyVector(int s);
        MyVector();

        // Distruttore
        ~MyVector();

        // Overload operatori
        double& operator[](int i);
        double& operator[](int i) const;
        
        // Funzioni membro
        double& at(int i);
        double& at(int i) const;
        void push_back(const double& x);
        double& pop_back();
   		void reserve(int s);
        

    private:
        int sz;
        int sz_buffer {10};
        double *p;
};
