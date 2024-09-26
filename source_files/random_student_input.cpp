#include "random_student_input.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void addStudentsRandomly(vector<Studentas>& studentai) {
    int numberOfStudents;
    cout << "Iveskite studentu kieki: ";
    cin >> numberOfStudents;

    auto seed = static_cast<unsigned int>(time(nullptr) % UINT32_MAX);
    srand(seed);

    for (int i = 0; i < numberOfStudents; ++i) {
        Studentas studentas;
        studentas.vardas = "Vardas" + to_string(i + 1);
        studentas.pavarde = "Pavarde" + to_string(i + 1);

        int numHomework = rand() % 5 + 1;
        for (int j = 0; j < numHomework; ++j) {
            studentas.rezultatai.namuDarbuRezultatai.push_back(rand() % 11);
        }
        studentas.rezultatai.egzaminoRezultatas = rand() % 11;

        studentai.push_back(studentas);
    }
}
