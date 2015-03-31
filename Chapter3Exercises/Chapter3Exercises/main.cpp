#include "std_lib_facilities.h"

void Drill();
void Ex2();
void Ex4();
void Ex5();
void Ex6();
void Ex7();
void Ex8();
void Ex9();
void Ex10();
void Ex11();

int main() {
	char pause = 0;

	//Drill();
	//Ex2();
	//Ex4();
	//Ex5();
	//Ex6();
	//Ex7();
	//Ex8();
	//Ex9();
	//Ex10();
	//Ex11();


	cin >> pause;
	return 0;
}
void Drill() {

	string firstName, lastName, toName, toFriendName;
	cout << "Please enter in your first and laste name: ";
	cin >> firstName >> lastName;
	cout << "\nHello " << firstName << " " << lastName << "!";
	cout << "\nPlease enter the name of the person you want to write to: ";
	cin >> toName;

	cout << "\n\nDear " << toName << ",";
	cout << "\n\t How are you? I'm doing well today. I've been working on practicing C++ lately. It can be tough at times but I need to stay dedicated!";
	cout << "\nAre things going well for you? I can't wait to see you next winter!";
	cout << "\n\nPlease enter in the name of another friend: ";
	cin >> toFriendName;

	cout << "\nHave you seen " << toFriendName << " lately?";

	char friend_sex = 0;

	cout << "\nPlease enter in \"m\" for male or \"f\" for female: ";
	cin >> friend_sex;

	if (friend_sex == 'm')
		cout << "\nIf you happen to see " << toFriendName << ", please have him call me.";
	if (friend_sex == 'f')
		cout << "\nIf you happen to see " << toFriendName << ", please have her call me.";

	int recipient_age = 0;
	cout << "\nWhat is the recipient's age? ";
	cin >> recipient_age;
	cout << "\nI hear you just had a birthday and you are " << recipient_age << " years old!";
	if (recipient_age <= 0 || recipient_age >= 110)
		simple_error("you're kidding!");

	if (recipient_age < 12)
		cout << "\nNext year you will be " << recipient_age + 1 << "!";
	if (recipient_age == 17)
		cout << "\nNext year you'll be able to vote!";
	if (recipient_age > 70)
		cout << "\nI hope you're enjoying retirement.";

	cout << "\nYours sincerely,";
	cout << "\n\n" << firstName << " " << lastName;

	cin >> firstName;
}
void Ex2() {
	int miles = 0;
	double conversion = 1.609, kilometers = 0;

	cout << "How many miles would you like to convert? ";
	cin >> miles;

	kilometers = miles * conversion;

	cout << "\nI just converted " << miles << " miles into a total of " << kilometers << " kilometers.";
}

void Ex4() {
	int val1 = 0, val2 = 0;
	cout << "Please enter in two values separated by a space: ";
	cin >> val1 >> val2;

	cout << "\n\nThe largest value is " << (val1 > val2 ? val1 : val2) << ".";
	cout << "\nThe smallest value is " << (val1 < val2 ? val1 : val2) << ".";
	cout << "\nTheir sum is " << val1 + val2 << ".";
	cout << "\nThe difference is " << val1 - val2 << ".";
	cout << "\nTheir product is " << val1 * val2 << ".";
	cout << "\nAnd finally their ratio is " << val1 / val2 << ".";
}

void Ex5() {
	double val1 = 0, val2 = 0;
	cout << "Please enter in two values separated by a space: ";
	cin >> val1 >> val2;

	cout << "\n\nThe largest value is " << (val1 > val2 ? val1 : val2) << ".";
	cout << "\nThe smallest value is " << (val1 < val2 ? val1 : val2) << ".";
	cout << "\nTheir sum is " << val1 + val2 << ".";
	cout << "\nThe difference is " << val1 - val2 << ".";
	cout << "\nTheir product is " << val1 * val2 << ".";
	cout << "\nAnd finally their ratio is " << val1 / val2 << ".";
}

void Ex6() {
	int val1 = 0, val2 = 0, val3 = 0;
	cout << "Please enter in three values separated by a space: ";
	cin >> val1 >> val2 >> val3;

	if (val1 < val2)
		if (val1 < val3)
			if (val2 < val3)
				cout << val1 << ", " << val2 << ", " << val3;
			else
				cout << val1 << ", " << val3 << ", " << val2;
		else
			cout << val3 << ", " << val1 << ", " << val2;
	else
		if (val2 < val3)
			if (val1 < val3)
				cout << val2 << ", " << val3 << ", " << val2;
			else
				cout << val2 << ", " << val2 << ", " << val1;
		else
			cout << val3 << ", " << val2 << ", " << val1;
}

