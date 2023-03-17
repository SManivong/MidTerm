#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>
using namespace std;
string genUniqueID(string species, int numOfSpecies) {
	string uniqueID;
	if (species == "hyena") {
		uniqueID = "Hy0" + to_string(numOfSpecies);
	}
	else if (species == "lion") {
		uniqueID = "Li0" + to_string(numOfSpecies);
	}
	else if (species == "tiger") {
		uniqueID = "Ti0" + to_string(numOfSpecies);
	}
	else if (species == "bear") {
		uniqueID = "Be0" + to_string(numOfSpecies);
	}
	else {
		uniqueID = "error";
	}
	return uniqueID;
}
// calcBirthdate() accepts an integer for years and a string for season
// returns birthdate as Month Day, Year
string calcBirthdate(int years, string season) {
	int birthYear = 0;
	string birthDate;
	birthYear = 2023 - years;
	string monthDay;
	if (season == "spri") {
		monthDay = "Mar 21";
	}
	else if (season == "summ") {
		monthDay = "Jun 21";
	}
	else if (season == "fall") {
		monthDay = "Sep 21";
	}
	else if (season == "wint") {
		monthDay = "Dec 21";
	}
	else {
		monthDay = "Jan 1";
	}
	birthDate = monthDay + ", " + to_string(birthYear);
	return birthDate;
}
int main()
{
	std::cout << "Welcome to Dennis's Zoo Program!\n";
	// Initialize variables used to find data elements in text string.
	int lineNum = 0;
	int position = 0;
	int startPos = 0;
	int endPos = 0;
	int numYears = 0;
	string birthSeason = "";
	string birthDay = "";
	string sex = "";
	string uniqueID = "";
	string species = "";
	string color = "";
	string outputLine = "";
	// Create global variables for the number of each species.
	int numOfHyenas = 0;
	int numOfLions = 0;
	int numOfTigers = 0;
	int numOfBears = 0;
	// Open arrivingAnimals.txt for input to our program.
	string line;
	ifstream myAnimalFile("arrivingAnimals.txt");
	if (myAnimalFile.is_open()) {
		while (getline(myAnimalFile, line)) {
			std::cout << "\n this is a line from arrivingAnimals.txt: ";
			std::cout << line;
		}
		std::cout << "\n\n";
	}
	else {
		std::cout << "\n file is not open \n";
	}
	// If you open a file, you must close it.
	myAnimalFile.close();


		string hyenaNames[20];
	string lionNames[20];
	string tigerNames[20];
	string bearNames[20];
	// These strings are used for procesing a string of names into an array.
	string strHyenaNames = "";
	string strLionNames = "";
	string strTigerNames = "";
	string strBearNames = "";
	string name = "";
	string weight = "";
	string origin = "";
	string arrivalDate = "";

	// Open animalNames.txt and create four arrays of animal names.
	ifstream myAnimalNames("animalNames.txt");
	
		if (myAnimalNames.is_open()) {
			lineNum = 0;
			while (getline(myAnimalNames, line)) {
				std::cout << "\n this is a line from animalNames.txt: ";
				std::cout << line;
				if (lineNum == 2) {
					strHyenaNames = line;
				}
				else if (lineNum == 6) {
					strLionNames = line;
				}
				else if (lineNum == 10) {
					strBearNames = line;
				}
				else if (lineNum == 14) {
					strTigerNames = line;
				}
				lineNum++;
			}
			cout << "\n\n";
			cout << "hyena names: " << strHyenaNames << "\n";
			cout << "lion names: " << strLionNames << "\n";
			cout << "bear names: " << strBearNames << "\n";
			cout << "tiger names: " << strTigerNames << "\n";
		}
		else {
			cout << "\n file is not open \n";
		}
	// If you open a file, you must close it.
	myAnimalNames.close();
	// get the species names, delimited by comma, into the proper array
	string animalName = "";
	int commaPos = 0;

		int indexOfAnimalName = 0;
	// Hyena names...
	indexOfAnimalName = 0;
	commaPos = 0;
	while (commaPos != string::npos) {
		commaPos = strHyenaNames.find(",");
		animalName = strHyenaNames.substr(0, commaPos);
		hyenaNames[indexOfAnimalName] = animalName;
		cout << "\n animalName = " << animalName;
		// trim the name found from strHyenanames
		strHyenaNames = strHyenaNames.substr(commaPos + 2);
		// increment the arrayIndex
		indexOfAnimalName++;
	}
	//Output the array of hyenaNames to test your program.
	for (int i = 0; i < 20; i++) {
		cout << "\n hyenaNames[" << i << "] is: " << hyenaNames[i];
	}
	// Lion names...
	indexOfAnimalName = 0;
	commaPos = 0;
	while (commaPos != string::npos) {
		commaPos = strLionNames.find(",");
		animalName = strLionNames.substr(0, commaPos);
		lionNames[indexOfAnimalName] = animalName;
		cout << "\n animalName = " << animalName;
		// trim the name found from strHyenanames
		strLionNames = strLionNames.substr(commaPos + 2);
		// increment the arrayIndex
		indexOfAnimalName++;
	}
	//Output the array of lionNames to test your program.
	for (int i = 0; i < 20; i++) {
		cout << "\n lionNames[" << i << "] is: " << lionNames[i];
	}
	// Bear names...
	indexOfAnimalName = 0;
	commaPos = 0;
	while (commaPos != string::npos) {
		commaPos = strBearNames.find(",");
		animalName = strBearNames.substr(0, commaPos);
		bearNames[indexOfAnimalName] = animalName;
		cout << "\n animalName = " << animalName;
		// trim the name found from strBearNames
		strBearNames = strBearNames.substr(commaPos + 2);
		// increment the arrayIndex
		indexOfAnimalName++;
	}
	//Output the array of bearNames to test your program.
	for (int i = 0; i < 20; i++) {
		cout << "\n bearNames[" << i << "] is: " << bearNames[i];
	}
	// Tiger names...
	indexOfAnimalName = 0;
	commaPos = 0;
	while (commaPos != string::npos) {
		commaPos = strTigerNames.find(",");
		animalName = strTigerNames.substr(0, commaPos);
		tigerNames[indexOfAnimalName] = animalName;
		cout << "\n animalName = " << animalName;
		// trim the name found from strTigerNames
		strTigerNames = strTigerNames.substr(commaPos + 2);
		// increment the arrayIndex
		indexOfAnimalName++;
	}
	//Output the array of tigerNames to test your program.
	for (int i = 0; i < 20; i++) {
		cout << "\n tigerNames[" << i << "] is: " << tigerNames[i];
	}
		// Create a 1-D array
		string arrAnimals[16];
	myAnimalFile.open("arrivingAnimals.txt");
	lineNum = 0;
	if (myAnimalFile.is_open()) {
		while (getline(myAnimalFile, line)) {
			arrAnimals[lineNum] = line;
			lineNum++;
		}
		cout << "\n\n";
	}
	else {
		cout << "\n file is not open \n";
	}
	// If you open a file, you must close it.
	myAnimalFile.close();
	// Look at the array
	for (int lineNum = 0; lineNum < 16; lineNum++) {
		cout << arrAnimals[lineNum] << "\n";
	}
		// Process each line of the array
		for (int lineNum = 0; lineNum < 16; lineNum++) {
			// Get numYears to calculate birthdate.
			// 2 chars starting at index 0, stoi(): string to int
			numYears = stoi(arrAnimals[lineNum].substr(0, 2));
			cout << "\n numYears = " << numYears;
			// Find birthSeason
			// What will find() return if "born in" is not found?
			// how will you handle this?
			position = arrAnimals[lineNum].find("born in");
			cout << "\n position = " << position;
			birthSeason = arrAnimals[lineNum].substr(position + 8, 4);
			cout << "\n birthSeason = " << birthSeason;
			// Call the calcBirthdate() function
			cout << "\n Birth Date is... " << calcBirthdate(numYears, birthSeason);
			birthDay = calcBirthdate(numYears, birthSeason);
			cout << endl << endl;

			// Find sex
			// How many char spaces?
			position = arrAnimals[lineNum].find(" ");
			position = arrAnimals[lineNum].find(" ", position + 1);
			position = arrAnimals[lineNum].find(" ", position + 1);
			startPos = position + 1;
			// find the end position
			endPos = arrAnimals[lineNum].find(" ", startPos);
			sex = arrAnimals[lineNum].substr(startPos, endPos - startPos);
			cout << "\n sex is..." << sex;
			// Find species
				startPos = endPos + 1;
			endPos = arrAnimals[lineNum].find(",", startPos);
			species = arrAnimals[lineNum].substr(startPos, endPos - startPos);
			cout << "\n species is..." << species;
			// Now that we have a species, update the global variable for the species count(we will get rid
				// of this when we code this up with classes and lists) and get a uniqueID.
				if (species == "hyena") {
					numOfHyenas++;
					uniqueID = genUniqueID("hyena", numOfHyenas);
				}
				else if (species == "lion") {
					numOfLions++;
					uniqueID = genUniqueID("lion", numOfLions);
				}
				else if (species == "tiger") {
					numOfTigers++;
					uniqueID = genUniqueID("tiger", numOfTigers);
				}
				else if (species == "bear") {
					numOfBears++;
					uniqueID = genUniqueID("bear", numOfBears);
				}
				else {
					// error
				}
			cout << "\n uniqueID is..." << uniqueID;
			// At this point we have sex, species, uniqueID, and birthDate
			// now we only need: name, color, weight, origin, arrival date
			// for name, we need species and numOfSpecies
			if (species == "hyena") {
				name = hyenaNames[numOfHyenas - 1];
			}
			else if (species == "lion") {
				name = lionNames[numOfLions - 1];
			}
			else if (species == "tiger") {
				name = tigerNames[numOfTigers - 1];
			}
			else if (species == "bear") {
				name = bearNames[numOfBears - 1];
			}
			else {
				// error
			}
			cout << "\n" << "name is: " << name;
			// for color, we need to split our string on commas and find where color is.
			// Find color
			// How many char spaces to the comma?
			position = arrAnimals[lineNum].find(",");
			position = arrAnimals[lineNum].find(",", position + 1);
			startPos = position + 1;
			// find the end position
			endPos = arrAnimals[lineNum].find(",", startPos);
			color = arrAnimals[lineNum].substr(startPos, endPos - startPos);
			cout << "\n color is..." << color;
			// for weight, we need to split our string on commas and find where weight is.
				// Find weight
				// How many char spaces to the comma?
				position = arrAnimals[lineNum].find(",");
			position = arrAnimals[lineNum].find(",", position + 1);
			position = arrAnimals[lineNum].find(",", position + 1);
			startPos = position + 1;
			// find the end position
			endPos = arrAnimals[lineNum].find(",", startPos);
			weight = arrAnimals[lineNum].substr(startPos, endPos - startPos);
			cout << "\n weight is..." << weight;
			// for origin, we need to split our string on commas and find where origin is.
				// Find origin
				// How many char spaces to the comma?
				position = arrAnimals[lineNum].find(",");
			position = arrAnimals[lineNum].find(",", position + 1);
			position = arrAnimals[lineNum].find(",", position + 1);
			position = arrAnimals[lineNum].find(",", position + 1);
			startPos = position + 1;
			// find the end position
			origin = arrAnimals[lineNum].substr(startPos);
			cout << "\n origin is..." << origin;
			cout << "\n\n";
			outputLine = uniqueID + "; " + name + "; " + to_string(numYears) + " years old; "
				+ "birth date " + birthDay + "; " +
				color + "; " +
				sex + "; " +
				weight + "; " +
				origin + "; " +
				"arrived ";
			cout << "\n outputLine = " << outputLine << "\n\n";
		}
}