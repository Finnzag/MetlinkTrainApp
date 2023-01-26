#include <iostream>
#include <vector>

#include "GoodsTrain.h"
#include "PassengerTrain.h"

using namespace std;

// Function declarations
void createMenu();
void createGoodsTrain(int number, std::string type);
void createPassengerTrain(int number, std::string type);
void selectPassengerTrain();
void selectGoodsTrain();
void getTrainType();
void displayLineInfo(const std::string &line);

vector<GoodsTrain> gtVec;
vector<PassengerTrain> pVec;

int main()
{
	cout << "===============" << endl;
	cout << "Metlink\n" << endl;
	cout << "===============" << endl;

	getTrainType();
	getTrainType();
	getTrainType();
	getTrainType();

	char option;

	cout << "Do you want to continue ? [y/n]";
	cin >> option;

	if (option == 'y')
	{
		createMenu();
	}
	else
	{
		exit(1);
	}
}

void createMenu()
{
	char menuSelection;

	system("cls");

	cout << "===============" << endl;
	cout << "Metlink\n" << endl;
	cout << "===============" << endl;

	cout << "a. Passenger Train" << endl;
	cout << "b. Goods Train" << endl;
	cout << "c. Exit" << endl;

	cout << "\nPlease enter a or b to choose the type of train information you want or c to exit (eg. a,b,c):";
	cin >> menuSelection;

	switch (menuSelection)
	{
	case 'a':
		selectPassengerTrain();
		break;
	case 'b':
		selectGoodsTrain();
		break;
	case 'c':
		break;
	default:
		break;
	}
}

void createPassengerTrain(int number, std::string type)
{

	std::string startPlace;
	std::string endPlace;
	std::string driversName;
	int numOfCompartments{};
	int platformNumber{};
	std::string startTime;
	std::string endTime;
	std::string line;
	bool cycleAllowed{};
	std::string trainStatus;
	std::string trainCategory;

	cout << "\nEnter start place of the train (eg. Wellington): ";
	cin >> startPlace;
	cout << "\nEnter end place of the train (eg. UpperHutt): ";
	cin >> endPlace;
	cout << "\nEnter driver's name (eg. Daniel): ";
	cin >> driversName;
	cout << "\nEnter number of compartments: ";
	cin >> numOfCompartments;
	cout << "\nEnter platform number(eg. 3): ";
	cin >> platformNumber;
	cout << "\nEnter start time (eg. 9.00am / 9.00 pm): ";
	cin >> startTime;
	cout << "\nEnter end time (eg. 9.30am / 9.30 pm): ";
	cin >> endTime;
	cout << "\nEnter the line (eg. HuttValley): ";
	cin >> line;
	cout << "\nEnter whether cycle is allowed or not (eg. 0 for false / 1 for true): ";
	cin >> cycleAllowed;
	cout << "\nEnter train status (eg. Departed / Boarding): ";
	cin >> trainStatus;
	cout << "\nEnter the category (eg. Express / AllStops): ";
	cin >> trainCategory;



	PassengerTrain PT(number, type);
	PT.setStartPlace(startPlace);
	PT.setEndPlace(endPlace);
	PT.setDriver(driversName);
	PT.setNumberOfCompartments(numOfCompartments);
	PT.setPlatformNumber(platformNumber);
	PT.setStartTime(startTime);
	PT.setEndTime(endTime);
	PT.setLine(line);
	PT.setCycleAllowed(cycleAllowed);
	PT.setStatus(trainStatus);
	PT.setCategory(trainCategory);

	pVec.push_back(PT);

}

void selectPassengerTrain()
{
	system("cls");

	char menuSelection;

	cout << "===============" << endl;
	cout << "Metlink\n" << endl;
	cout << "===============" << endl;

	cout << "a. Hutt Valley Line" << endl;
	cout << "b. Kapiti Line" << endl;
	cout << "c. Johnsonville Line" << endl;
	cout << "d. Wairarapa Line" << endl;
	cout << "e. Exit" << endl;

	cin >> menuSelection;

	switch (menuSelection)
	{
	case 'a':
		displayLineInfo("HuttValley");
		break;
	case 'b':
		displayLineInfo("Kapiti");
		break;
	case 'c':
		displayLineInfo("Johnsonville");
		break;
	case 'd':
		displayLineInfo("Wairarapa");
		break;
	case 'e':
		exit(1);
		break;
	}
}

void selectGoodsTrain()
{
	system("cls");
	char back;

	cout << "===============" << endl;
	cout << "Metlink\n" << endl;
	cout << "===============" << endl;

	cout << "Sorry, it is under development! Press b and then enter t go back (b):";
	cin >> back;
	createMenu();
}

void getTrainType()
{
	std::string type;
	int trainNumber;

	cout << "\n\n\n==================================================================================" << endl;
	cout << "Enter the Train number (eg. 123) and type of train (eg. Passenger / Goods): ";
	cin >> trainNumber >> type;

	if (type == "Goods")
	{
		createGoodsTrain(trainNumber, type);
	}
	else if (type == "Passenger")
	{
		createPassengerTrain(trainNumber, type);
	}
}

void displayLineInfo(const std::string &line)
{
	for (auto p_vec : pVec)
	{
		if (p_vec.getLine() == line)
		{
			cout << "Train Number: " << p_vec.getTrainNumber() << "        Platform number: " << p_vec.getPlatformNumber() << endl;
			cout << p_vec.getStartPlace() << " -> " << p_vec.getEndPlace() << "            " << p_vec.getCycleAllowed() << endl;
			cout << p_vec.getCategory() << "           " << p_vec.getStatus() << endl;
		}
	}
}

void createGoodsTrain(int number, std::string type)
{
	std::string startPlace;
	std::string endPlace;
	std::string driversName;
	int numOfCompartments{};
	int platformNumber{};
	std::string startTime;
	std::string endTime;

	cout << "\nEnter start place of the train (eg. Wellington): ";
	cin >> startPlace;
	cout << "\nEnter end place of the train (eg. UpperHutt): ";
	cin >> endPlace;
	cout << "\nEnter driver's name (eg. Daniel): ";
	cin >> driversName;
	cout << "\nEnter number of compartments: ";
	cin >> numOfCompartments;
	cout << "\nEnter platform number(eg. 3): ";
	cin >> platformNumber;
	cout << "\nEnter start time (eg. 9.00am / 9.00 pm): ";
	cin >> startTime;
	cout << "\nEnter end time (eg. 9.30am / 9.30 pm): ";
	cin >> endTime;

	GoodsTrain GT(number, type);
	GT.setStartPlace(startPlace);
	GT.setEndPlace(endPlace);
	GT.setDriver(driversName);
	GT.setNumberOfCompartments(numOfCompartments);
	GT.setPlatformNumber(platformNumber);
	GT.setStartTime(startTime);
	GT.setEndTime(endTime);

	gtVec.push_back(GT);
}


