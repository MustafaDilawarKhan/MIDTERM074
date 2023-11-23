#include <iostream>
using namespace std;

int main()
{

	
	int LoyaltyPoints = 0;
	int const ConvRate = 2;			 //1 point on the purchase of $2
	int const RedeemingPoints = 5;   // 5 points = $1 discount
	double discount, TotalPurchase;

	do {
		cout << "Enter the total amount of the Purchase you made : ";
		cin >> TotalPurchase;
		if (TotalPurchase < 0) {
			cout << "Enter a valid Number.\n";
			continue;
		}

		LoyaltyPoints =LoyaltyPoints + (TotalPurchase / ConvRate);
		cout << "Loyalty points earned : " << LoyaltyPoints << endl;
		int ToRedeem;
		cout << "Enter the number of points you want to REDEEM : ";
		cin >> ToRedeem;

		if (ToRedeem > 0) {
			discount = ToRedeem / RedeemingPoints ;
			cout << "Discount of $"<< discount<<" is applied." <<endl;

			LoyaltyPoints = LoyaltyPoints - ToRedeem;
			cout << " Remaining points : " << LoyaltyPoints<<endl;
		}

		cout << " Total royalty points " << LoyaltyPoints<<endl;

	} while (true);

	return 0;
}