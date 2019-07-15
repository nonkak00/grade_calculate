#include<iostream>
using namespace std;
void main()
{
	int score ;
	cout << "Enter ur score : " ;
		cin >> score ;
	if (score > 100) cout << "Error!" << endl ;
	else if (score >= 80 ) cout << "Grade : A" << endl ;
	else if (score >= 75 ) cout << "Grade : B+" << endl ;
	else if (score >= 70 ) cout << "Grade : B" << endl ;
	else if (score >= 65 ) cout << "Grade : C+" << endl ;
	else if (score >= 60 ) cout << "Grade : C" << endl ;
	else if (score >= 55 ) cout << "Grade : D+" << endl ;
	else if (score >= 50 ) cout << "Grade : D" << endl ;
	else cout << "Grade : F"

}