#include "sed.hpp"

int main(int argc, char const *argv[])
{
    if (argc != 4){
        std::cerr << WRONG_ARGS_ERR;
        std::cerr << USAGE_MSG;
        return (FAIL);
    }

    std::string fileName = argv[1], toReplace = argv[2], replacement = argv[3], fileText;
    std::ofstream outputFile;

    if (manage_files(fileName, fileText, outputFile) != OKI)
        return (FAIL);

    std::string newText = sed_is_for_losers(fileText, toReplace, replacement);
    outputFile << newText;

    outputFile.close();
    return (OKI);
}

int manage_files(const std::string& fileName,\
                    std::string& fileText, std::ofstream& outputFile)
{
    std::ifstream inputFile(fileName.c_str());
    if (!inputFile.is_open()){
        std::cerr << FILE_OPEN_ERR;
        return (FAIL);
    }

    std::stringstream buffer;
    buffer << inputFile.rdbuf();
    fileText = buffer.str();
    inputFile.close(); // From my understanding the destructor would close the file,
                       // but let's be more explicit.

    outputFile.open((fileName + ".replace").c_str());
    if (!outputFile.is_open()){
        std::cerr << FILE_CREATE_ERR;
        return (FAIL);
    }

    return (OKI);
}


// int main(int argc, char const *argv[])
// {
//     if (argc != 4){
//         std::cerr << WRONG_ARGS_ERR;
//         std::cerr << USAGE_MSG;
//         return (FAIL);
//     }

//     std::string fileName = argv[1], toReplace = argv[2], replacement = argv[3];

//     std::ifstream inputFile(fileName.c_str());
//     if (!inputFile.is_open()) {
//         std::cerr << FILE_OPEN_ERR;
//         return (FAIL);
//     }

//     std::stringstream buffer;
//     buffer << inputFile.rdbuf();
//     std::string fileText = buffer.str();
//     inputFile.close(); // From my understanding the destructor would close the file,
//                        // but let's be more explicit.

//     std::ofstream outputFile((fileName + ".replace").c_str());
//     if (!outputFile.is_open()){
//         std::cerr << FILE_CREATE_ERR;
//         return (FAIL);
//     }

//     std::string newText = sed_is_for_losers(fileText, toReplace, replacement);
//     outputFile << newText;

//     outputFile.close();
//     return (0);
// }
