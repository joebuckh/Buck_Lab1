#include "pch.h"
#include <iostream>
#include <exception>
#include <string>
#include "TestHarness.h"


TestHarness::TestHarness() {
	LogLevel = High;
}

void TestHarness::SetLogLevel(log_level ll) {
	LogLevel = ll;
}


