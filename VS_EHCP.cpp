#include "EHCP.h"
#include "Post16EHCP.h"

#include <iostream>

#include <string>

class Post16EHCP;

class EHCP;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {


	std::cout << "here we go....";


	EHCP* MyPost16EHCP = new EHCP();

	string myStr("Has loads of post 16 needs");

	string strOutput;

	MyPost16EHCP->AddSectionB(myStr);

	strOutput = MyPost16EHCP->getSectionB();

	cout << "\n" << strOutput;

	//delete Post16EHCP;

	EHCP* AnotherEHCP = new EHCP();

	cout << "About to call Assignment Operator with a temporary" << endl;
	AnotherEHCP = MyPost16EHCP;


	strOutput = MyPost16EHCP->getSectionB();

	cout << "\n" << strOutput;

	delete AnotherEHCP;

	delete MyPost16EHCP;
	return 0;
};
