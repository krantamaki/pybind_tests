#include <pybind11/pybind11.h>
#include <iostream>

namespace py = pybind11;

int power(int base, int exp) {
	int ret = 1;
	for (int i = 0; i < exp; i++) {
		ret *= base;
	}
	
	return ret;
}

PYBIND11_MODULE(tests, handle) {
	handle.doc() = "Module for testing pybind11";
	handle.def("power", &power, "Function that calculates the wanted power.");
}

