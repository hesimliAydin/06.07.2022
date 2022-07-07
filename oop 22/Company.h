#pragma once

class Company
{
    vector<Applier*> appliers;

public:
    void hireUp(Applier* cv)
    {
        appliers.push_back(cv);
    }

    void showAllCV()
    {
        for (size_t i = 0; i < appliers.size(); i++)
            cout << *appliers[i] << endl;
    }

    void writeToFile(string filename)
    {
        ofstream fout(filename, ios::out);

        if (!fout)
            throw "File cannot created ";

        if (!fout.is_open())
            throw "File cannot opened ";

        for (size_t i = 0; i < appliers.size(); i++)
        {
            fout << "Name and Surname: " << appliers[i]->getName() << ' ' << appliers[i]->getSurname() << ' ' << endl
                << "Age and speciality: " << appliers[i]->getAge() << ' ' << appliers[i]->getSpeciality() << ' ' << endl
                << "Information and University:  " << appliers[i]->getText() << ' ' << appliers[i]->getUniversity() << ' ' << endl
                << "================================================================" << endl;
        }

        fout.close();
    }

    void readToFile(string filename)
    {
        ifstream file(filename, ios::in);

        if (!file)
            throw "File cannot found !";

        while (!file.eof())
        {
            Applier applier;

            for (size_t i = 0; i < appliers.size(); i++)
            {
                file >> applier.getName();

                file >> applier.getSurname();

                file >> applier.getAge();

                file >> applier.getSpeciality();

                file >> applier.getText();

                file >> applier.getUniversity();
            }

            if (file.peek() != 10)
                break;
        }

        file.close();
    }
};;






















