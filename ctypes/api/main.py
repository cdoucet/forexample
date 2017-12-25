import ctypes

mylib = ctypes.CDLL("/home/cdoucet/Depots/forexample/ctypes/build/src/libmylib.so")

# somme d'entiers
print(mylib.somme_entiers(4, 5))

# somme de flottants
mylib.somme_flottants.argtypes = [ctypes.c_float, ctypes.c_float]
mylib.somme_flottants.restype = ctypes.c_float
print(mylib.somme_flottants(4, 5))