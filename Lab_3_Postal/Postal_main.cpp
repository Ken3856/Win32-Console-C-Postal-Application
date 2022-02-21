/*
Filename Postal_main.cpp
Author Kenneth Johnson

------------------------------------------------------------------------------
Description This is the file for the main cpp file
------------------------------------------------------------------------------

*/


#include <iostream>
#include <string.h>
#include <fstream>
#include "PostalAddress.h"
#include "International_post.h"
#include "RegPostAddress.h"

using namespace std;

int main()
{

	char name[40];
	char street[40];
	char town[10];
	char county[10];
	char country[15];
	char tracking_number[10];
	int weight;
	int volume;




	//------------Test 1 Empty class------------------
		//cout << " Test 1 - Empty Class " << endl;
		//cout << " Main has started " << endl;



	//------------Test 2 Default Constructor------------------
	//cout << "\n Test 2 - Default Constructor " << endl;
	//PostalAddress national_post;
	//International_post abroad_post;
	//RegPostAddress track_post;

	//-------------Test 3 Regular Constructor------------------------------
	//cout << "\n Test 3 - Regular Constructor " << endl;
	PostalAddress national_post ("AAAA", "AAAA", "AAAA", "AAAA", 1, 2, 3.33);
	International_post abroad_post ("BBBB");
	RegPostAddress track_post ("12345678");



	//cout << " ======= Win32 Console C++ Postal Application =================\n ============== Author: Kenneth Johnson =============" << endl;
	cout << " Welcome to the Postal program...." << endl;

	cout << " Please enter the Destination Address: " << endl;
	cout << " Name: ";
	//cin.ignore();
	cin.getline(name, 40, '\n');

	cout << " Street: ";
	cin.getline(street, 40, '\n');

	cout << " Town: ";
	cin.getline(town, 10, '\n');

	cout << " County: ";
	cin.getline(county, 10, '\n');

	cout << "\n Please Enter Package Details: ";
	cout << "\n The Weight in grams: ";
	cin >> weight;

	cout << " The Volume in cubic centimeters: ";
	cin >> volume;


	cout << "\n\n For National Post Enter <1> \n For International Post Enter <2> \n For Registered Post Enter <3>  " << endl;
	int x;
	cout << " Enter: ";
	cin.ignore();
	cin >> x;

	switch (x)
	{
	case 1:
		//cin.ignore();
		national_post.set_name(&name[0]);
		national_post.set_street(&street[0]);
		national_post.set_town(&town[0]);
		national_post.set_county(&county[0]);
		national_post.set_theVolume(volume);
		national_post.set_theWeight(weight);

		national_post.calc_cost();
		cout << "\n\n The cost of postage is " << national_post.get_cost() << " Euro for Address: ";

		cout << "\n " << national_post.get_name() << endl;
		cout << " " << national_post.get_street() << endl;
		cout << " " << national_post.get_town() << endl;
		cout << " " << national_post.get_county() << endl;
		
		cout << "\n\n The Packgage details are: ";
		cout << "\n The weight is: " << national_post.get_theWeight() << " grams" << endl;
		cout << " The volume is: " << national_post.get_theVolume() << " cubic centimeters" << endl;
		break;

	case 2:
		cin.ignore();
		abroad_post.set_name(&name[0]);
		abroad_post.set_street(&street[0]);
		abroad_post.set_town(&town[0]);
		
		abroad_post.set_county(&county[0]);
		cout << " Country: ";
		cin.getline(country, 15, '\n');
		cout << endl;
		abroad_post.set_country(&country[0]);
		
		abroad_post.set_theVolume(volume);
		abroad_post.set_theWeight(weight);
		abroad_post.calc_cost();
		
		cout << "\n\n The cost of postage is " << abroad_post.get_cost() << " Euro for: ";
		cout << "\n " << abroad_post.get_name() << endl;
		cout << " " << abroad_post.get_street() << endl;
		cout << " " << abroad_post.get_town() << endl;
		cout << " " << abroad_post.get_county() << endl;
		cout << " " << abroad_post.get_country() << endl;
		
		cout << "\n\n The Packgage details are: ";
		cout << "\n The weight is: " << abroad_post.get_theWeight() << " grams" << endl;
		cout << " The volume is: " << abroad_post.get_theVolume() << " cubic centimeters" << endl;


		break;

	case 3:
		cin.ignore();
		track_post.set_name(&name[0]);
		track_post.set_street(&street[0]);
		track_post.set_town(&town[0]);
		track_post.set_county(&county[0]);
		
		cout << "\n Tracking Number: ";
		cin.getline(tracking_number, 10, '\n');
		cout << endl;
		track_post.set_tracking_number(&tracking_number[0]);
			
		
		track_post.set_theVolume(volume);
		track_post.set_theWeight(weight);
		track_post.calc_cost();
		
		cout << "\n\n The cost of postage is " << track_post.get_cost() << " Euro for: ";
		cout << "\n " << track_post.get_name() << endl;
		cout << " " << track_post.get_street() << endl;
		cout << " " << track_post.get_town() << endl;
		cout << " " << track_post.get_county() << endl;
		cout << " " << track_post.get_tracking_number() << endl;

		cout << "\n\n The Packgage details are: " << endl;
		cout << "\n The weight is: " << track_post.get_theWeight() << " grams" << endl;
		cout << " The volume is: " << track_post.get_theVolume() << " cubic centimeters" << endl;


		break;
	}

	return 0;
}