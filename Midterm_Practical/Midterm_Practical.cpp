// Midterm_Practical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <ctime>


bool question[4] = { true, true, true, true };

std::string GetFirstName();

void multipleChoice();



int main()
{

	std::cout << "* ********** WELCOME ********** *\n" << std::endl;

	std::string firstName = GetFirstName(); // Call get first name

	srand(time(0)); //seeding the generator

	multipleChoice(); // Call to show questions
}

void multipleChoice()
{
	//(std::string question, std::string a, std::string b, std::string c, std::string d)
	bool correct = false;

	for (int i = 0; i < 4; i++)
	{
		if (question[i])
		{
			correct = true;
			break;
		}
	}
	//char theAnswer = 0;
	char choice;
	while (correct)
	{
		int randomQ = rand() % 4 + 1; // the question number
		if (question[randomQ == false])
		{
			switch (randomQ)
			{
			case 1: std::cout << "\nQUESTION:\n\nAccording to Forrest Gump, Life was like..." << std::endl;
				std::cout << "\na) A bag of lemons, b) A handful roses, c) a lollipop, d) a box of chocolates" << std::endl;
				std::cout << std::endl;
				//	'd');
					// Ask the user to choose their answer
				std::cout << "\nPlease choose the answer: ";
				std::cin >> choice;
				std::cout << std::endl;
				if (choice == 'd')
				{
					std::cout << "\nThat is correct" << std::endl;
				}
				else if (choice == 'a' || choice == 'b' || choice == 'c')
				{
					std::cout << "WRONG ANSWER.\n The correct answer is: d  " << std::endl;
				}
				else
				{
					std::cout << "Please enter a valid entry: ";
					std::cin.clear();
					std::cin.ignore(INT_MAX, '\n');
					std::cin >> choice;
				}
				break;

			case 2: std::cout << "\nQUESTION: \n\nWhat language is the most spoken worldwide?" << std::endl;
				std::cout << "\na) Chinese, b) Spanish, c) English, d) Arabic " << std::endl;
				std::cout << std::endl;
				//	'a');
					// Ask the user to choose their answer
				std::cout << "\nPlease choose the answer: ";
				std::cin >> choice;
				std::cout << std::endl;
				if (choice == 'a')
				{
					std::cout << "\nThat is correct" << std::endl;
				}
				else if (choice == 'b' || choice == 'c' || choice == 'd')
				{
					std::cout << "WRONG ANSWER.\n The correct answer is: a  " << std::endl;
				}
				else
				{
					std::cout << "Please enter a valid entry: ";
					std::cin.clear();
					std::cin.ignore(INT_MAX, '\n');
					std::cin >> choice;
				}
				break;

			case 3: std::cout << "\nQUESTION:\n\nThe human body is made up of approximately how much water?" << std::endl;
				std::cout << "\na) 40 % , b) 50 % , c) 60 % , d) 70 % " << std::endl;
				std::cout << std::endl;
				//	'c');
					// Ask the user to choose their answer
				std::cout << "\nPlease choose the answer: ";
				std::cin >> choice;
				std::cout << std::endl;
				if (choice == 'c')
				{
					std::cout << "\nThat is correct" << std::endl;
				}
				else if (choice == 'a' || choice == 'b' || choice == 'd')
				{
					std::cout << "WRONG ANSWER.\n The correct answer is: c  " << std::endl;
				}
				else
				{
					std::cout << "Please enter a valid entry: ";
					std::cin.clear();
					std::cin.ignore(INT_MAX, '\n');
					std::cin >> choice;
				}
				break;

			case 4: std::cout << "\nQUESTION:\n\nIt takes Matt four hours to mow two lawns. \n How many lawns can he mow in ten hours?" << std::endl;
				std::cout << "\na) Two lawns, b) Five lawns, c) Ten lawns, d) Six Lawns" << std::endl;
				std::cout << std::endl;
				//	'b');
					// Ask the user to choose their answer
				std::cout << "\nPlease choose the answer: ";
				std::cin >> choice;
				std::cout << std::endl;
				if (choice == choice)
				{
					std::cout << "\nThat is correct" << std::endl;
				}
				else if (choice == 'a' || choice == 'c' || choice == 'd')
				{
					std::cout << "WRONG ANSWER.\n The correct answer is: b  " << std::endl;
				}
				else
				{
					std::cout << "Please enter a valid entry: ";
					std::cin.clear();
					std::cin.ignore(INT_MAX, '\n');
					std::cin >> choice;
				}
				break;
			}
		}
	}
}
	std::string GetFirstName()
	{
		std::string firstName = " ";
		//char initial[40];	// Ask the user for their initials and save them into a char array. 
		std::cout << "Please enter your first name: ";
		std::getline(std::cin, firstName);
		
		return firstName;
	}


	
