#ifndef EHCP_H
#define EHCP_H
#include<string>
#include<iostream>
#include<list>
#include<map>
#include<vector>
//#include "EHCP.h"

using namespace std;


class EHCP
{
	public:
		
	EHCP();

	virtual ~EHCP(); // virtual destrucutor

	EHCP(EHCP& myEHCP); // copy constructor
	
	EHCP(EHCP&& myEHCP); // move constructor - allows temporary right side values to be passed by ref.
	
	EHCP& operator=(EHCP& myEHCP); // assignment overload
	
	EHCP& operator=(EHCP&& myEHCP); // move assignment deleted
	
	void AddSectionB(string& entryB);
	
	const string& getSectionB() const;
	
	
	void AddSectionF(string& rEntryF);
	
	void MapBF(string& rEntryB, string& rEntryF);
	
		
	
		
	protected:
		
		
		
	private:




		std::list<string> strEntryB;
		std::list<string>::iterator itrStrEntryB;
		
		std::list<string> strEntryF; // sequence
		std::list<string>::iterator itrStrEntryF;

		std::vector<string> stdVector;
		std::vector<string>::iterator itrVector;
		
		
		std::map<string, string> mapBtoF; // associative 
		std::map<string, string>::iterator itrmapBtoF;
		
		//interator 
		
		//std pair A and B
		
		
	std::list<string> SectionB;
	std::list<string> SectionF;
	
	string SectionI;
};

#endif
