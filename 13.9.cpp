#include<iostream>
#include<string>
using namespace std;
class Population
{
private:
	double population;
	double birth;
	double death;
public:
	void setPopulation(double pop, double bir, double dea)
	{
		if (pop < 1) 
			cout << "invalid!population.........." << endl;
		else
		population = pop;
		birth = bir;
		death = dea;
	}
	double birthRate()
	{
		double birth_rate = birth / population;
		return birth_rate;
	}
	double deathRate()
	{
		double death_rate = birth / population;
		return death_rate;
	}


};
int main()
{
	Population p1;
	double populat, birt, deat;
	cout << "enter the population :";
	cin >> populat;
	cout << "enter the birth :";
	cin >> birt;
	cout << "enter the death :";
	cin >> deat;
	p1.setPopulation(populat, birt, deat);
	cout << "the birth rate is " << p1.birthRate() << endl;
	cout << "the death rate is " << p1.deathRate() << endl;



}