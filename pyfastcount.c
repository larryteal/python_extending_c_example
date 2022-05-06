#include <Python.h>
#include "fastcount.h"

static PyObject *py_primecounter(PyObject *self, PyObject *args) {
  int *n_frm, *n_til = NULL;
  if (!PyArg_ParseTuple(args, "ii", &n_frm, &n_til)) {
    return NULL;
  }
  int found_primes = c_prime_counter(n_frm, n_til);
  
  return PyLong_FromLong(found_primes);
}


static PyMethodDef CountingMethods[] = {
  {"primecounter", py_primecounter, METH_VARARGS, "Function for counting primes in a range in c"}, 
  {NULL, NULL, 0, NULL}
};

static struct PyModuleDef fastcountmodule = {
  PyModuleDef_HEAD_INIT,
  "Fastcount",                              
  "C library for counting fast",  
  -1,                                   
  CountingMethods                          
};


PyMODINIT_FUNC
PyInit_Fastcount(void) {
  return PyModule_Create(&fastcountmodule);
};