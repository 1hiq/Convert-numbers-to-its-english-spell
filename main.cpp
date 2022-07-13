#include <iostream>
#include <vector>
using namespace;



vector <int> v1;
void getEachDigitInAnInt(int x) {
	if (x >= 10) {
		getEachDigitInAnInt(x / 10);
	}

	int digit = x % 10;
	v1.push_back(digit);

}

int getDigitOfIndex(int num, int index) {
	getEachDigitInAnInt(num);
	return v1[index];
}

string transNumToEngFrom1To9(int num) {
	string one = "one";
	string two = "two";
	string three = "three";
	string four = "four";
	string five = "five";
	string six = "six";
	string seven = "seven";
	string eight = "eight";
	string nine = "nine";
	if(num < 10){
			switch(num) {
				case 1:
					return one;
					break;

				case 2:
					return two;
					break;

				case 3:
					return three;
					break;

				case 4:
					return four;
					break;

				case 5:
					return five;
					break;

				case 6:
					return six;
					break;

				case 7:
					return seven;
					break;

				case 8:
					return eight;
					break;

				case 9:
					return nine;
					break;
			}
	}
	else if (num >= 10) {
		switch (getDigitOfIndex(num, 0)) {
			case 1:
				return one;
				break;

			case 2:
				return two;
				break;

			case 3:
				return three;
				break;

			case 4:
				return four;
				break;

			case 5:
				return five;
				break;

			case 6:
				return six;
				break;

			case 7:
				return seven;
				break;

			case 8:
				return eight;
				break;

			case 9:
				return nine;
				break;
		}
	}
}

