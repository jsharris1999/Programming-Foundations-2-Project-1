// Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <cstdlib>
#include "Review.h"
using namespace std;

int main()
{
	string reviewer = "Nobody";
	string restaurant = "Nowhere";
	string reviewDate = "Nonexistant";
	string comment = "N/A";
	string ReviewSearch = "None";
	string TemporaryName = "Nothing";
	int foodRating = 0;
	int serviceRating = 0;
	int valueRating = 0;
	int atmosphereRating = 0;
	string command = "0";
	int InsertedReview = 0;
	int ReviewCount = 0;
	Review reviews[100];
	for (int i = 0; i < 100; i++)
	{
		reviews[i].setReviewer(reviewer);
		reviews[i].setRestaurant(restaurant);
		reviews[i].setReviewDate(reviewDate);
		reviews[i].setFoodRating(foodRating);
		reviews[i].setServiceRating(serviceRating);
		reviews[i].setValueRating(valueRating);
		reviews[i].setAtmosphereRating(atmosphereRating);
		reviews[i].setComment(comment);
	}
	while (command != "3")
	{
		cout << "Welcome to our restaurant review service." << endl;
		cout << "This service stores up to 100 reviews of various restaurants." << endl;
		cout << "Valid commands are:" << endl;
		cout << "1: insert a restaurant review" << endl;
		cout << "2: print all restaurant reviews for a chosen restaurant" << endl;
		cout << "3: quit the program" << endl;
		cout << "Please enter the number corresponding to a command you wish to select." << endl;
		cin >> command;
		cin.ignore();
		while (((command != "1") == 1) && ((command != "2") == 1) && ((command != "3") == 1))
		{
			command = "0";
			cout << "That command is not valid." << endl;
			cin >> command;
			cin.ignore();
		}
		if (command == "1")
		{
			if(ReviewCount == 100)
			{
				cout << "You may not insert any more reviews at this time." << endl;
			}
			else
			{
				cout << "Please enter your name." << endl;
				getline(cin, reviewer);
				reviews[InsertedReview].setReviewer(reviewer);
				cout << "Please enter the name of the restaurant." << endl;
				getline(cin, restaurant);
				reviews[InsertedReview].setRestaurant(restaurant);
				cout << "Please enter the date." << endl;
				getline(cin, reviewDate);
				reviews[InsertedReview].setReviewDate(reviewDate);
				cout << "Please enter your rating for the food as a number between 1 and 5." << endl;
				cin >> foodRating;
				cin.ignore();
				while (foodRating > 5 || foodRating < 0)
				{
					cout << "That is not a valid rating, please enter another one." << endl;
					cin >> foodRating;
					cin.ignore();
				}
				reviews[InsertedReview].setFoodRating(foodRating);
				cout << "Please enter your rating for the service as a number between 1 and 5." << endl;
				cin >> serviceRating;
				cin.ignore();
				while (serviceRating > 5 || serviceRating < 0)
				{
					cout << "That is not a valid rating, please enter another one." << endl;
					cin >> serviceRating;
					cin.ignore();
				}
				reviews[InsertedReview].setServiceRating(serviceRating);
				cout << "Please enter your rating for the value as a number between 1 and 5." << endl;
				cin >> valueRating;
				cin.ignore();
				while (valueRating > 5 || valueRating < 0)
				{
					cout << "That is not a valid rating, please enter another one." << endl;
					cin >> valueRating;
					cin.ignore();
				}
				reviews[InsertedReview].setValueRating(valueRating);
				cout << "Please enter your rating for the atmosphere as a number between 1 and 5." << endl;
				cin >> atmosphereRating;
				cin.ignore();
				while (atmosphereRating > 5 || atmosphereRating < 0)
				{
					cout << "That is not a valid rating, please enter another one." << endl;
					cin >> atmosphereRating;
					cin.ignore();
				}
				reviews[InsertedReview].setAtmosphereRating(atmosphereRating);
				cout << "Please enter any comments you have about the restaurant." << endl;
				getline(cin, comment);
				reviews[InsertedReview].setComment(comment);
				InsertedReview++;
			}
		}
		else if (command == "2")
		{
			cout << "Please enter the name of the restaurant you would like to see reviews of." << endl;
			getline(cin, ReviewSearch);
			for (int j = 0; j < 100; j++)
			{
				TemporaryName = reviews[j].getRestaurant();
				if (TemporaryName == ReviewSearch)
				{
					ReviewCount++;
					reviews[j].Print();
				}
				
			}
			if (ReviewCount == 0)
			{
				cout << "Sorry, but we have no reviews of the restaurant you entered." << endl;
			}
			ReviewCount = 0;
		}
		else if (command == "3")
		{
			cout << "Thank you for using our review service." << endl;
		}
	}
	return 0;
}
