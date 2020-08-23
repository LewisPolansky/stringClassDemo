#include "myString.h"
#include <iostream>
using namespace std;



myString::myString() {
	size = 0;
	str[0] = '\n';
}

myString::myString(char s[], size_t sizes) {
	size = sizes;

	for (int i = 0; i < sizes; i++) {
		str[i] = s[i];
	}

	str[size] = '\n';
}

void myString::init() {
	for (int i = 0; i < 50; i++) {
		str[i] = ' ';
	}

	str[49] = '\n';

}
void myString::init(char c) {
	for (int i = 0; i < 50; i++) {
		str[i] = c;

	}

	str[49] = '\n';

}
void myString::init(char s[], size_t sizes) {

	size = sizes;

	for (int i = 0; i < 50; i++) {
		str[i] = s[i];
	}

	str[size] = '\n';
}

size_t myString::length() {
	return size;

}

void myString::append(char l) {
	str[size] = l;
	size++;
}


void myString::copy(myString src) {
	for (int i = 0; i < src.size; i++) {
		str[i] = src.str[i];
	}
	size = src.size;
}

void myString::copy(char src[], size_t sizes) {
	for (int i = 0; i < sizes; i++) {
		str[i] = src[i];
	}
}

void myString::erase(size_t pos, size_t len) {
	int start = pos + len;
	int stopCopy = size - len + 2;
	for (int i = pos; i < stopCopy; i++) {
		str[i] = str[i + len];
	}
	/*
	for (int i = start; i = size; i++) {
		str[i] = '\n';
	}
	*/
	size = size - len;
}

void myString::insert(size_t pos, char s) {

	char cpy[MAX];
	for (int i = 0; i < pos; i++) {
		cpy[i] = str[i];
	}

	str[pos] = s;
	size++;

	for (int i = pos; i < size; i++) {
		str[i++] = cpy[i];
	}
}

void myString::print() {
	for (int i = 0; i < size; i++) {
		cout << str[i];
	}

	cout << endl;
}