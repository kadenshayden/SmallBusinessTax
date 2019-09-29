/*Lab 2 : Small Business Taxes
	Kaden Golda
	This program calculates taxes at a county and state level for a small business.
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const float STATE_TAX = 0.0575, // State County and State tax rates. 
				COUNTY_TAX = 0.025,
				SALES_TAX = 0.0825;

	float total_tax, total_state_tax, total_county_tax, totalSales, totalRevenue;

	string date;

	// Prompt user for date.
	cout << "Please enter date (Month, Year): ";
	getline(cin, date);
	cout << "Please enter Revenue for " << date << ": ";
	cin >> totalRevenue;

	// Calculate county tax, state tax, and total tax using the formula S = T / 1.0825.
	totalSales = totalRevenue / 1.0825;
	total_state_tax = totalSales * STATE_TAX;
	total_county_tax = totalSales * COUNTY_TAX;
	total_tax = totalSales * SALES_TAX;

	// Output the results of the above calculations, formatted using <iomanip>. 
	cout << setprecision(2) << fixed << endl;
	cout << "_____________________________" << endl;
	cout << "Period: " << setw(10) << date << endl;
	cout << "_____________________________" << endl;
	cout << "Total Revenue:    $" << setw(10) << totalSales << endl;
	cout << "Total Sales:      $" << setw(10) << totalRevenue << endl;
	cout << "County sales tax: $" << setw(10) << total_county_tax << endl;
	cout << "State sales tax:  $" << setw(10) << total_state_tax << endl;
	cout << "Total sales tax:  $" << setw(10) << total_tax << endl;
	cout << "_____________________________" << endl;
	cout << "Programmed by Kaden Golda" << endl;

	return 0;
}
/* Output of the program:
_____________________________
Period: January 2019
_____________________________
Total Revenue:    $  75923.76
Total Sales:      $  82187.47
County sales tax: $   1898.09
State sales tax:  $   4365.62
Total sales tax:  $   6263.71
_____________________________
Programmed by Kaden Golda
*/
