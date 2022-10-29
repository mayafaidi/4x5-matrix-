// ConsoleApplication25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//----------------------Part one read matrix ------------------
void read_matrix(int x[4][5]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			cout << "please enter value :";
			cin >> x[i][j];
		}
	}
}


//--------------Part two  find transpose ------------------

void print_transpose(int transport[5][4]) {
	cout << " The matrix  tranpose:" << endl;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cout << " ";
			cout << transport[j][i];

		}
		cout << endl;
	}

}

void find_transpose(int x[4][5]) {

	int transport[5][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			transport[j][i] = x[i][j];
		}

	}
print_transpose(transport);
}


//----------------------------Part four print orginal matrix ---------------
void print_orignal_matrix(int x[4][5]) {
	cout << " The matrix :" << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			cout << " ";
			cout << x[i][j];
		}
		cout << endl;
	}
}
//---------------- Part Five sum rows on orignal matrix ---------------------
void find_row_sum(int x[4][5]) {
	int i, j, sum = 0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 5; j++) {
			sum = sum + x[i][j];
		}
		cout<< "Sum of the row "<< i << " = " << sum<< endl;
	}
}


int main()
{
	int x[4][5];
	cout << "Enter matrix-values first :" << endl;
	read_matrix(x);

	int choise;
	while (1) {
		cout << "1. Input a new matrix:" << endl;
		cout << "2. Find and display the transpose of the current matrix" << endl;
		cout << "3. Output the current (original) matrix" << endl;
		cout << "4. Find the sum of a certain row in the current (original) matrix." << endl;
		cout << "5- Exit ..." << endl;
		cout << "enter your choice:" << endl;

		cin >> choise;
		switch (choise) {
		case 1:

			read_matrix(x);
			break;
		case 2:

			find_transpose(x);
			break;
		case 3:

			print_orignal_matrix(x);
			break;
		case 4:

			find_row_sum(x);
			break;

		case 5:

			exit(0);
		default:
			cout << "wrong choice " << endl;
			cout << "you should to choose from 1 to 5";
		}


	}

	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
