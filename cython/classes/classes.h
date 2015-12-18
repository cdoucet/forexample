class BaseClass{
    public:
            BaseClass(BaseClass *parent);
            ~BaseClass();
};

class MainClass: public BaseClass{
    public:
            MainClass(BaseClass *parent);
            ~MainClass();
            void accumulate(int new_number);
            int get_total();
    private:
            int total;
};
