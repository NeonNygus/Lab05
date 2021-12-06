#include <string>
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
   /* Zadanie 4
    string init = ("Init");
    string name;
    string name2;
    string name3;
    char tab[100];
    cout << init << " (jest to zainicjowany tekst)";
    cout << "Podaj kilkucz³onowy tekst, a zobaczysz jak program kopiuje, ³¹czy oraz wyœwietla liczbê znaków w podanym tekœcie." << endl;
    cin >> name >> name2;
    name3 = name + name2;
    cout << name3 << endl;
    name.copy(tab, 50);
    cout << tab << endl;
    cout << name3.size() << endl;
    */

    /* Zadanie 5
    char ulica [100], nr_domu [100];
    int skills, staz;

    cout << "Podaj nazwê ulicy na której mieszkasz: ";
    cin.getline(ulica, 100);
    cout << "Podaj nr domu: ";
    cin >> nr_domu;
    cout << "Na ile oceniasz swoje umiejêtnoœci programowania w skali [2 - 5]: ";
    cin >> skills;
    cout << "Twój sta¿ programistyczny: ";
    cin >> staz;
    skills = skills - 1;

    cout << ulica << " " << nr_domu << endl;
    cout << skills << endl;
    cout << staz;
    */

    /* Zadanie 6
    char s[1000];
    int l, v=0, c=0;
    cin.getline(s,1000);
    for (int l = 0; s[l]; l++)
    {
        if (s[l] == 'a' || s[l] == 'e' || s[l] == 'o' || s[l] == 'u' || s[l] == 'y' || s[l] == 'i' || s[l] == 'A' || s[l] == 'E' || s[l] == 'O' || s[l] == 'U' || s[l] == 'Y' || s[l] == 'I')
        {
            v++;
    }
        else if (s[l] == 'q' || s[l] == 'w' || s[l] == 'r' || s[l] == 't' || s[l] == 'p' || s[l] == 's' || s[l] == 'd' || s[l] == 'f' || s[l] == 'g' || s[l] == 'h' || s[l] == 'j' || s[l] == 'k' ||
            s[l] == 'l' || s[l] == 'z' || s[l] == 'x' || s[l] == 'c' || s[l] == 'v' || s[l] == 'b' || s[l] == 'n' || s[l] == 'm' ||
            s[l] == 'Q' || s[l] == 'W' || s[l] == 'R' || s[l] == 'T' || s[l] == 'P' || s[l] == 'S' || s[l] == 'D' || s[l] == 'F' || s[l] == 'G' || s[l] == 'H' || s[l] == 'J' || s[l] == 'K' ||
            s[l] == 'L' || s[l] == 'Z' || s[l] == 'X' || s[l] == 'C' || s[l] == 'V' || s[l] == 'B' || s[l] == 'N' || s[l] == 'M')
        {
            c++;
        }
    }
    cout << "Samogloski : "<<v<<endl;
    cout << "Spolgloski : "<<c; 
    */
} 