cimport classes

cdef class BaseClass:
    cdef classes.BaseClass *wrapped

    def __cinit__(self, BaseClass parent=None):
        print "Cython: running BaseClass.__cinit__ with parent =", parent

        # Create a C++ pointer to the base class, and initialise it to null.
        cdef classes.BaseClass *base = NULL

        # If we have a parent, retrieve the pointer to the wrapped base class.
        if parent is not None:
            base = parent.wrapped

        # Try to create an instance of the wrapped class.
        self.wrapped = new classes.BaseClass(base)

        # If we couldn't create one, we're out of memory.
        if self.wrapped is NULL:
            raise MemoryError()

    def __dealloc__(self):
        print "Cython: running BaseClass.__dealloc__ on", self
        if self.wrapped is not NULL:
            del self.wrapped
