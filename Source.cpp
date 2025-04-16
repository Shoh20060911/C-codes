#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <exception>
using namespace std;

// Базовый класс транспорта
class Transport {
protected:
	string type;
	string destination;
	double price;
public:
	Transport(string t, string d, double p) : type(t), destination(d), price(p) {}
	virtual void display() {
		cout << type << " to " << destination << " - $" << price;
	}
	string getType() { return type; }
	string getDestination() { return destination; }
	double getPrice() { return price; }
};

class Bus : public Transport {
public:
	Bus(string d, double p) : Transport("Bus", d, p) {}
};

class Train : public Transport {
public:
	Train(string d, double p) : Transport("Train", d, p) {}
};

class Airplane : public Transport {
public:
	Airplane(string d, double p) : Transport("Airplane", d, p) {}
};

// Класс билета
class Ticket {
private:
	static int ticketCounter; // Статический счётчик для генерации уникального ID
	int ticketID;
	string passengerName;
	Transport* transport;
	string travelDate;
public:
	Ticket(string name, Transport* t, string date) : passengerName(name), transport(t), travelDate(date) {
		ticketID = ++ticketCounter;
	}
	void displayTicket() {
		cout << "Ticket ID: " << ticketID
			<< " | Passenger: " << passengerName
			<< " | ";
		transport->display();
		cout << " | Travel Date: " << travelDate << endl;
	}
	int getTicketID() { return ticketID; }
	string getPassengerName() { return passengerName; }
	Transport* getTransport() { return transport; }
	string getTravelDate() { return travelDate; }
};

int Ticket::ticketCounter = 0;

// Класс пользователя
class User {
private:
	string username;
	string password;
	bool isAdmin;
	vector<Ticket*> myTickets; // Компоненты: билеты, купленные пользователем
public:
	User(string uname, string pwd, bool admin = false) : username(uname), password(pwd), isAdmin(admin) {}
	string getUsername() { return username; }
	bool checkPassword(string pwd) { return password == pwd; }
	bool getIsAdmin() { return isAdmin; }
	void addTicket(Ticket* ticket) { myTickets.push_back(ticket); }
	void removeTicket(int ticketID) {
		for (auto it = myTickets.begin(); it != myTickets.end(); ++it) {
			if ((*it)->getTicketID() == ticketID) {
				myTickets.erase(it);
				cout << "Ticket cancelled.\n";
				return;
			}
		}
		cout << "Ticket not found.\n";
	}
	void viewTickets() {
		if (myTickets.empty()) {
			cout << "No bookings found.\n";
		}
		else {
			for (auto ticket : myTickets) {
				ticket->displayTicket();
			}
		}
	}
};

