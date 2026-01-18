#ifndef SED_HPP
# define SED_HPP

// Library includes:
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

// Macros:
#  define OKI 0
# define FAIL 1

// Messages:
# define USAGE_MSG "Usage: ./sed <filename> <string to replace> <replacement>\n"

# define WRONG_ARGS_ERR "sed: \e[1;31mError:\e[0m wrong number of arguments\n"
# define FILE_OPEN_ERR "sed: \e[1;31mError:\e[0m failed to open file\n"
# define FILE_CREATE_ERR "sed: \e[1;31mError:\e[0m failed to create output file\n"

// Function prototypes:
int         manage_files(const std::string& fileName,\
                std::string& fileText, std::ofstream& outputFile);

// sed.cpp:
std::string sed_is_for_losers(const std::string& text,\
                const std::string& toReplace, const std::string& replacement);

#endif
