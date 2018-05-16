#pragma once
#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include <string>
#include "stdafx.h"
using namespace std;

class Human {
private:
	string name;
	int age;
	char sex;
	Human(string n, int a, char s);
protected:
	Human(string n, int a, char s)
	{	name = n;
		age = a;
		sex = s;	}
public:
	void setName()
	{	string name;	}

	void setAge()
	{	int age;	}

	void setSex()
	{	char sex;	}

	string getName()
	{	return name;	}

	int getAge()
	{	return age;	}

	char getSex()
	{	return sex;	}
};

Human::Human(string n, int a, char s): name(n), age(a), sex(s)
{}
#endif
