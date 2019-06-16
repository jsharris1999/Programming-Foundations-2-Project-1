#include <string>
#include <iostream>
#include "Review.h"
using namespace std;

//Constructors and destructor
Review::Review()
{
	Reviewer = "Nobody";
	Restaurant = "Nowhere";
	ReviewDate = "Nonexistant";
	Comment = "N/A";
	FoodRating = 0;
	ServiceRating = 0;
	ValueRating = 0;
	AtmosphereRating = 0;
	AverageRating = 0;
}

Review::Review(const Review& orig)
{
	Reviewer = orig.Reviewer;
	Restaurant = orig.Restaurant;
	ReviewDate = orig.ReviewDate;
	Comment = orig.Comment;
	FoodRating = orig.FoodRating;
	ServiceRating = orig.ServiceRating;
	ValueRating = orig.ValueRating;
	AtmosphereRating = orig.AtmosphereRating;
	AverageRating = orig.AverageRating;
}

Review::~Review()
{

}

//Accessors
string Review::getReviewer() const
{
	return Reviewer;
}

string Review::getRestaurant() const
{
	return Restaurant;
}

string Review::getReviewDate() const
{
	return ReviewDate;
}

string Review::getComment() const
{
	return Comment;
}

int Review::getFoodRating() const
{
	return FoodRating;
}

int Review::getServiceRating() const
{
	return ServiceRating;
}

int Review::getValueRating() const
{
	return ValueRating;
}

int Review::getAtmosphereRating() const
{
	return AtmosphereRating;
}

int Review::getAverageRating() const
{
	return AverageRating;
}

//Mutators
void Review::setReviewer(string reviewer)
{
	Reviewer = reviewer;
}

void Review::setRestaurant(string restaurant)
{
	Restaurant = restaurant;
}

void Review::setReviewDate(string reviewdate)
{
	ReviewDate = reviewdate;
}

void Review::setComment(string comment)
{
	Comment = comment;
}

void Review::setFoodRating(int foodrating)
{
	FoodRating = foodrating;
	setAverageRating();
}

void Review::setServiceRating(int servicerating)
{
	ServiceRating = servicerating;
	setAverageRating();
}

void Review::setValueRating(int valuerating)
{
	ValueRating = valuerating;
	setAverageRating();
}

void Review::setAtmosphereRating(int atmosphererating)
{
	AtmosphereRating = atmosphererating;
	setAverageRating();
}

//Other
void Review::Print() const
{
	cout << "Restaurant: " << Restaurant << endl;
	cout << "Reviewer: " << Reviewer << endl;
	cout << "Review Date: " << ReviewDate << endl;
	cout << "Food Rating: " << FoodRating << endl;
	cout << "Service Rating: " << ServiceRating << endl;
	cout << "Value Rating: " << ValueRating << endl;
	cout << "Atmosphere Rating: " << AtmosphereRating << endl;
	cout << "Overall Rating: " << AverageRating << endl;
	cout << "Comment: " << Comment << endl;
}

void Review::setAverageRating()
{
	AverageRating = (FoodRating + ServiceRating + ValueRating + AtmosphereRating) / 4;
}