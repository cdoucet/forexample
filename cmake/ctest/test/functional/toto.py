

import numpy as np
from subprocess import call

def test_12_15():

  call(["/home/cdoucet/logiciels/forexample/cmake/ctest/build/src/sum", "12", "15", "/home/cdoucet/logiciels/forexample/cmake/ctest/test/res/12_15.txt"])

  actual   = np.loadtxt("/home/cdoucet/logiciels/forexample/cmake/ctest/test/res/12_15.txt")
  expected = np.loadtxt("/home/cdoucet/logiciels/forexample/cmake/ctest/test/ref/12_15.txt")

  return np.isclose(actual, expected, rtol=0)

if __name__ == "__main__":
  test_12_15()
