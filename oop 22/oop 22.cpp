#include <iostream>
#include<vector>
#include<string>
#include <fstream>
using namespace std;
#include"Applier.h"
#include"Company.h"


int main()
{
	Applier* cv1 = new Applier("Ceyhun","Hesenzade", 18, "IT", "Empty1","ADNSU");
	Applier* cv2 = new Applier("Sebine","Camalova", 17, "Designer", "Empty2","AZMIU");

	Company company;
	company.hireUp(cv1);
	company.hireUp(cv2);

	company.writeToFile("company.txt");
	company.readToFile("company.txt");

	company.showAllCV();
}


