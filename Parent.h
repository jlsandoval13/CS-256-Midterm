#pragma once
#ifndef PARENT_H
#define PARENT_H
#include "Human.h"
#include <iostream>
#include <vector>
#include "stdafx.h"
using namespace std;

class Parent : public Human
{
private:
	template <Parent : public Human>
	vector<Child> children; 
public:
	string children;
	string c;
	void setChildren()
	{	children = c;	}
};


#endif
