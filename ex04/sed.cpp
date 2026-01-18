#include "sed.hpp"

std::string sed_is_for_losers(const std::string& text,\
                const std::string& toReplace, const std::string& replacement)
{
    if (toReplace.empty()){
        return (text);
    }

    std::string result;
    size_t current = 0, pos = 0, toReplaceLen = toReplace.length();
    while (text.find(toReplace, current) != std::string::npos){
        pos = text.find(toReplace, current);
        std::string toCopy = text.substr(current, pos - current);
        result.append(toCopy);
        result += replacement;
        current = pos + toReplaceLen;
    }

    result.append(text, current, text.length() - current);
    return (result);
}

    // std::string result;
    // size_t current = 0, pos = 0, toReplaceLen = toReplace.length();
    // while (/*pos = */text.find(toReplace, current) /*|| pos*/ != std::string::npos){
        // pos = text.find(toReplace, current);
        // result.append(text, current, pos - current);
        // result += replacement;
        // current = pos + toReplaceLen;
    // }
