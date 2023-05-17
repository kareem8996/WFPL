#pragma once
#include "User.h"
#include "Admin.h"
#include "Player.h"
#include "Club.h"
#include "User_Team.h"
#include "League.h"
#include <string>
#include <vector>
#include <map>
#include <unordered_map>

using namespace std;

class System {
private:
	static string const choice_error ;
	static vector<string> const domains;

public:
	

	static string startchoice ,
		registerChoice ,
		loginChoice ,
		menuChoice ;
	static int CurrGameWeek;
	static User CurrUser;
	static Admin CurrAdmin;
	static unordered_map<int, User*> AllUsers;//User id, User object
	static unordered_map<int, Admin*> AllAdmins;//Admin id, Admin object
	static unordered_map<string, Club*> AllClubs; //Club name,club object
	static unordered_map < string, unordered_map<int, Player *>> AllPlayers;//position,{player id,player object}
	static unordered_map <int, User_Team*> AllUsersTeams;//User Team id, User Team object
	static unordered_map<int, League*> AllLeagues; //League id, League object
	//============= System Run ===========
	static void RunSys();
	//============= Menus ================
	static void Start_menu();
	static void RegisterMenu();
	static void loginInput();
	static void printUserMenu();
	static void printAdminMenu();
	//============= System functions ==========
	static void printSeprator();
	static void printSeprator_for_errors();
	static void InputFaliure(string& choice, string message);
	static bool Check_Name(string& name);
	static bool Check_Phone(string& Phone);
	static bool Check_Username(string& Username);
	static bool Check_Password(string& Password);
	static bool Check_Email(string& Email);
	static bool Check_EmailDatabase(string&Email);
	static void Pass_Encode(string& pass);
	static bool isNumber(string s);
		
	//============= Registeration functions ================
	static void RegisterUser();
	static void RegisterAdmin();
	static bool Check_Database(string&username);
	static bool Check_PhoneDatabase(string phone);
	//============= login functions====================
	static bool userLogin( string attemptedUsername, string attemptedPassword);
	static bool AdminLogin(string attemptedUsername, string attemptedPassword);
	//================Extra functions=======================
	static User_Team& getsquad(int id);
	static User* getUser(int id);
	static string space2underscore(string text);
	static string underscore2space(string text);
	//================User Menus=======================
	static void ManageSqaudMenu(User_Team& c);
	static void ChangeAccountSettings(User& CurrUser);
	static void ChangeAccountSettings(Admin& CurrAdmin);
	static void Transfers();
	static void ViewPlayers();
	// ======================Player Display=======================
	static void displayPlayers(string position);
	static void displayPlayers(Player *p, bool flag, string delim);
	static void displayClubs();
	//==================File Handling:Read========================
	static void readPlayers();
	static void readClub();
	static void readUsers();
	static void readAdmins();
	static void readUserTeams();
	static void readLeagues();
	//==================File Handling:Write========================
	static void writeUsers();
	static void writeAdmins();
	static void writeUserTeams();
	static void writeLeagues();
	static void writeClub();
	//===================Leagues============================================
	static void createLeague();
	static void joinLeague();
	static void manageLeagues();
	static void displayLeagues();
};