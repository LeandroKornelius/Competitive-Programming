#include <iostream>

int main() {

    std::cout << "How I met your mother:\n";

    int lily, robben, tracy;
    int answer1, answer2, answer3;
    lily = robben = tracy = 0;
    bool notStop = true;

    // Question 1
    while (notStop) {
        std::cout << "Out of the three date options, which is your favorite?\n\n";
        std::cout << "1) Picnic in the park.\n" << "2) Movie night.\n" << "3) Party night.\n";
        std::cin >> answer1;
        
        if (answer1 == 1) {
            lily++;
            notStop = false;
        } else if (answer1 == 2) {
            robben++;
            notStop = false;
        } else if (answer1 == 3) {
            tracy++;
            notStop = false;
        } else {
            std::cout << "Not a valid input, try again please...\n";
        }
    }
    notStop = true;

    // Question 2
    while (notStop) {
        std::cout << "What is your favorite instrument\n\n";
        std::cout << "1) Guitar.\n" << "2) French Horn.\n" << "3) No preference\n";
        std::cin >> answer1;
        
        if (answer1 == 1) {
            tracy++;
            notStop = false;
        } else if (answer1 == 2) {
            robben++;
            notStop = false;
        } else if (answer1 == 3) {
            lily++;
            notStop = false;
        } else {
            std::cout << "Not a valid input, try again please...\n";
        }
    }
    notStop = true;

    // Question 3
    while (notStop) {
        std::cout << "What is your favorite place in the show?\n\n";
        std::cout << "1) McLarens.\n" << "2) The apartment.\n" << "3) Train Station\n";
        std::cin >> answer1;
        
        if (answer1 == 1) {
            robben++;
            notStop = false;
        } else if (answer1 == 2) {
            lily++;
            notStop = false;
        } else if (answer1 == 3) {
            tracy++;
            notStop = false;
        } else {
            std::cout << "Not a valid input, try again please...\n";
        }
    }
    notStop = true;

    // deciding winner
    int max = 0;
    
    if (tracy == robben == lily) {
        std::cout << "Looks like you'll be single\n";
    } else {
        // finding greatest
        if (max < lily) {
            max = lily;
        }
        if (max < robben) {
            max = robben;
        }
        if (max < tracy) {
            max = tracy;
        }

        // showing winner 
        if (max == lily) {
            std::cout << "Your wife will be Lily!\n";
        } else if (max == robben) {
            std::cout << "Your wife will be Robben!\n";
        } else if (max == tracy) {
            std::cout << "Your wife will be Tracy!\n";
        }
    }


    return 0;
}