#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>


using namespace std;

                                     // List of variables used
int rn;
string room[11] = { "0", "Room 1", "Room 2", "Room 3", "Room 4", "Room 5", "Room 6", "Room 7", "Room 8", "Room 9", "Room 10" }; // Main array for the hotel rooms
string nameofcustomer;
string defaultroomvalue[11];

void DisplayMainMenu()
{

	cout << "Hotel reservation system menu" << endl;   
	cout << endl;                                                                          // Code for the initialisation of the program by clicking button I
	cout << "Please use one of the keys to select any of the option on the menu" << endl;
	cout << " A - Add a customer" << endl;
	cout << " V - View all rooms" << endl;
	cout << " e - Reset list of rooms" << endl;
	cout << " E - Display empty rooms" << endl;
	cout << " D - Delete customer from room" << endl;
	cout << " F - Find room from customer name" << endl;
	cout << " S - Store data program into file" << endl;
	cout << " L - Load program data onto file" << endl;
	cout << " O - View rooms ordered alphabetically by the main customer’s name" << endl;
}

void AddCustomer()
{
	cout << "What is the name of the customer that wants to be served?" << endl;             // Code that will add name of the customer
	cin >> nameofcustomer;
	cout << "Which room number does " << nameofcustomer << " want? (Type in the room number)" << endl;
	cin >> rn;
	room[rn] = nameofcustomer;
	cout << "Successful booking! Room " << rn << " has been booked by " << room[rn] << endl;
}

void ViewAllRooms()
{
	cout << "Here is the list of all rooms (rooms that have been booked will have the name of the customer)" << endl; // Code that will allow viewer to view all rooms
	for (int rn = 1; rn <= 10; rn++)
		cout << room[rn] << "\n";
}

void ResetAllRooms()
{
	room[1] = "Room 1";                                                      // Code that initialise each room to empty/reset it
	room[2] = "Room 2";
	room[3] = "Room 3";
	room[4] = "Room 4";
	room[5] = "Room 5";
	room[6] = "Room 6";
	room[7] = "Room 7";
	room[8] = "Room 8";
	room[9] = "Room 9";
	room[10] = "Room 10";

	cout << "Reset has been successful!" << endl;
}

void ViewEmptyRooms()
{
	cout << "Here's the list of all available rooms: " << endl;    // Code that will be listing all of the available rooms
	for (int rn = 1; rn <= 10; rn++)
		if (room[rn] != nameofcustomer)
			cout << room[rn] << "\n";
}

void DeleteCustomerfromroom()
{
	cout << "Which specific room would you like to delete the customer's info from? " << endl;    // Code that will be deleting customer's info from a specific room
	for (int rn = 1; rn <= 10; rn++)
		cout << room[rn] << "\n";
	cin >> rn;
	room[rn] = defaultroomvalue[rn];
	cout << "Value from Room " << rn << " has been deleted" << endl;
}

void Findcustomerfromroom()
{
	cout << "Please type in the name of the customer to find out what room they are at" << endl; // Code that will be finding which room a customer is by typing their name
	cin >> nameofcustomer;
	for (int rn = 1; rn <= 10; rn++)
		if (room[rn] == nameofcustomer)
			cout << nameofcustomer << " is booked at Room " << rn;
}

void StoreDataontofile()
{
	ofstream records("hotelrecords.txt");              // Code that will be saving the records onto a file
	for (int rn = 1; rn <= 10; rn++)
		records << room[rn] << "\n";
	records.close();
	cout << "Hotel records have been saved onto a file" << endl;
}

void LoadDatafromfile()                                 // Code will be loading data from file
{
	string loadinfo;
	ifstream records("hotelrecords.txt");
	if (records.is_open())
	{
		while (getline(records, loadinfo))
		{
			cout << loadinfo << '\n';
		}
		records.close();
	}

	else cout << "File cannot be opened" << endl;
}

void OrderinAlphabeticalOrder()                                 // Code that will rooms in alphabetical order
{
	int ao = sizeof(room) / sizeof(room[0]);
	sort(room, room + ao);
	for (int rn = 1; rn < ao; rn++)
	{
		cout << room[rn] << endl;

	}

}

int main()
{


	char optionselection;                                  // Variable that will allow the user to navigate through the menu

	cout << "Welcome to the hotel reservation system application! Please enter I to initialise the program" << endl;

	{
		for (int rn = 1; rn <= 10; rn++)
			defaultroomvalue[rn] = room[rn];    // Will be storing the default values
	}

	do {

		cin >> optionselection;    // Will allow the user to enter a specific key to force the program to do a specific task

		switch (optionselection)   // This is the menu containing the procedures and keys needed to be entered for it to be done
		{

		case 'I': DisplayMainMenu();
			break;

		case 'A': AddCustomer();
			break;

		case 'V': ViewAllRooms();
			break;

		case 'e': ResetAllRooms();
			break;

		case'E': ViewEmptyRooms();
			break;

		case 'D': DeleteCustomerfromroom();
			break;

		case 'F': Findcustomerfromroom();
			break;

		case 'S': StoreDataontofile();
			break;

		case 'L': LoadDatafromfile();
			break;

		case 'O': OrderinAlphabeticalOrder();
			break;

		}

	} while (optionselection == 'I', 'A', 'V', 'e', 'E', 'D', 'F', 'S', 'L', 'O');



}



