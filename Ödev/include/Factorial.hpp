#ifndef FACTORIAL_HPP
#define FACTORIAL_HPP
#include "ArrayList.hpp"

class Factorial
{
	private:
		ArrayList<int> *res = new ArrayList<int>();
		int res_size;
	public:
		Factorial(int);
		int carp(int);
		void hesapla(int);
};

#endif