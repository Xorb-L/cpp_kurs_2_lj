/*Grundläggande koncept om pekare i C / C++
Deklaration: En pekare deklareras med hjälp av *-operatorn.
Initialisering: En pekare initialiseras med adressen till en variabel med hjälp av &-operatorn.
Dereferering: *-operatorn används för att komma åt värdet som lagras på minnesadressen pekaren pekar på.


Skriv en enkelt exempel som illustrerar hur pekare fungerar i C++: */

#include <iostream>

int main() {

    int number = 60; // vanlig variabel
    int *ptr = &number; // Dekl. en pekare och initsierar den med adressen till 'number'

    std::cout << "Värdet av 'number': " << number << std::endl;
    std::cout << "Adressen till 'number': " << &number << std::endl;
    std::cout << "Värdet som pekaren 'ptr' lagrar (adressen till 'number'): " << ptr << std::endl;
    std::cout << "Värdet som 'ptr' pekar på (dereferering): " << *ptr << std::endl;

    *ptr = 120; // ändrar värdet på 'number' via pekaren

    std::cout << "Det uppdaterade värdet av 'number': " << number << std::endl; //visar upd number

    return 0;
}