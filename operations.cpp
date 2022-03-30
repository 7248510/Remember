//
// Created by Caleb on 3/25/2022.
//

#include "operations.h"

int operations::createFile() {
    std::cin >> fileName;
    //Create the file in write mode
    // Enter the url
    //in a loop until certain key press
    //Use a vector
    //Then execute
    return 0;
};

int operations::modifyFile() {
    //Read file open a file
    std::cout << "Please enter a filename to modify" << std::endl;
    std::cin >> fileName;
    std::ifstream fileTest(fileName);
    std::string modifiedfileName{fileName + "-modified.txt"};

    std::string fileContent, beforeText;
    std::cout << "Please enter your the command before the line" << std::endl;
    std::cin >> beforeText;
    std::ofstream modifiedFile;
    modifiedFile.open(modifiedfileName);
    if (!modifiedFile) {
        std::cout << "File was not created";
    }
    if ( fileTest.is_open() ) {//File needs to be opened
        while (getline (fileTest, fileContent)) {
            modifiedFile << beforeText << " " << fileContent << std::endl;
        }
    }
    //Assuming all the operations complete close out the file then delete the original
    //This needs to be added in
    modifiedFile.close();
    return 0;
};
int operations::deleteFile() {
    //Delete the file
    //List files in the current directory
    //Ask to delete the file
    return 0;
};