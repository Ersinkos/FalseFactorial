/**
* @file  Test.cpp
* @description faktöriyel hesaplama (basamak kaydırmasız)
* @course 1A
* @assignment 1
* @date 07.08.2022
* @author Ersin Köseoğlu
*/

#include "ArrayList.hpp"
#include "Factorial.hpp"
int main()
{
	int n;
	cout<<"faktoriyelini almak istediginiz sayi : ";
	cin>>n;
	Factorial* fact=new Factorial(n);
	fact->hesapla(n);
	
	
	return 0;
}