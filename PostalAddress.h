/*
Filename PostalAddress.h
Author: Kenneth Johnson
------------------------------------------------
Description: This File stores the class definition
			 for a PostalAddress
--------------------------------------------------
*/

#ifndef POSTAL_ADDRESS //same as namefile BUT IN CAPITALS
#define POSTAL_ADDRESS
#include <string.h>
#include <iostream>
#include <string>
#include <fstream>


using namespace std;

class PostalAddress // Same name as FILE NOT in capitals
{
public:
	PostalAddress() //Declare default constructor
	{
		strcpy_s(name, "");
		strcpy_s(street, "");
		strcpy_s(town, "");
		strcpy_s(county, "");
		theWeight = 0;
		theVolume = 0;
		thePrice = 0.0;

	}  


	PostalAddress(const char* aN, const char* aS, const char* aT, const char* aC, int w, int v, float p)//Declare regular constructor
	{
		strcpy_s(name, aN);
		strcpy_s(street, aS);
		strcpy_s(town, aT);
		strcpy_s(county, aC);
		theWeight = w;
		theVolume = v;
		thePrice = p;

	}  

	
	char* get_name();
	char* get_street();
	char* get_town();
	char* get_county();
	int	  get_theWeight();
	int	  get_theVolume();


	void set_name(char* aN);
	void set_street(char* aS);
	void set_town(char* aT);
	void set_county(char* aC);
	void set_theWeight(int w);
	void set_theVolume(int v);


	float calc_cost();
	float get_cost();


protected:
	char name[40];
	char street[40];
	char town[10];
	char county[10];
	int theWeight;
	int theVolume;
	float thePrice;


};


void PostalAddress::set_name(char* aN) {
	strcpy_s(name, aN);}

char* PostalAddress::get_name() {
	return &name[0];
}

void PostalAddress::set_street(char* aS) {
	strcpy_s(street, aS);}

char* PostalAddress::get_street() {
	return &street[0];
}

void PostalAddress::set_town(char* aT) {
	strcpy_s(town, aT);}

char* PostalAddress::get_town() {
	return &town[0];
}

void PostalAddress::set_county(char* aC) {
	strcpy_s(county, aC);}

char* PostalAddress::get_county() {
	return &county[0];
}

void PostalAddress::set_theWeight(int w) {
	theWeight = w;}

int PostalAddress::get_theWeight() {
	return theWeight;}


void PostalAddress::set_theVolume(int v) {
	theVolume = v;
}

int PostalAddress::get_theVolume() {
	return theVolume;}




float PostalAddress::calc_cost() {
	thePrice = 2.50;
	if (theWeight < 100) //&& theVolume <= 100)
	{
		thePrice = 2.50;
		//cout << " The postage price is: " << thePrice << " Euros" << endl;
	}

	if (theWeight >= 100 && theVolume > 100)
	{
		thePrice = 2.50 + 2;
		//cout << " The postage price is: " << thePrice << " Euros" << endl;
	}

	if (theWeight < 100 && theVolume > 400)
	{
		thePrice = 2.50 + 4;
		//cout << " The postage price is: " << thePrice << " Euros" << endl;
	}

	if (theWeight > 100 && theVolume > 400)
	{
		thePrice = 2.50 + 2 + 4;
		//cout << " The postage price is: " << thePrice << " Euros" << endl;
	}

	if (theWeight < 100 && theVolume <= 400)
	{
		thePrice = 2.50 + 2;
		//cout << " The postage price is: " << thePrice << " Euros" << endl;
	}

	return thePrice;
}

float PostalAddress::get_cost() {
	return thePrice;
}

#endif




