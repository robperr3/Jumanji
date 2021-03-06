// Jumanji.cpp : Defines the entry point for the console application.
//A personalized adventure game

#include "stdafx.h"
#include <iostream> //using input & output stream
#include <string> //having the ability to use strings

using std::cout; //declaring the output library
using std::cin; //declaring the input libtrary
using std::endl;//declaring the end line library
using std::string;//declaring the string library


int main()
{
	const int GOLD_PIECES = 900; //having Gold pieces as my variable for amount of gold
	int adventurers, killed, survivors;//using variables to represent numbers
	string leader;//using the word "leader" as a variable for a word

	//get info
	cout << "Welcom to the Jungle\n\n";
	cout << "Pleae enter the following for your personalized adventure\n";

	//ask user for number & put a variable to it
	cout << "Enter a number:";
	cin >> adventurers;
	//ask user for another number for a variable
	cout << "Enter a number, smaller than the first:";
	cin >> killed;
	//using - operator to do math with variables
	survivors = adventurers - killed;
	//using the users input as a string variable
	cout << "Enter your last name:";
	cin >> leader;
	//tell the story using your new variables
	cout << "\nA lost group of " << adventurers << " set out on a quest";
	cout << "--in search of the Golden Dice that would bring them home.";
	cout << "The group was led by that international explorer, " << leader << ".\n";
	cout << "\nAlong the way, a herd of rhinos chased them through the jungle.";
	cout << "Also a band of hunters were hot on their trail. So the fearless leader, " << leader; 
	cout << ", rallied the team and they defeated all challengers.";
	cout << "Of the adventurers," << killed << " were vanguished,";
	cout << "leaving just " << survivors << " in the group.\n";
	
	cout << "\nThe party was about to give up all hope.";
	cout << "But while exploring the vast wilderness,";
	cout << "they stumbled upon buried fortune.";
	cout << "So the adventurers split " << GOLD_PIECES << " gold pieces.";
	cout << leader << " found the Golden Dice and used it to get everyone back home. Naturally, he gave evryone " << (GOLD_PIECES%survivors);
	cout << " pieces to keep things fair of course.\n";
	system("pause");
    return 0;
}

