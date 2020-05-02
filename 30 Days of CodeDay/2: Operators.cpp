#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>


using namespace std;
int main(int argc, char *argv[]) {
	
	double meal_cost;
	double tip_percent;
	double tax_percent;
	double trink;
	double steuern;
	double  totalCost;
	
	cin >> meal_cost ;
	cin >> tip_percent ;
	cin >> tax_percent ;  
	
	 trink = meal_cost * (tip_percent / 100);
	 steuern = meal_cost * (tax_percent/ 100 );
	totalCost = meal_cost + trink  + steuern ;	
		
	cout <<  std::round(totalCost) << endl;
	
	
	
	
}
