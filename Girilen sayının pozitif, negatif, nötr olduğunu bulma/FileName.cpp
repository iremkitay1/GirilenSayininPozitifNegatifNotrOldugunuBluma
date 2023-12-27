#include <iostream>
using namespace std;
int main()
{
	int sayi;
	cout << "Bir sayi giriniz : ";
	cin >> sayi;

	if (sayi < 0)
	{
		cout << "Sayi negatiftir ." << endl;
	}
	else if(sayi > 0)
	{
		cout << "Sayi pozitiftir. " << endl;
	}
	else if (sayi == 0)
	{
		cout << "Sayi notrdur. " << endl;
	} 

	return 0;
}