void Ex7() {
	string str1, str2, str3;
	cout << "Please enter in three values separated by a space: ";
	cin >> str1 >> str2 >> str3;

	if (str1 < str2)
		if (str1 < str3)
			if (str2 < str3)
				cout << str1 << ", " << str2 << ", " << str3;
			else
				cout << str1 << ", " << str3 << ", " << str2;
		else
			cout << str3 << ", " << str1 << ", " << str2;
	else
		if (str2 < str3)
			if (str1 < str3)
				cout << str2 << ", " << str1 << ", " << str3;
			else
				cout << str2 << ", " << str3 << ", " << str1;
		else
			cout << str3 << ", " << str2 << ", " << str1;
}

void Ex8() {

	int val1 = 0;
	cout << "Please enter in a numeric value: ";
	cin >> val1;

	if (val1 % 2 == 0)
		cout << "\nThe number: " << val1 << " is an even number!";
	else
		cout << "\nThe number: " << val1 << " is an odd number!";
}

void Ex9() {
	string numberStr = "";
	bool done = false;
	cout << "Please type the phonetic name of a number: ";
	cin >> numberStr;

	if (numberStr == "zero") {
		cout << 0;
		done = true;
	}

	if (numberStr == "one") {
		cout << 1;
		done = true;
	}

	if (numberStr == "two") {
		cout << 2;
		done = true;
	}

	if (numberStr == "three") {
		cout << 3;
		done = true;
	}

	if (numberStr == "four") {
		cout << 4;
		done = true;
	}

	if (!done)
		cout << "I'm incapable of processing this info!";
}

void Ex10() {
	string operation = "";
	double firstOp = 0, secondOp = 0;

	cout << "Please enter in an operation, operand first followed by two numbers: ";
	cin >> operation >> firstOp >> secondOp;

	if (operation != "+" && operation != "-" && operation != "*" && operation != "/") {
		cout << "You have entered in an incorrect operand character. Program exiting...";
		return;
	}

	if (operation == "+")
		cout << "The sum of these two numbers is: " << firstOp + secondOp;
	if (operation == "-")
		cout << "The difference of these two numbers is: " << firstOp - secondOp;
	if (operation == "*")
		cout << "The product of these two numbers is: " << firstOp * secondOp;
	if (operation == "/")
		cout << "The quotient of these two numbers is: " << firstOp / secondOp;
}

void Ex11() {
	int pennies = 0, nickels = 0, dimes = 0, quarters = 0, half_dollars = 0, dollars = 0;
	cout << "How many pennies do you have? ";
	cin >> pennies;
	cout << "\nHow many nickels do you have? ";
	cin >> nickels;
	cout << "\nHow many dimes do you have? ";
	cin >> dimes;
	cout << "\nHow many quarters do you have? ";
	cin >> quarters;
	cout << "\nHow many half dollars do you have? ";
	cin >> half_dollars;
	cout << "\nHow many dollars do you have? ";
	cin >> dollars;
	cout << endl;

	if (pennies < 1)
		cout << "";
	if (pennies == 1)
		cout << "\nYou have one penny.";
	else
		cout << "\nYou have " << pennies << " pennies.";

	if (nickels < 1)
		cout << "";
	if (nickels == 1)
		cout << "\nYou have one nickle.";
	else
		cout << "\nYou have " << nickels << " nickels.";

	if (dimes < 1)
		cout << "";
	if (dimes == 1)
		cout << "\nYou have one dime.";
	else
		cout << "\nYou have " << dimes << " dimes.";

	if (quarters < 1)
		cout << "";
	if (quarters == 1)
		cout << "\nYou have one quarter.";
	else
		cout << "\nYou have " << quarters << " quarters.";

	if (half_dollars < 1)
		cout << "";
	if (half_dollars == 1)
		cout << "\nYou have one half dollar.";
	else
		cout << "\nYou have " << half_dollars << " half dollars.";

	if (dollars < 1)
		cout << "";
	if (dollars == 1)
		cout << "\nYou have one dollar.";
	else
		cout << "\nYou have " << dollars << " dollars.";

	cout << "\nThe value of all of your coins is " << pennies + (nickels * 5) + (dimes * 10) + (quarters * 25) + (half_dollars * 50) +
		(dollars * 100) << " cents.";
}