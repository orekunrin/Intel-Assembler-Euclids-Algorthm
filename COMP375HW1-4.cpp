// COMP375HW1-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This program utilizes Euclid's algorithm to find the greatest common divisor of two numbers.

#include <iostream>

using namespace std;

int main(int argn, char *argv[])
{
	int dog, cat, cow, answer;
	cout << "Enter two numbers>";
	cin >> dog >> cat;
	_asm {	// write the following in assembler
		/*
		while (cat != 0) {
			cow = dog % cat;
			dog = cat;
			cat = cow;
		}
		answer = dog;
		*/
		mov eax, dog
		mov ebx, cat
		mov ecx, cow
		again: cmp ebx, 0	// while(cat != 0) 
			   jz equalszero	
			   mov edx, 0
			   idiv ebx		// dog % cat
			   mov ecx, edx	// cow = dog % cat
			   mov eax, ebx	// dog = cat
			   mov ebx, ecx	// cat = cow
			   jmp again
		equalszero:
			mov answer, eax

	}
	cout << "The gcd is " << answer << endl;
	return 0;
}