// Класс системы бронирования
class ReservationSystem {
private:
	vector<User*> users;
	vector<Ticket*> allTickets;
	vector<Transport*> transports; // Доступные транспортные средства
public:
	ReservationSystem() {
		// Инициализация транспорта (можно расширить или сделать ввод администратором)
		transports.push_back(new Bus("New York", 25.50));
		transports.push_back(new Train("Los Angeles", 50.00));
		transports.push_back(new Airplane("Chicago", 200.75));
	}
	~ReservationSystem() {
		for (auto t : transports) delete t;
		for (auto u : users) delete u;
		for (auto t : allTickets) delete t;
	}
	void registerUser() {
		string uname, pwd;
		char adminChoice;
		bool admin = false;
		cout << "Enter username: ";
		cin >> uname;
		cout << "Enter password: ";
		cin >> pwd;
		cout << "Register as admin? (y/n): ";
		cin >> adminChoice;
		if (adminChoice == 'y' || adminChoice == 'Y')
			admin = true;
		// Проверка на существование пользователя
		for (auto u : users) {
			if (u->getUsername() == uname) {
				cout << "User already exists!\n";
				return;
			}
		}
		User* newUser = new User(uname, pwd, admin);
		users.push_back(newUser);
		cout << "Registration successful!\n";
	}
	User* loginUser() {
		string uname, pwd;
		cout << "Enter username: ";
		cin >> uname;
		cout << "Enter password: ";
		cin >> pwd;
		for (auto u : users) {
			if (u->getUsername() == uname && u->checkPassword(pwd)) {
				cout << "Login successful!\n";
				return u;
			}
		}
		cout << "Invalid credentials.\n";
		return nullptr;
	}
	void bookTicket(User* user) {
		int transportChoice;
		cout << "\nAvailable Transports:\n";
		for (size_t i = 0; i < transports.size(); i++) {
			cout << i + 1 << ". ";
			transports[i]->display();
			cout << endl;
		}
		cout << "Select transport (1-" << transports.size() << "): ";
		cin >> transportChoice;
		if (transportChoice < 1 || transportChoice >(int)transports.size()) {
			cout << "Invalid choice.\n";
			return;
		}
		string travelDate;
		cout << "Enter travel date (YYYY-MM-DD): ";
		cin >> travelDate;
		try {
			Ticket* newTicket = new Ticket(user->getUsername(), transports[transportChoice - 1], travelDate);
			allTickets.push_back(newTicket);
			user->addTicket(newTicket);
			cout << "Ticket booked successfully!\n";
		}
		catch (exception &e) {
			cout << "Error booking ticket: " << e.what() << endl;
		}
	}
	void viewAllTickets() {
		if (allTickets.empty()) {
			cout << "No bookings available.\n";
		}
		else {
			for (auto ticket : allTickets) {
				ticket->displayTicket();
			}
		}
	}
	void userMenu(User* user) {
		int choice;
		while (true) {
			cout << "\nUser Menu:\n"
				<< "1. Book Ticket\n"
				<< "2. View My Tickets\n"
				<< "3. Cancel Ticket\n"
				<< "4. Logout\n"
				<< "Enter choice: ";
			cin >> choice;
			if (choice == 1) {
				bookTicket(user);
			}
			else if (choice == 2) {
				user->viewTickets();
			}
			else if (choice == 3) {
				int tid;
				cout << "Enter Ticket ID to cancel: ";
				cin >> tid;
				user->removeTicket(tid);
				// Удаление билета из глобального списка
				for (auto it = allTickets.begin(); it != allTickets.end(); ++it) {
					if ((*it)->getTicketID() == tid) {
						allTickets.erase(it);
						break;
					}
				}
			}
			else if (choice == 4) {
				cout << "Logging out...\n";
				break;
			}
			else {
				cout << "Invalid choice.\n";
			}
		}
	}
	void adminMenu(User* adminUser) {
		int choice;
		while (true) {
			cout << "\nAdmin Menu:\n"
				<< "1. View All Tickets\n"
				<< "2. Logout\n"
				<< "Enter choice: ";
			cin >> choice;
			if (choice == 1) {
				viewAllTickets();
			}
			else if (choice == 2) {
				cout << "Logging out...\n";
				break;
			}
			else {
				cout << "Invalid choice.\n";
			}
		}
	}
	void saveBookingsToFile() {
		ofstream file("bookings.csv");
		if (!file) {
			cout << "Error opening file for writing.\n";
			return;
		}
		// Записываем заголовок CSV
		file << "TicketID,PassengerName,TransportType,Destination,Price,TravelDate\n";
		for (auto ticket : allTickets) {
			Transport* t = ticket->getTransport();
			file << ticket->getTicketID() << ","
				<< ticket->getPassengerName() << ","
				<< t->getType() << ","
				<< t->getDestination() << ","
				<< t->getPrice() << ","
				<< ticket->getTravelDate() << "\n";
		}
		file.close();
		cout << "Bookings saved to bookings.csv\n";
	}
};

int main() {
	ReservationSystem system;
	int mainChoice;
	while (true) {
		cout << "\nWelcome to the Ticket Reservation System\n"
			<< "1. Register\n"
			<< "2. Login\n"
			<< "3. Save Bookings to File\n"
			<< "4. Exit\n"
			<< "Enter choice: ";
		cin >> mainChoice;
		if (mainChoice == 1) {
			system.registerUser();
		}
		else if (mainChoice == 2) {
			User* user = system.loginUser();
			if (user) {
				if (user->getIsAdmin())
					system.adminMenu(user);
				else
					system.userMenu(user);
			}
		}
		else if (mainChoice == 3) {
			system.saveBookingsToFile();
		}
		else if (mainChoice == 4) {
			cout << "Exiting system. Goodbye!\n";
			break;
		}
		else {
			cout << "Invalid choice.\n";
		}
	}
	return 0;
}
