#pragma once

class Applier {

	string name = "";
	string surname = "";
	int age = 0;
	string speciality = "";
	string text = "";
	string university = "";

public:
	Applier() = default;

	Applier(string name,string surname, int age, string speciality, string text,string university)
		:name(name),surname(surname), age(age), speciality(speciality), text(text),university(university){}

	string& getName() { return name; }
	string& getSurname() { return surname; }
	int& getAge() { return age; }
	string& getSpeciality() { return speciality; }
	string& getText() { return text; }
	string& getUniversity() { return university; }


	friend ostream& operator<<(ostream& out, const Applier& a);
	friend istream& operator>>(istream& input, Applier& a);
};

ostream& operator<<(ostream& out, const Applier& a) {
	out << "Name: " << a.name << endl
		<< "Surname: " << a.surname << endl
		<< "Age: " << a.age << endl
		<< "Speciality: " << a.speciality << endl
		<< "Text: " << a.text << endl
		<< "University: " << a.university << endl;


	return out;
}

istream& operator>>(istream& input, Applier& a) {
	cout << "Enter name: ";
	getline(input, a.name);

	cout << "Enter surname: ";
	getline(input, a.surname);

	cout << "Enter Age: ";
	input >> a.age;

	cout << "Enter Speciality: ";
	getline(input, a.speciality);

	cout << "Enter Text: ";
	getline(input, a.text);

	cout << "Enter University: ";
	getline(input, a.university);

	return input;

}

