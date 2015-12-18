from distutils.core import Extension, setup
from Cython.Build import cythonize

wrapper = Extension(
    'wrapper',
    sources = ['wrapper.pyx', 'classes.cpp'],
    language = 'c++',
)

setup(
    name = 'wrapper',
    ext_modules = cythonize(wrapper),
)
