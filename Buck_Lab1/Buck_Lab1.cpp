// Buck_Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <exception>
#include <string>
#include "TestHarness.h"

//Simple class to create tests for.
class One
{
public:
	One() {}
	int value() { return one; }
	int DivideBy(int i) {
		if (i == 0) throw 20;
		return one / i;
	}
private:
	static const int one = 1;
};



class TestCase1
{
public:
	TestCase1() {}
	virtual void operator() ()
	{
		One one;
		std::cout << "TestCase 1: Value of One: " << one.value() << "\n";
	}
};



class TestCase2
{
public:
	TestCase2() {}
	void operator() ()
	{
		One one;
		std::cout << "TestCase 2: DivideBy 1: " << one.DivideBy(1) << "\n";
	}
};

class TestCase3
{
public:
	TestCase3() {}
	void operator() ()
	{
		One one;
		std::cout << "TestCase 3: DivideBy 0: " << one.DivideBy(0) << "\n";
	}
};

int main()
{
	std::cout << "CSE687 - Lab 1 - Test Harness\n";
	std::cout << "Joe Buckheit\n";
	std::cout << "October 15, 2019\n";


	TestCase1 test1;
	TestCase2 test2;
	TestCase3 test3;


	TestHarness th;
	std::cout << "\n-- Execute series of Tests for Class using test harness class : Log Level = Low --\n";
	th.SetLogLevel(Low);
	th.Run(test1);
	th.Run(test2);
	th.Run(test3);

	std::cout << "\n-- Execute series of Tests for Class using test harness class : Log Level = Medium --\n";
	th.SetLogLevel(Medium);
	th.Run(test1);
	th.Run(test2);
	th.Run(test3);

	std::cout << "\n-- Execute series of Tests for Class using test harness class : Log Level = High --\n";
	th.SetLogLevel(High);
	th.Run(test1);
	th.Run(test2);
	th.Run(test3);

	std::cout << "\n-- Execute single test for Class using test harness class : Log Level = Medium --\n";
	th.SetLogLevel(Medium);
	th.Run(test1);

	return 0;
}


