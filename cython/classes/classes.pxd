cdef extern from "classes.h":
    cdef cppclass BaseClass:
        BaseClass(BaseClass *parent)

    cdef cppclass MainClass:
        MainClass(BaseClass *parent)
        void accumulate(int new_number)
        int get_total()
