// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"

//test save comment

int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;

	cout << "The cow's size " << cows.size() << endl; //gets size for the cows
	cout << "The cow's sum " << cows.sum() << endl; //gets size for the cows
	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list  :  " << cows << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl << endl;

	cout << "The cow's size " << cows.size() << endl; //gets size for the cows
	cout << "The cow's sum " << cows.sum() << endl; //gets size for the cows

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;

	cout << "The horse's size " << horses.size() << endl; //size horses
	cout << "The horse's sum " << cows.sum() << endl; //gets size for the cows

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;

	cout << "The horse's size " << horses.size() << endl; //size horses
	cout << "The horse's sum " << cows.sum() << endl; //gets size for the cows

	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	cout << "The pig's size " << pigs.size() << endl;//size pigs
	cout << "The pig's sum " << cows.sum() << endl; //gets size for the cows

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	cout << "End of code" << endl;

	return 0;
}

