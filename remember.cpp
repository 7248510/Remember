//
// Created by Caleb on 3/18/2022.
//

#include "remember.h"
#include "errorCodes.h"

int remember::menu() {
    choice = 5;
    std::cout << option << std::endl;
    //Ask the users input
    if (choice != 1 || choice != 2 || choice != 3) {
        errorCodes failed;
        failed.errorValue = -1;
        int returnValue = failed.errorValue;
        failed.errorMessage(failed.errorValue);
        return returnValue;
    }

    return choice;
}
