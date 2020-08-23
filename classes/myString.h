#pragma once

const int MAX = 50;

enum errors { OUT_OF_BOUNDS_ERROR, UNKNOWN_ERROR, HELP };


class myString
{

private:
	char str[50];
	size_t size;


public:
	
	myString();
	myString(char s[], size_t sizes);

	void init();
	void init(char c);
	void init(char s[], size_t sizes);

	size_t length();

	//append
	void append(char l);

	//copy
	void copy(myString src);
	void copy(char src[], size_t sizes);

	//erase
	void erase(size_t pos, size_t len);

	//insert
	void insert(size_t pos, char s);

	//print
	void print();

};

