#include <string>
using namespace std;

#ifndef Review_H
#define Review_H

class Review
{
public:
	//Constructors and destructor
	Review();
	Review(const Review& orig);
	~Review();

	//Accessors
	string getReviewer() const;
	string getRestaurant() const;
	string getReviewDate() const;
	string getComment() const;
	int getFoodRating() const;
	int getServiceRating() const;
	int getValueRating() const;
	int getAtmosphereRating() const;
	int getAverageRating() const;

	//Mutators
	void setReviewer(string reviewer);
	void setRestaurant(string restaurant);
	void setReviewDate(string reviewdate);
	void setComment(string comment);
	void setFoodRating(int foodrating);
	void setServiceRating(int servicerating);
	void setValueRating(int valuerating);
	void setAtmosphereRating(int atmosphererating);

	//Other
	void Print() const;

private:
	string Reviewer;
	string Restaurant;
	string ReviewDate;
	string Comment;
	int FoodRating;
	int ServiceRating;
	int ValueRating;
	int AtmosphereRating;
	int AverageRating;

	void setAverageRating();

};

#endif
