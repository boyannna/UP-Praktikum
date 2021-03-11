#include <iostream>

class Jedi
{
private:
    char* name;
public:	
	enum rank { silver, gold };
	double midiChlorian; 
	Planet planet; 
	char* spicies;
	char* militaryRank;

	Jedi() {     // Jedi() = default; 
	}          

    // Constructor with parameters
	Jedi(char* _name, enum rank, double _midiChlorian, Planet _planet, char* _spicies, char* _militaryRank) { 
		setName(_name);
		rank ;
		midiChlorian = _midiChlorian;
		planet = _planet;
		spicies = _spicies;
		militaryRank = _militaryRank;
	}
	// Setter
	void setName(char* _name) {
		name = _name;
	}

	// Getter
	int getName() {
		return name;
	}

	// Destructor
	~Jedi() {
	}

	//Copy constructor
	Jedi(const Jedi&);
	
	//operator= 
	Jedi& operator = (const Jedi&);
};

class Planet
{
public:
	char* name;
	char* planetSystem;
	char* republic;
};
class Stormtrooper
{
public:
	char* id;
	enum rank { silver, gold };
	char* type;
	Planet planet;
};


 
int main()
{
	Jedi obj1("John", "gold", 2.500, "Saturn", "Wookiees", "Lieutenant");
	Jedi obj2("Sonya", "silver", 2.000, "Jupiter", "Jawas", "General");


	// Print values
	std::cout << obj1.setName << " " << obj1.planet << " " << obj1.spicies << "\n";
	std::cout << obj2.setName << " " << obj1.planet << " " << obj1.spicies << "\n";

	Jedi myObj;
	myObj.setName("John");
	std::cout << myObj.getName(); 

	return 0;
}