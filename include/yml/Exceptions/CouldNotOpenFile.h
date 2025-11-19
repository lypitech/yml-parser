#pragma once

#include <format>
#include <stdexcept>

namespace yml::exception
{

    class CouldNotOpenFile final
        : std::runtime_error
    {
    public:
        explicit CouldNotOpenFile(const std::string& filepath)
            : std::runtime_error(std::format(
                "{}: Could not open file.",
                filepath
            ))
        {}
    };

}
