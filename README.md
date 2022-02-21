# Win32-Console-C-Postal-Application
A class is written to represent a postal address.
A registered postal address class derived from the class above that has an extra data
member for a tracking ID. The relevant default and overloaded constructors, accessor and mutator
methods and iostream overloading were developed.    

A main program was included that creates objects of the types above and exercises all of
the methods. The program also stored to an ascii file using an fstream andoverloaded iostream 
the data associated with any object created in the program.

For the class hierarchy above volume and weight data members and
associated accessor and mutator methods were included. The methods that allow a user get the
cost of postage of an item were included.

## Cost of delivery is based on the following:
1) Normal cost of delivery is 2. euros for items up to 150 grams;
2) If the weight is greater than 150 grams the cost is an extra  euro.
3) If the volume is greater than 500cm3 the cost is increased by extra 2 euros.
4) Registered Items for delivery are an extra 50% of the total cost .

Calls to the methods were included in the main program. 
