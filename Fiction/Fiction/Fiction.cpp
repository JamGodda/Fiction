// Fiction.cpp : Defines the entry point for the console application.
// Get to class on time decide what you want to do.
// this is missing the string as the prompt. Its also missing string that returns a number 
// basically this is a text adventure that is multiple functions but the choices are based on int instead of string
#include "stdafx.h" //
#include <iostream> //input out stream
#include <string> //string library


using namespace std;

void Intro(); // fucntion init
void FirstChoice(); // fucntion init
void WakeUp(); // fucntion init
void BackToSleep(); // fucntion init
void MathObjects(); // fucntion init
void NotAnOption(); // fucntion init


string PlayerName = ""; // holds player name
int PlayerOption = 0; // holds player options for story choosing
int Playagain = 0; // holds player option for quitting

int main() //main function
{
	Intro(); // calls the first function
	FirstChoice(); // calls the second function
	system("pause"); // pauses the game so the player can read the final words
	return 0;
}

void Intro() // intro to the game
{
	cout << "Welcome to an Interactive Story" << endl; // info text for player
	cout << "What is your name? "; 
	cin >> PlayerName; // player input name
	cout << "\nHEY " << PlayerName << " get up you have 20 minutes until math class starts and remember today is the final exam." << endl; // uses the player name
	return;
}
void FirstChoice() // first of the choices the player can make
{
	cout << "What do you choose to do? " << endl;
	cout << "1. Wake Up" << endl; // info text for player
	cout << "2. Go Back to Sleep" << endl; // info text for player
	cin >> PlayerOption; // player inout
	if (PlayerOption == 1) // checks to see if the player hit 1
	{
		WakeUp(); // calls the wake up function
	}
	if (PlayerOption == 2) // checks to see if the player hit 2
	{
		BackToSleep(); // calls the back to sleep function
	}
	if (PlayerOption < 1 | PlayerOption > 2) // checks to see if the player hit anything besides 1 or 2
	{
		NotAnOption(); // calls the not an option function and asks the player to choose again
	}
	return;
}

void WakeUp() // if the player chooses 1 they go here
{
	cout << "You wake up and see that everything is out of your backpack. You can pick up two items and carry them with you to math class. "<< endl; // info for the player
	MathObjects(); // calls the next function
	return;
}

void BackToSleep() // if the player chooses 2 they go here
{
	cout << "You end up failing the class and live out your life in a large tv box. Eventually you end up making a friends with a rat..." << endl;
	cout << "However you end up eating your friend during a very bad winter.... You end up dying alone and your body becomes food for the rats family." << endl;
	cout << "Would you like to play again? " << endl;
	cout << "1. Yes" << endl; // player info text
	cout << "2. No" << endl; // player info text
	cin >> Playagain; // player input
	if (Playagain == 1) // checks to see if the player hit 1
	{
		FirstChoice(); // cycles back to the first choice function
	}
	else // if they hit anything else it exit's the game
	{
		cout << "Good-bye" << endl; // good bye text
	}

	return;
}

void NotAnOption() // if they hit anything besides 1 or 2 it goes here
{
	cout << "That is not an option" << endl; // lets them know that wasn't a valid choice
	FirstChoice(); // directs them back to where they were
	return;
}

void MathObjects()
{

	int TakenObeject = 0; // holds the choice the player makes
	string MathObjectsArray[3]; // an array to hold a list of objects
	MathObjectsArray[0] = "NOTEBOOK";
	MathObjectsArray[1] = "PENCILE";
	MathObjectsArray[2] = "CALCULATOR";

	cout << "The scattered items on the floor include: " << endl;
	for (int x = 0; x < 3; x++) // prints out each item on the array one at a time
	{
		cout << MathObjectsArray[x] << endl;
	}

	cout << "Which 2 items would you like to take?" << endl; // these are all the possible options for the player do without repeating objects
	cout << "1. " << MathObjectsArray[0] << "-" << MathObjectsArray[1] << endl; 
	cout << "2. " << MathObjectsArray[0] << "-" << MathObjectsArray[2] << endl;
	cout << "3. " << MathObjectsArray[1] << "-" << MathObjectsArray[2] << endl;

	
	cin >> TakenObeject; // player input
	 
	if (TakenObeject == 1) // checks to see if they hit 1
	{
		cout << "You take the pencile and the notebook. However you can't use the notebook and you don't have a calculator to do the math equations you get a 60% on the final and pass the test by the skin of your teeth" << endl;
	}

	if (TakenObeject == 2) // checks to see if they hit 2
	{
		cout << "You take the calculator and the notebook. However you can't use the notebook and you don't have anthing to write with. You fail the test. " << endl;
	}

	if (TakenObeject == 3) // checks to see if they hit 3
	{
		cout << "You take the calculator and the pencile. You get to class and sit down. The test is handed out. The first question is" << endl; 
		cout << "What is the capital of Missouri?" << endl;
		cout << "You have gone to wrong class and failed your math exam." << endl;
	}

	if (TakenObeject < 1 | TakenObeject > 3) // checks to see if they hit anything beside 1, 2, or 3
	{
		cout << "That is not an options sorry bro" << endl;
		MathObjects(); // takes them back to re-choose an option. I put bro at the end of it to make it different from the other not an option text 

	}

	return;
}
