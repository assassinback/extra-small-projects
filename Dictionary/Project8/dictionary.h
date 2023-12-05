#pragma once
#include<iostream>
#include<string>
#include <msclr\marshal_cppstd.h>
#include<fstream>
#include<string>
using namespace System::Windows::Forms;
using namespace std;
class dictionary
{
public:
	dictionary();
	dictionary(string x);
	string word;
	string meaning;
	dictionary* left;
	dictionary* right;
	dictionary* root = NULL;
	void insert(System::String^ x, System::String^ y);
	void ins(dictionary* cur);
	void search(System::String^ x,Label^ y);
	void makedeletion(dictionary *&cur);
	void deletenode(dictionary *&cur, string n);


};
