#include "test.h"
bool Test::testIsEmpty()
{
	LinkedListOfInts list;
	return list.isEmpty();
}

bool Test::testSize()
{
	LinkedListOfInts list;
	return list.size() == 0;
}

bool Test::testSearch()
{
	LinkedListOfInts list;
	list.addFront(1);
	return list.search(1);
}

bool Test::testAddBack()
{
	LinkedListOfInts list;
	list.addBack(2);
	return list.size() == 1;
}

bool Test::testAddFront()
{
	LinkedListOfInts list;
	list.addFront(3);
	return list.size() == 1;
}

bool Test::testRemoveBack()
{
	LinkedListOfInts list;
	list.addFront(4);
	list.removeBack();
	return list.size() == 0; // Didn't return 0 so size is not being incremented.
}

bool Test::testRemoveFront()
{
	LinkedListOfInts list;
	list.addFront(5);
	list.removeFront();
	return list.size() == 0; // Didn't return 0 so size might not be incremented.
}

bool Test::testIsReallyEmpty()
{
	LinkedListOfInts list;
	list.addFront(6);
	return list.isEmpty(); //Returned true so is always returning true.
}

bool Test::testRemoveBackEmptyList()
{
	LinkedListOfInts list;
	return list.removeBack();
}

bool Test::testRemoveFrontEmptyList()
{
	LinkedListOfInts list;
	return list.removeFront();
}

bool Test::testSearchComp()
{
	LinkedListOfInts list;
	list.addFront(7);
	list.addFront(8);
	list.addFront(9);
	list.addFront(10);
	return list.search(9);
}

void Test::run()
{
	std::cout << "KEY:\n-------\n1 = True\n0 = False\n"
		 << "Test 1: List initializes as empty: " << testIsEmpty() << " (Expect 1)\n"
		<< "Test 2: Size of List is initially zero: " <<  testSize() << " (Expect 1)\n"
		<< "Test 3: List finds the value 1 in a list: " << testSearch() << " (Expect 1)\n"
		<< "Test 4: Size of List is equal to 1 after adding back a value: " << testAddBack() << " (Expect 1)\n"
		<< "Test 5: Size of the List is equal to 1 after adding front a value: " << testAddFront() << " (Expect 1)\n"
		<< "Test 6: Size of the list is equal to 0 after adding and removing a value from the back: " << testRemoveBack() << " (Expect 1)\n"
		<< "Test 7: Size of the list is equal to 0 after adding and removing a value from the front: " << testRemoveFront() << " (Expect 1)\n"
		<< "Test 8: List isn't actually empty when a value is inside of it: " << testIsReallyEmpty() << " (Expect 0)\n"
		<< "Test 9: RemoveBack catches empty list: " << testRemoveBackEmptyList() << " (Expect 0)\n"
		<< "Test 10: RemoveFront catches empty list: " << testRemoveFrontEmptyList() << " (Expect 0)\n"
		<< "Test 11: Search finds a more complicated value: " << testSearchComp() << " (Expect 1)\n";

}
