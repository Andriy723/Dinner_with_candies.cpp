#include "Dinner.h"
#include "Candy.h"
#include <iostream>
#include <array>
#include <string>
using namespace std;

int main() {
    Dinner H;
    Candy C;

    Candy Candy1("Chocolade in the dream", 10.27, 5, 24.78, Bar);
    Candy Candy2("Chopster", 5.63, 64, 843.54, Bar);
    Candy Candy3("Svidella", 11.70, 43, 145.67, Button);
    Candy Candy4("Fileno", 7.45, 74, 1034.54, Gum);

    H.addCandy(Candy1);
    H.addCandy(Candy2);
    H.addCandy(Candy3);
    H.addCandy(Candy4);

    H.printAllCandies();
    H.FindTheMostExpensiveCandies();
    H.SortCandies();
    C.Ate();

    return 0;
}