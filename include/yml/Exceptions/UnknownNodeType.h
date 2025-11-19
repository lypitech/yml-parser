#pragma once

#include <format>
#include <stdexcept>

namespace yml::exception
{

    class UnknownNodeType final
        : std::runtime_error
    {
    public:
        explicit UnknownNodeType(
            const std::string& type
        )
            : std::runtime_error(std::format(
                "{}: Unknown node type.",
                type
            ))
        {}
    };

}
