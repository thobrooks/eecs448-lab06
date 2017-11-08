/**
*	@author 
*	@date 
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "test.h"
#include "LinkedListOfInts.h"

int main(int argc, char** argv)
{
	//Example of declaring a LinkedListOfInts
	LinkedListOfInts testableList;

	//You won't do all the tests in main; that's what your Test class will be for
	//Example:
	//TestSuite myTester;
	//myTester.runTests();
        Test tester;
        tester.run();
	std::cout << "Running...\nAnd we're done.\nGoodbye.\n";
	
	return (0);

}

