#pragma once


#include "pch.h"
//class TestHarness
//{
//public:
//	TestHarness();
//	~TestHarness();
//};

enum log_level { Low, Medium, High };
 
class TestHarness {
public:
	TestHarness();
	template <class Test>
	bool Run(Test& test) {
		try {
			test();
			std::cout << "Test Passed\n";
			return true;
		}
		catch (...) {
			switch (LogLevel) {
			case log_level::High:
				//TODO:  Add real time function here
				std::cout << "2019-10-20 1:00:00:000 >";
			case log_level::Medium:
				std::cout << "Unkown exception caught for test:\n";
				break;
			}
			std::cout << "Test Failed\n";
			return false;

		}

	}
	void SetLogLevel(log_level);

private:
	log_level LogLevel;

};
