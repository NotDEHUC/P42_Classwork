// P42_Classwork.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>

using namespace std;

struct date {
    int day;
    int month;
    int year;
};

class Student
{
    char* fullName = nullptr;
    date birthday;
    char* phone = nullptr;
    char* country = nullptr;
    char* nameOfUniversity = nullptr;
    char* city = nullptr;
    int groupNum = 0;
public:
    void setFullName(char*);
    void setBirthday(int, int, int);
    void setPhone(char*);
    void setCountry(char*);
    void setNameOfUniversity(char*);
    void setCity(char*);
    void setGroupNum(int);


    void showValues();



    char* getFullName();
    date getBirthday();
    char* getPhone();
    char* getCountry();
    char* getNameOfUniversity();
    char* getCity();
    int getGroupNum();
};



void Student::setFullName(char* n) {
    if (fullName) {
        delete[]fullName;
    }
    fullName = new char[strlen(n) + 1];
    strcpy_s(fullName, strlen(n) + 1, n);
}

void Student::setBirthday(int d, int m, int y) {
    birthday.day = d;
    birthday.month = m;
    birthday.year = y;
}

void Student::setPhone(char* p) {
    if (phone) {
        delete[]phone;
    }
    phone = new char[strlen(p) + 1];
    strcpy_s(phone, strlen(p) + 1, p);
}

void Student::setCountry(char* c) {
    if (country) {
        delete[]country;
    }
    country = new char[strlen(c) + 1];
    strcpy_s(country, strlen(c) + 1, c);
}

void Student::setNameOfUniversity(char* n) {
    if (nameOfUniversity) {
        delete[]nameOfUniversity;
    }
    nameOfUniversity = new char[strlen(n) + 1];
    strcpy_s(nameOfUniversity, strlen(n) + 1, n);
}

void Student::setCity(char* c) {
    if (city) {
        delete[]city;
    }
    city = new char[strlen(c) + 1];
    strcpy_s(city, strlen(c) + 1, c);
}

void Student::setGroupNum(int n) {
    groupNum = n;
}



void Student::showValues() {
    cout << "ПІБ: " << fullName << endl;
    cout << "Номер телефону: " << phone << endl;
    cout << "День народження: " << birthday.day << birthday.month << birthday.year << endl;
    cout << "Країна: " << country << endl;
    cout << "Назва університету: " << nameOfUniversity << endl;
    cout << "Місто: " << city << endl;
    cout << "Номер групи: " << groupNum << endl;
   
}



char* Student::getFullName() {
    return fullName;
}

auto Student::getBirthday() {
    return birthday;
}

char* Student::getPhone() {
    return phone;
}

char* Student::getCountry() {
    return country;
}

char* Student::getNameOfUniversity() {
    return nameOfUniversity;
}

char* Student::getCity() {
    return city;
}

int Student::getGroupNum() {
    return groupNum;
}

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Student people;
    people.setFullName((char*)"I DONT KNOW");
    people.setBirthday(5, 9, 2000);
    people.setPhone((char*)"0961234567");
    people.setCountry((char*)"USA");
    people.setNameOfUniversity((char*)"Very Good University");
    people.setCity((char*)"state Ohayo");
    people.setGroupNum(666);

    people.showValues();

    cout << people.getFullName() << endl;
   
    cout << people.getPhone() << endl;
    cout << people.getCountry() << endl;
    cout << people.getNameOfUniversity() << endl;
    cout << people.getCity() << endl;
    cout << people.getGroupNum() << endl;

}
