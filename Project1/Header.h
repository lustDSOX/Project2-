#pragma once
#include <stdio.h>
#include <string.h>
#include <malloc.h>

int summ(int, int);
int subt(int, int);
float div(float, float);
int mult(int, int);
char* concat(char*, char*);

int summ(int a, int b) {
	return a + b;
}
int subt(int a, int b) {
	return a - b;
}
int mult(int a, int b) {
	return a * b;
}
float div(float a, float b) {
	return a / b;
}