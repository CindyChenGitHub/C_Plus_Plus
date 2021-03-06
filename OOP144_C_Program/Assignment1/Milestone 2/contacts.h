/********************************************************************** 
// ICP144 Assignment 1 
// File cashRegister.c
// Version 1.0 
// Date 2017/10/06 
// Author Cindy Chen 
//-------------------------------------------
//Assignment: 1
//Milestone:  2
/**********************************************************************/

// Structure type Name declaration
struct Name {
    char firstName[31];
    char middleInitial[7];
    char lastName[36];
};

// Structure type Address declaration
// Place your code here...
struct Address {
    int streetNumber;
    char street[41];
    int apartmentNumber;
    char postalCode[8];
    char city[41];
};

// Structure type Numbers declaration
// Place your code here...
struct Numbers {
    char cell[21];
    char home[21];
    char business[21];
};