string numToEng(int num) {
	if (num < 0 || num > 999) {
		return "Error, you have to enter from 0 to 999 only (0-999).\n";
	}

	string zero = "zero";
	string one = "one";	
	string two = "two";
	string three = "three";
	string four = "four";
	string five = "five";
	string six = "six";
	string seven = "seven";
	string eight = "eight";
	string nine = "nine";
	string ten = "ten";
	string eleven = "eleven";
	string twelve = "twelve";
	string thirteen = "thirteen";
	string fourteen = "fourteen";
	string fifteen = "fifteen";

	string twenty = "twenty";
	string thirty = "thirty";
	string forty = "forty";
	string fifty = "fifty";

	string hundred = "hundred";


	if (num <= 15) {
		switch (num) {
			case 0:
				return zero;
				break;

			case 1:
				return one;
				break;

			case 2:
				return two;
				break;

			case 3:
				return three;
				break;

			case 4:
				return four;
				break;

			case 5:
				return five;
				break;

			case 6:
				return six;
				break;

			case 7:
				return seven;
				break;

			case 8:
				return eight;
				break;

			case 9:
				return nine;
				break;

			case 10:
				return ten;
				break;

			case 11:
				return eleven;
				break;

			case 12:
				return twelve;
				break;

			case 13:
				return thirteen;
				break;

			case 14:
				return fourteen;
				break;

			case 15:
				return fifteen;
				break;
		}
	}
	else if (num >= 16 && num <= 99) {
		switch (num) {
		case 20:
			return twenty;
			break;

		case 30:
			return thirty;
			break;

		case 40:
			return forty;
			break;

		case 50:
			return fifty;
			break;
		}

		switch (getDigitOfIndex(num, 0)) {
			case 1:
				switch (getDigitOfIndex(num, 1)) {
					case 6:
						return six + "teen";
						break;

					case 7:
						return seven + "teen";
						break;

					case 8:
						return eight + "een";
						break;

					case 9:
						return nine + "teen";
						break;
				}
				break;

			case 2:
				return twenty + " " + transNumToEngFrom1To9(getDigitOfIndex(num, 1));
				break;

			case 3:
				return thirty + " " + transNumToEngFrom1To9(getDigitOfIndex(num, 1));
				break;

			case 4:
				return forty + " " + transNumToEngFrom1To9(getDigitOfIndex(num, 1));
				break;

			case 5:
				return fifty + " " + transNumToEngFrom1To9(getDigitOfIndex(num, 1));
				break;

			case 6:
				return six + "ty" + " " + transNumToEngFrom1To9(getDigitOfIndex(num, 1));
				break;

			case 7:
				return seven + "ty" + " " + transNumToEngFrom1To9(getDigitOfIndex(num, 1));
				break;

			case 8:
				return eight + "ty" + " " + transNumToEngFrom1To9(getDigitOfIndex(num, 1));;
				break;

			case 9:
				return nine + "ty" + " " + transNumToEngFrom1To9(getDigitOfIndex(num, 1));;
				break;
		}
	}
	else if (num >= 100 && num <= 999) {
		string tens;
		string singles;

		switch (num) {
			case 100:
				return transNumToEngFrom1To9(num) + " " + hundred;
				break;

			case 200:
				return transNumToEngFrom1To9(num) + " " + hundred;
				break;

			case 300:
				return transNumToEngFrom1To9(num) + " " + hundred;
				break;

			case 400:
				return transNumToEngFrom1To9(num) + " " + hundred;
				break;

			case 500:
				return transNumToEngFrom1To9(num) + " " + hundred;
				break;

			case 600:
				return transNumToEngFrom1To9(num) + " " + hundred;
				break;

			case 700:
				return transNumToEngFrom1To9(num) + " " + hundred;
				break;

			case 800:
				return transNumToEngFrom1To9(num) + " " + hundred;
				break;

			case 900:
				return transNumToEngFrom1To9(num) + " " + hundred;
				break;
		}

		switch (getDigitOfIndex(num, 2)) {
			case 0:
				switch (getDigitOfIndex(num, 1)) {
					case 1:
						tens = ten;
						return transNumToEngFrom1To9(num) + " " + hundred + " " + tens;
						break;

					case 2:
						tens = twenty;
						return transNumToEngFrom1To9(num) + " " + hundred + " " + tens;
						break;

					case 3:
						tens = thirty;
						return transNumToEngFrom1To9(num) + " " + hundred + " " + tens;
						break;

					case 4:
						tens = forty;
						return transNumToEngFrom1To9(num) + " " + hundred + " " + tens;
						break;

					case 5:
						tens = fifty;
						return transNumToEngFrom1To9(num) + " " + hundred + " " + tens;
						break;

					case 6:
						tens = six + "ty";
						return transNumToEngFrom1To9(num) + " " + hundred + " " + tens;
						break;

					case 7:
						tens = seven + "ty";
						return transNumToEngFrom1To9(num) + " " + hundred + " " + tens;
						break;

					case 8:
						tens = eight + 'y';
						return transNumToEngFrom1To9(num) + " " + hundred + " " + tens;
						break;

					case 9:
						tens = nine + "ty";
						return transNumToEngFrom1To9(num) + " " + hundred + " " + tens;
						break;
			}
				break;

			case 1:
				singles = one;
				break;

			case 2:
				singles = two;
				break;

			case 3:
				singles = three;
				break;

			case 4:
				singles = four;
				break;

			case 5:
				singles = five;
				break;

			case 6:
				singles = six;
				break;

			case 7:
				singles = seven;
				break;

			case 8:
				singles = eight;
				break;

			case 9:
				singles = nine;
				break;

		}

		switch (getDigitOfIndex(num, 1)) {
			case 0:
				return transNumToEngFrom1To9(num) + " " + hundred + " " + singles;
				break;

			case 1:
				switch (getDigitOfIndex(num, 2)) {
					/*
					case 0:
						tens = "ten";
						break;*/

					case 1:
						tens = "eleven";
						return transNumToEngFrom1To9(num) + " " + hundred + " " + tens;
						break;

					case 2:
						tens = "twelve";
						return transNumToEngFrom1To9(num) + " " + hundred + " " + tens;
						break;

					case 3:
						tens = "thirteen";
						return transNumToEngFrom1To9(num) + " " + hundred + " " + tens;
						break;

					case 4:
						tens = "forteen";
						return transNumToEngFrom1To9(num) + " " + hundred + " " + tens;
						break;

					case 5:
						tens = "fifteen";
						return transNumToEngFrom1To9(num) + " " + hundred + " " + tens;
						break;

					case 6:
						tens = six + "teen";
						return transNumToEngFrom1To9(num) + " " + hundred + " " + tens;
						break;

					case 7:
						tens = seven + "teen";
						return transNumToEngFrom1To9(num) + " " + hundred + " " + tens;
						break;

					case 8:
						tens = "eighteen";
						return transNumToEngFrom1To9(num) + " " + hundred + " " + tens;
						break;

					case 9:
						tens = nine + "teen";
						return transNumToEngFrom1To9(num) + " " + hundred + " " + tens;
						break;

				}
				break;

			case 2:
				tens = twenty;
				return transNumToEngFrom1To9(num) + " " + hundred + " " + tens + " " + singles;
				break;

			case 3:
				tens = thirty;
				return transNumToEngFrom1To9(num) + " " + hundred + " " + tens + " " + singles;
				break;

			case 4:
				tens = forty;
				return transNumToEngFrom1To9(num) + " " + hundred + " " + tens + " " + singles;
				break;

			case 5:
				tens = fifty;
				return transNumToEngFrom1To9(num) + " " + hundred + " " + tens + " " + singles;
				break;

			case 6:
				tens = six + "ty";
				return transNumToEngFrom1To9(num) + " " + hundred + " " + tens + " " + singles;
				break;

			case 7:
				tens = seven + "ty";
				return transNumToEngFrom1To9(num) + " " + hundred + " " + tens + " " + singles;
				break;

			case 8:
				tens = eight + "y";
				return transNumToEngFrom1To9(num) + " " + hundred + " " + tens + " " + singles;
				break;

			case 9:
				tens = nine + "ty";
				return transNumToEngFrom1To9(num) + " " + hundred + " " + tens + " " + singles;
				break;

		}

	}

}



int main(void) {

    //For example:
    cout << numToEng(285) << endl;
    // Here, will print: two hundred eighty five.





  return 0;
  }
