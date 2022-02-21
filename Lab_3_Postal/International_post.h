/*
Filename International_post.h
Author Kenneth Johnson
------------------------------------------------
Description: This File stores the class definition
			 for International_post
--------------------------------------------------
*/


#ifndef INTERNATIONAL 
#define INTERNATIONAL
#include <string.h>
#include <iostream>
#include <string>
#include <fstream>

#include "PostalAddress.h"


using namespace std;

class International_post : public PostalAddress {

private:
	char country[15];
	
public:
	International_post() : PostalAddress() { //Declare default constructor

		strcpy_s(country, "");
		//cout << " The Country is: " << country << endl;
	}  


	International_post(const char* cntry)  //Declare regular constructor
	{
		strcpy_s(country, cntry);
		//cout << " The Country is: " << country << endl;
	}  



	char* get_country();
	void set_country(char* cntry);
	float calc_cost();

};


void International_post::set_country(char* cntry) {
	strcpy_s(country, cntry);}

char* International_post::get_country() {
	return &country[0];}

float International_post::calc_cost() {
	float percen;
	percen = (PostalAddress::calc_cost()) * 0.5;
	thePrice = thePrice + percen;
	return thePrice;
}

#endif