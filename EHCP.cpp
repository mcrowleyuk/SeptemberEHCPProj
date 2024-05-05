#include "EHCP.h"
#include <string>
//#include <algorithms>
#pragma once
using namespace std;

//class EHCP;

EHCP::EHCP()
{
	cout << "In the base constructor" << endl;
	itrStrEntryB = strEntryB.begin();
}


EHCP& EHCP::operator=(EHCP&& myEHCP)
{
	// move temporary right into left
	cout << "In the move assignment operator";

	//steal the resources from temporary myEHCP and reallocate to this
	
	std::move(myEHCP.strEntryB.begin(), myEHCP.strEntryB.end(), strEntryB.begin());

	return *this;
	
} 




EHCP::~EHCP()
{

	//destroy contents of list and each element.
	
	
	try
	{
	
		cout << endl << "inside the EHCP base destructor" << endl;
	
		itrStrEntryB = strEntryB.begin(); // set begin marker
		
		while (itrStrEntryB!=strEntryB.end())  // while not at end 
		{
			strEntryB.erase(itrStrEntryB); // remove the string entry
		};
		
	
		
		strEntryB.clear(); // does the same!#
	}
	catch(...)
	{
		// if something goes wrong in the destrutor, worst case exit(0)
		
		exit(0);		
	
	}	
		
}
const string& EHCP::getSectionB() const
{
	return *strEntryB.begin();
}
void EHCP::AddSectionB(string& entryB)
{
	strEntryB.push_front(entryB);
	
	// example with a vector
	
	itrVector = stdVector.begin();
	
	stdVector.insert(itrVector,entryB);
	
	stdVector[0]=entryB; // test
}
void EHCP::AddSectionF(std::string& rEntryF)
{
	strEntryF.push_front(rEntryF);
}

void EHCP::MapBF(string& rEntryB, string& rEntryF)
{
	
//	mapBtoF.push_back(rEntryB, rEntryF);


// READ ABOUT MAP OPERATONS

};

EHCP::EHCP(EHCP& rEHCP)
{
		this->strEntryB = rEHCP.strEntryB;
		
		this->strEntryF= rEHCP.strEntryB;
		
		//this->mapBtoF = rEHCP.strEntryB;
	
}


EHCP& EHCP::operator=(EHCP& myEHCP)
{
	if (this != &myEHCP)
	{
		strEntryB.clear();
		strEntryF.clear();
		mapBtoF.clear();
		
		this->strEntryB = myEHCP.strEntryB;
		
		this->strEntryF= myEHCP.strEntryB;


		cout << "In the normal assignment operator";
		
		std::move(myEHCP.strEntryB.begin(), myEHCP.strEntryB.end(), strEntryB.begin());
		
		
	}
	
	return *this;
	
}
