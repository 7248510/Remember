//
// Created by Caleb on 3/18/2022.
//

#include "remember.h"
#include "errorCodes.h"

int remember::menu() {
    choice = 0;
    std::cout << option << std::endl;
    //Ask the users input
    std::cin >> choice;
    switch (choice) {
        case 1:
            std::cout << "Modify text" << std::endl;
            choice = 1;
            break;

        case 2:
            std::cout << "Read text" << std::endl;
            choice = 2;
            break;

        case 3:
            std::cout << "Delete file" << std::endl;
            choice = 3;
            break;

        default:
            errorCodes failed;
            failed.errorValue = -1;
            int returnValue = failed.errorValue;
            failed.errorMessage(failed.errorValue);
            return returnValue;
    }
    return choice;
}

void remember::choose() const {

    std::cout << "TEST CASE CHOICE VALUE: " << std::endl;
    std::cout << choice << std::endl;
        switch (choice) {
            case 1:
                operations spawn;
                spawn.modifyFile();
        }
}
