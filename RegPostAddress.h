/*
Filename RegPostalAddress.h
Author Kenneth Johnson
------------------------------------------------
Description: This File stores the class definition
			 for RegPostAddress
--------------------------------------------------
*/

#ifndef REGPOSTADDRESS //same as namefile BUT IN CAPITALS
#define REGPOSTADDRESS
#include <string.h>
#include <iostream>
#include <string>
#include "PostalAddress.h"
#include "International_post.h"
using namespace std;

class RegPostAddress : public International_post {

private:
	char tracking_number[10];

public:
	RegPostAddress() : International_post() //Declare default constructor
	{
		strcpy_s(tracking_number, "");
		//cout << " The tracking number is: " << tracking_number << endl;
	} 




	RegPostAddress(const char* t_num) //Declare regular constructor
	{
		strcpy_s(tracking_number, t_num);
		//cout << " The tracking number is: " << tracking_number << endl;
	} 



	char* get_tracking_number();
	void set_tracking_number(char* t_num);
	float calc_cost();

};
	
void RegPostAddress::set_tracking_number(char* t_num) {
	strcpy_s(tracking_number, t_num); }

char* RegPostAddress::get_tracking_number() {
	return &tracking_number[0]; }


float RegPostAddress::calc_cost() {
	float percen;
	percen = (PostalAddress::calc_cost()) * 0.25;
	thePrice = thePrice + percen;
	return thePrice;
}





#endif 

