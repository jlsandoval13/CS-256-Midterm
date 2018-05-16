#pragma once
#ifndef CHILD_H
#define CHILD_H
#include "Human.h"
#include "Parent.h"
#include <iostream>
#include "stdafx.h"
using namespace std;

class Child : public Human
{
private:
	Parent Mom;
	Parent Dad;

	Child()	{
		Parent Mom;
		Parent Dad;	}
public:

};

#endif // !CHILD_H
