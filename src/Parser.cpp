#include "iniparser/Parser.h"

#include <iostream>

IniParser::IniParser(const std::string& filepath)
{
    if (!filepath.ends_with(".ini")) {
        std::cerr << "CAUTION: Prefer using .ini files for INI parsing."
                  << std::endl;
    }
}
